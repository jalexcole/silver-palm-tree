#include "Application.hpp"
#include "raylib.h"
#include "beam.hpp"

#include <iostream>
#include <vector>
#include <string>

#include "myscenes/RaylibSplashScene.hpp"
#include "myscenes/MainMenu.hpp"

Application::Application()
{
    // sceneManager = new SceneManager();
    // Singleton *s1 = Singleton::getInstance();
    Application::soundManager = SoundManager::getInstance();
    Application::sceneManager = SceneManager::getInstance();
}

void Application::initialize()
{
    // SetConfigFlags(FLAG_FULLSCREEN_MODE);
    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
    InitWindow(1280, 720, "Little Turn Game");
    InitAudioDevice();
    SetTargetFPS(6000); // Set our game to run at 60 frames-per-second

    testConditions();
}

void Application::testConditions()
{
    // soundManager->addTrack("assets/sfx/HeroicMinority.mp3");
    // soundManager->addTrack("assets/sfx/Littlewargame (Original Soundtrack).mp3");
    
    // std::vector<Scene> scenes = {RaylibSplashScene raylibSplashScene()};
    
    sceneManager->addScene(new RaylibSplashScene());
    sceneManager->addScene(new MainMenu());
    

}

void Application::start()
{

    // int screenHeight = GetScreenHeight();
    // int screenWidth = GetScreenWidth();
    // std::string path = "assets/vfx/background.png";
    // Image background = LoadImage(path.c_str());
    // Texture2D bgTexture = LoadTextureFromImage(background);
    // UnloadImage(background); // delete png from memory;

    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        update();

        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(BLACK);
        // DrawTexture(bgTexture, screenWidth / 2 - bgTexture.width / 2, screenHeight / 2 - bgTexture.height / 2, WHITE);
        render();
        DrawFPS(0, 0);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}

void Application::render()
{
    sceneManager->render();
}

void Application::update()
{
    sceneManager->update();
    soundManager->update();
}
