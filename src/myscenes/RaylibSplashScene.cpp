#include "RaylibSplashScene.hpp"

RaylibSplashScene::RaylibSplashScene()
{
    soundManager = SoundManager::getInstance();
    sceneManager = SceneManager::getInstance();
    initialize();
}

void RaylibSplashScene::update()
{
    runTime += GetFrameTime();
    if (runTime > 5.0f)
    {
        RaylibSplashScene::sceneManager->nextScene();
    }
}

void RaylibSplashScene::initialize()
{

    Image image = LoadImage("assets/vfx/raylib.png");
    texture = LoadTextureFromImage(image);
    runTime = 0;
    soundManager->addTrack("assets/sfx/annulet-of-absorption.mp3");

    screenWidth = GetScreenWidth();
    screenHeight = GetScreenHeight();
}

void RaylibSplashScene::draw()
{
    DrawTexture(texture, screenWidth / 2 - texture.width / 2, screenHeight / 2 - texture.height / 2, WHITE);
}

