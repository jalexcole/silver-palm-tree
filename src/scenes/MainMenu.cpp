#include "MainMenu.hpp"
#include "raylib.h"
#include <string>

MainMenu::MainMenu() {
    screenHeight = GetScreenHeight();
    screenWidth = GetScreenWidth();
    
    setBackground();
    soundTracks.push_back("assets/sfx/HeroicMinority.mp3");
    // soundManager->setMusic(music);
}

void MainMenu::render() {
    DrawTexture(bgTexture, screenWidth/2 - bgTexture.width/2, screenHeight/2 - bgTexture.height/2, WHITE);
}

void MainMenu::update() {
    
}

void MainMenu::setBackground() {
    std::string path = "assets/vfx/background.png";
    Image background = LoadImage(path.c_str());
    bgTexture = LoadTextureFromImage(background);
    UnloadImage(background); // delete png from memory; 
}

void MainMenu::checkInput() {
    if (IsKeyDown(KEY_DOWN) || IsKeyPressed(KEY_S)) {
        selectDown();
    }

    if (IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W)) {
        selectUp();
    }

    if (IsKeyPressed(KEY_ENTER)) {
        select();
    }
}

void MainMenu::selectUp() {
    // if (selectedIndex > 0) {
    //     selectedIndex--;
    // } else {
    //     selectedIndex = options.size() - 1;
    // }
}

void MainMenu::selectDown() {
    //     if (selectedIndex >= options.size() - 1) {
    //     selectedIndex = 0;
    // } else {
    //     selectedIndex++;
    // }
}



void MainMenu::select() {
// selected = selectedIndex;
}

void MainMenu::reset() {
    // selectedIndex = 0;
    // selected = -1;
}