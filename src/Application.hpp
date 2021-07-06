#pragma once
#include <string>
#include <vector>

#include "beam.hpp"
class Application
{
public:
  Application();

  void initialize();
  void start();

  void render();
  void update();

private:
  SoundManager* soundManager;
  SceneManager* sceneManager;
  void testConditions();

};