#include "SoundManager.hpp"
#include "raylib.h"
#include <string>
#include <iostream>


// Singleton Stuff Do Not Touch
SoundManager* SoundManager::getInstance() {
    if (!soundManager) {
        soundManager = new SoundManager();
        
        
    }
    
    return soundManager;
}

SoundManager::SoundManager() {}
SoundManager* SoundManager::soundManager = 0;
// End of Singleton Stuff Do Not Touch

void SoundManager::initialize() {
    setMusic("assets/sfx/HeroicMinority.mp3");
}

void SoundManager::addTrack(std::string trackName) {
    // tracks.push_back(trackName);
}

void setTrack(std::string trackName) {

}


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

