#pragma once
#include "../scenes/Scene.hpp"
#include "../scenes/SceneManager.hpp"
#include "raylib.h"


class RaylibSplashScene : public Scene {
  public:
    RaylibSplashScene();
    void update();
    void draw();
    void initialize();

  private:
    SceneManager *sceneManager;
    SoundManager *soundManager;
    float runTime;
    void loadMusic();
    Texture2D texture;
    int screenWidth;
    int screenHeight;

};