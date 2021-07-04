#pragma once
#include <string>
#include <vector>

#include "input/InputManager.hpp"
#include "audio/SoundManager.hpp"
#include "scenes/SceneManager.hpp"
class Application
{
public:
  Application();

  void initialize();
  void start();

  void render();
  void update();
  void exit();

private:
  // Singleton&  MySingleton = Singleton::instance();
  // InputManager* inputManager = new InputManager;
  SoundManager *soundManager;
  // SceneManager* sceneManager;
  void changeState(int desiredState);
};