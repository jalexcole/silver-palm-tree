#include "RaylibSplashScene.hpp"


RaylibSplashScene::RaylibSplashScene() {
    SoundManager* soundManager = SoundManager::getInstance();
    SceneManager* sceneManager = SceneManager::getInstance();
    
    Image image = LoadImage("assets/vfx/raylib.png");
    texture = LoadTextureFromImage(image);
    runTime = 0;
    soundManager->addTrack("assets/sfx/annulet-of-absorption.mp3");
}

void RaylibSplashScene::update() {
    runTime += GetFrameTime();
    if (runTime > 5.0f) {
        sceneManager->nextScene();
    }
}