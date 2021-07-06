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

    Application::soundManager = SoundManager::getInstance();
    Application::sceneManager = SceneManager::getInstance();
}

void Application::initialize()
{
    // SetConfigFlags(FLAG_FULLSCREEN_MODE);
    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
    InitWindow(1280, 720, "Little Turn Game");
    InitAudioDevice();
    SetTargetFPS(144); // Set our game to run at 60 frames-per-second

    testConditions();
}

void Application::testConditions()
{
    sceneManager->addScene(new RaylibSplashScene());
    sceneManager->addScene(new MainMenu());
}

void Application::start() {
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
