#pragma once
#include "../beam.hpp"
#include <vector>

class MyGame : public Scene
{
public:
    MyGame();
    void draw();
    void update();
    void initialize();
private:
    int screenHeight;
    int screenWidth;
    Coordinator coordinator;
    SoundManager* soundManager;
    Color color;
    void checkInput();
    std::vector<std::vector<Rectangle>> rectangleBoard;
    
};

class Player
{
    Entity entity;
};

class Board
{   
    Entity entity;
};

class Tile
{   
    Entity entity;
};

