#pragma once
#include "../beam.hpp"
#include "raylib.h"

#include <string>


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