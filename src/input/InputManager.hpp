#pragma once
#include <string>


class InputManager {
  public: 

    static InputManager& getInstance(); // Gives this class singleton properties.
    
    
    int keyPressed;
    // GamePad gamePad;
    // KeyBoard keyboard;

    void getInput();

    void update();

  private:
    InputManager();
    static InputManager* inputManager;
};

class GamePad {
  public:
    GamePad();
    bool isGamepadAvailable(int);
    bool isGamepadName(int, std::string);
    std::string* getGamepadName(int);
    bool isGamepadButtonPressed(int, int);
    bool isGamepadButtonDown(int, int);
    bool isGamepadButtonReleased(int, int);
    bool isGamepadButtonUp(int, int);
    int GetGamepadButtonPressed(void);
    int getGamepadAxisCount(int);
    float getGamepadAxisMovement(int, int);
    int setGamepadMapping(std::string);
    
};

class KeyBoard {
  public:
    KeyBoard();
    bool isKeyPressed(int);
    bool isKeyDown(int);
    bool isKeyReleased(int);
    bool isKeyUp(int);
    void setExitKey(int);
    int getKeyPressed(void);
    char getCharPressed(void);
};