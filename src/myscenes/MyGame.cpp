#include "MyGame.hpp"
// #include "../beam.hpp"

MyGame::MyGame() {
    // screenHeight = GetW();
    screenWidth = GetScreenWidth();
    MyGame::coordinator.Init();

}

void initialize() {
    int length = 128;
    int height = 64;

    int size = 128;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < length; j++) {
            
        }
    }
}

void MyGame::update() {

}

void MyGame::draw() {
    // Vector2 size = {128, 128};
    

    for (int j = 0; j < 720; j++) {
        for (int i = 0; i < 1280; i++) {
        if ( (int) (i + j * 720) % 2 == 0) {
            color = GRAY;
        } else {
            color = BLUE;
        }
        DrawRectangle(j, i, 1, 1, color);

        }
    }

    DrawLine(0, 360, 1280, 360, LIME);
    
}