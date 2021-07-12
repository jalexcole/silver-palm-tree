#include "MyGame.hpp"
// #include "../beam.hpp"

MyGame::MyGame() {
    // screenHeight = GetW();
    screenWidth = GetScreenWidth();
    screenHeight = GetScreenHeight();
    MyGame::coordinator.Init();

}

void MyGame::initialize() {
    int length = 1280;
    int height = 720;

    int size = 128;
    

    for (int i = 0; i < screenHeight; i += size) {
        for (int j = 0; j < screenWidth; j += size) {
            Rectangle rectangle = {i, j, size, size};
            rectangleBoard.push_back(rectangle);
        }
        
    }

    
}

void MyGame::update() {

}

void MyGame::draw() {
    int size = 4;
    

    for (int j = 0; j < screenHeight; j += size) {
        for (int i = 0; i < screenWidth; i += size) {
            // if ((i + i * j) % 2 == 0) {
            //     color = GRAY;
            // } else {
            //     color = BLUE;
            // }
            // Rectangle rectangle = {i, j, size, size};
            // rectangleBoard.push_back(rectangle);
            unsigned char r = GetRandomValue(0, 255);
            unsigned char g = GetRandomValue(0, 255);
            unsigned char b = GetRandomValue(0, 255);
            unsigned char a = GetRandomValue(0, 255);

            color = {r, g, b, a};
            
            DrawRectangle(i, j, size, size, color);
        }
        
    }
    
    // for (int i = 0; i < rectangleBoard.size(); i++) {
    //     DrawRectangleRec(rectangleBoard.at(i), color);
    // }

    
    
}