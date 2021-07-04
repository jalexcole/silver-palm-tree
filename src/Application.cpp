#include "Application.hpp"
#include <string>
#include "raylib.h"
#include <iostream>
// #include "MainMenu.hpp"
#include "scenes/SceneManager.hpp"
#include "audio/SoundManager.hpp"



Application::Application()
{
    // sceneManager = new SceneManager();
    // Singleton *s1 = Singleton::getInstance();
    Application::soundManager = SoundManager::getInstance();
}

void Application::initialize()
{
    // SetConfigFlags(FLAG_FULLSCREEN_MODE);
    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
    InitWindow(1280, 720, "Little Turn Game");
    InitAudioDevice();
    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
    soundManager->initialize();
    
}

void Application::start()
{

    int screenHeight = GetScreenHeight();
    int screenWidth = GetScreenWidth();
    std::string path = "assets/vfx/background.png";
    Image background = LoadImage(path.c_str());
    Texture2D bgTexture = LoadTextureFromImage(background);
    UnloadImage(background); // delete png from memory; 

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
        DrawTexture(bgTexture, screenWidth/2 - bgTexture.width/2, screenHeight/2 - bgTexture.height/2, WHITE);
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

void Application::render(){
}

void Application::update() {
    soundManager->update();
    
}

void Application::exit()
{
}

void Application::changeState(int desiredState)
{
}