#pragma once
#include "raylib.h"
#include "../beam.hpp"



class MainMenu : public Scene {
  public:
    

    MainMenu();

    void update();
    void draw();
    void initialize();

  private:
    // Image background;
    int selectedIndex; // index of selectded option
    std::vector<std::string> options;
    

    SceneManager* sceneManager;
    SoundManager* soundManager;
    int screenWidth;
    int screenHeight;
    Texture2D bgTexture;
    Font font;
    void inititalize();
    void setBackground();
    void checkInput();
    void selectUp();
    void selectDown();
    void select();
    void reset();
};