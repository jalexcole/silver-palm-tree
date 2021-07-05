#pragma once
#include "../scenes/Scene.hpp"
#include "../scenes/SceneManager.hpp"
#include "raylib.h"


class RaylibSplashScene : public Scene {
public:
    RaylibSplashScene();
    void update();
    void draw();

private:
    SceneManager *sceneManager;
    SoundManager *soundManager;
    float runTime;
    void loadMusic();
    Texture2D texture;

};