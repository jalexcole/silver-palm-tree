#include "Application.hpp"
#include <string>
#include "raylib.h"
#include <iostream>
#include "MainMenu.hpp"
#include "SceneManager.hpp"

Application::Application()
{
    // sceneManager = new SceneManager();
}

void Application::initialize()
{
    // SetConfigFlags(FLAG_FULLSCREEN_MODE);
    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
    InitWindow(1280, 720, "Little Turn Game");
    InitAudioDevice();
    SetTargetFPS(600); // Set our game to run at 60 frames-per-second

    
}

void Application::start()
{
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
}

void Application::update()
{
}

void Application::exit()
{
}

void Application::changeState(int desiredState)
{
}