#pragma once
#include <vector>
#include <map>
#include <string>
#include "Scene.hpp"


#include "../audio/SoundManager.hpp"
#include "../input/InputManager.hpp"


class SceneManager
{
public:
  static SceneManager* getInstance();

  void update();
  void render();
  void changeScene();
  void nextScene();
  void addScene(Scene* scene);

private:
  SceneManager();
  static SceneManager *sceneManager;

  // std::map<std::string sceneName, long index> sceneTable;
  std::vector<Scene*> scenes;
  long sceneIndex;
  
};