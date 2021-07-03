#pragma once
// #include "raylib.h"

class InputManager {
  public: 

    // static InputManager& Get(); // Gives this class singleton properties.
    InputManager();
    
    int keyPressed;
    // GamePad gamePad;
    // KeyBoard keyboard;

    void getInput();

    void update();

  private:
    // static InputManager* inputManager;
};

class GamePad {
  public:
    GamePad();
};

class KeyBoard {
  public:
    KeyBoard();
};