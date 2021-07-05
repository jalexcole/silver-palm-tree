#pragma once
#include "raylib.h"
#include "../scenes/Scene.hpp"
#include "../audio/SoundManager.hpp"
#include "../scenes/SceneManager.hpp"
class MainMenu : public Scene {
  public:
    

    MainMenu();

    void update();
    void render();

  private:
    // Image background;
    SceneManager* sceneManager;
    SoundManager* soundManager;
    int screenWidth;
    int screenHeight;
    Texture2D bgTexture;
    void inititalize();
    void setBackground();
    void checkInput();
    void selectUp();
    void selectDown();
    void select();
    void reset();
};