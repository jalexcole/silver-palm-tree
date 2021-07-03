#pragma once
#include "raylib.h"
#include "Scene.hpp"

class MainMenu : public Scene2D {
  public:
    int screenWidth;
    int screenHeight;

    MainMenu();

    void update();
    void render();

  private:
    // Image background;
    // SoundManager soundManager;
    Texture2D bgTexture;
    void setBackground();
    void checkInput();
    void selectUp();
    void selectDown();
    void select();
    void reset();
};