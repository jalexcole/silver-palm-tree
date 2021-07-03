#include "SoundManager.hpp"
#include "raylib.h"
#include <string>
#include <iostream>

SoundManager* getInstance() {
    if (!soundManager) {
        soundManager = new SoundManager();
        InitAudioDevice();
    }
    
    return soundManager;
}


SoundManager::SoundManager() {}

static SoundManager* soundManager;

void SoundManager::playSound(std::string path) {

}

void SoundManager::setMusic(std::string path) {
    music = LoadMusicStream(path.c_str());
    PlayMusicStream(music);
    std::cout << "Wanting to play: " + path << std::endl;
}

void SoundManager::update() {
    UpdateMusicStream(music);
}

