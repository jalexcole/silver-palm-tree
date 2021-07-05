#include "InputManager.hpp"
#include "raylib.h"


InputManager* InputManager::getInstance() {
    if (!inputManager) {
        inputManager = new InputManager();
    }
    return inputManager;
}

InputManager* InputManager::inputManager = 0;


InputManager::InputManager() {
    
}

void InputManager::update() {

}

GamePad::GamePad() {
    
}

bool GamePad::isGamepadAvailable(int gamepad){
    return IsGamepadAvailable(gamepad);
}
bool GamePad::isGamepadName(int gamepad, std::string name){
    return IsGamepadName(gamepad, name.c_str());
}

bool GamePad::isGamepadButtonPressed(int gamepad, int button) {
    return IsGamepadButtonPressed(gamepad, button);
}

bool GamePad::isGamepadButtonDown(int gamepad, int button) {
    return IsGamepadButtonDown(gamepad, button);
}
bool GamePad::isGamepadButtonReleased(int gamepad, int button) {
    return IsGamepadButtonReleased(gamepad, button);
}
bool GamePad::isGamepadButtonUp(int gamepad, int button) {
    return IsGamepadButtonUp(gamepad, button);
}
int GamePad::GetGamepadButtonPressed(void) {
    return GetGamepadButtonPressed();
}
int GamePad::getGamepadAxisCount(int gamepad) {
    return GetGamepadAxisCount(gamepad);
}
float GamePad::getGamepadAxisMovement(int gamepad, int axis) {
    return GetGamepadAxisMovement(gamepad, axis);
}



KeyBoard::KeyBoard() {}

bool isKeyPressed(int key) {
    return IsKeyPressed(key);
}
bool isKeyDown(int key) {
    return IsKeyDown(key);
}
bool isKeyReleased(int key) {
    return IsKeyReleased(key);
}
bool isKeyUp(int key) {
    return IsKeyUp(key);
}
void setExitKey(int key) {
    SetExitKey(key);
}
int getKeyPressed(void) {
    return GetKeyPressed();
}
char getCharPressed(void) {
    return GetCharPressed();
}

