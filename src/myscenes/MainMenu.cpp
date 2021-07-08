#include "MainMenu.hpp"
#include "raylib.h"
#include <string>
#include <vector>

MainMenu::MainMenu()
{
    soundManager = SoundManager::getInstance();
    sceneManager = SceneManager::getInstance();
    
    font = LoadFontEx("assets/fonts/RINGM___.TTF", 32, 0, 250);
    selectedIndex = 0;
    options.push_back("Play");
    options.push_back("Exit");
}

void MainMenu::initialize()
{
    screenHeight = GetScreenHeight();
    screenWidth = GetScreenWidth();

    setBackground();
    std::vector<std::string> soundTracks;

    soundTracks.push_back("assets/sfx/DarkWinds.mp3");
    // soundTracks.push_back("assets/sfx/HeroicMinority.mp3");
    soundTracks.push_back("assets/sfx/Littlewargame (Original Soundtrack).mp3");

    soundManager->addTracks(soundTracks);
}

void MainMenu::update()
{   
    checkInput();
}

void MainMenu::draw()
{
    DrawTexture(bgTexture, screenWidth / 2 - bgTexture.width / 2, screenHeight / 2 - bgTexture.height / 2, WHITE);
    // 
    Vector2 fontPosition = { 40.0f, screenHeight / 2.0f - (screenHeight / 8.0f * 3.5f) };
    std::string title = "Little Turn Game";
    int fontSize = 35;
    DrawTextEx(font, title.c_str(), fontPosition, fontSize, 0, BLACK);
    
    int baseHeight = 100;
        // DrawText(name.c_str(), 50, 400, 25, LIGHTGRAY);
        // DrawLine(45, (baseHeight + 25), 200, (baseHeight + 25), BLACK);

        
    for (int i = 0; i < options.size(); i++) {
        Vector2 position = {40, ((baseHeight + 40) + i * 30)};
        if (i == selectedIndex) {
            Vector2 position = {40, ((baseHeight + 40) + i * 30)};
            DrawTextEx(font, options[i].c_str(), position, 32, 0, BLACK);

        } else {
            Vector2 position = {40, ((baseHeight + 40) + i * 30)};
            DrawTextEx(font, options[i].c_str(), position, 28, 0, BLACK);
        }
    }
}

void MainMenu::setBackground()
{
    std::string path = "assets/vfx/TownCenterNew.png";
    Image background = LoadImage(path.c_str());
    bgTexture = LoadTextureFromImage(background);
    UnloadImage(background); // delete png from memory;
}

void MainMenu::checkInput()
{
    if (IsKeyDown(KEY_DOWN) || IsKeyPressed(KEY_S))
    {
        selectDown();
    }

    if (IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W))
    {
        selectUp();
    }

    if (IsKeyPressed(KEY_ENTER))
    {
        select();
    }
}

void MainMenu::selectUp()
{
    if (selectedIndex > 0) {
        selectedIndex--;
    } else {
        selectedIndex = options.size() - 1;
    }
}

void MainMenu::selectDown()
{
    if (selectedIndex >= options.size() - 1) {
        selectedIndex = 0;
    } else {
        selectedIndex++;
    }
}

void MainMenu::select()
{
    // selected = selectedIndex;
    switch (selectedIndex) {
        case 0:
            sceneManager->nextScene();
            break;
        case 1:
            sceneManager->exit();
            break;
        default:
            break;
    }
}

void MainMenu::reset()
{
    // selectedIndex = 0;
    // selected = -1;
}