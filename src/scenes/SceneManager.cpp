#include "SceneManager.hpp"

#include "../audio/SoundManager.hpp"
#include "../input/InputManager.hpp"
#include "Scene.hpp"
#include <iostream>

SceneManager::SceneManager() {
    SceneManager::sceneIndex = -1;
    std::vector<Scene*> scenes;
    
}
SceneManager* SceneManager::getInstance() {
    if (!sceneManager) {
        sceneManager = new SceneManager();
    }
    return sceneManager;
}
SceneManager* SceneManager::sceneManager = 0;

void SceneManager::update() {
    switch (sceneIndex) {
        case -1:
            break;
        default:
            scenes[sceneIndex]->update();
    }
}
void SceneManager::render() {
    switch (sceneIndex) {
        case -1:
            break;
        default:
            scenes[sceneIndex]->draw();
    }
}
void SceneManager::changeScene() {

}
void SceneManager::addScene(Scene* scene) {
    scenes.push_back(scene);
    if (sceneIndex == -1) {
        sceneIndex = 0;
    }
    // std::cout << "SceneName: " << scene->getSceneName() << std::endl;
    // sceneMap[scene->getClassName()] = sceneIndex;

}

void SceneManager::nextScene() {
    if (sceneIndex >= (int) scenes.size() - 1) {
        sceneIndex = 0;
    }
    sceneIndex++;

    std::cout << "Scene count: " << scenes.size() << std::endl;
    scenes[sceneIndex]->initialize();
}

void SceneManager::exit() {
    WindowShouldClose();
}