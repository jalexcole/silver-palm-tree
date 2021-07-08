#pragma once
#include "../beam.hpp"

class MyGame : public Scene
{
public:
    void draw();
    void update();

private:
    EntityManager entityManager;
    ComponentManager componentManager;
    SystemManager systemManager;
}

class Player : public Entity
{

}

class Board : public Entity
{

}

class Tile : public Entity
{
}

class Location : public Component
{

}

class Sprite : public Component
{
    Texture texture;
}