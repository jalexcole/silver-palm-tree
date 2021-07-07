#include "SoundManager.hpp"
#include "raylib.h"


SoundManager* SoundManager::getInstance() {
    if (!soundManager) {
        soundManager = new SoundManager();
    }
    return soundManager;
}

SoundManager* SoundManager::soundManager = 0;

SoundManager::SoundManager() {
    // initialize();
    trackIndex = -1;
}

void SoundManager::addTrack(std::string trackPath) {
    trackPaths.push_back(trackPath);

    if (trackIndex == -1) {
        trackIndex = 0;
        loadTrack(trackIndex);
    }
}

void SoundManager::addTracks(std::vector<std::string> paths) {
    clearTracks();
    trackPaths = paths;
    trackIndex = 0;
    loadTrack(trackIndex);
}

void SoundManager::loadTrack(int index) {
    if (!trackPaths.empty()) {
        music = LoadMusicStream(trackPaths[index].c_str());
        PlayMusicStream(music);
    }
}

void SoundManager::nextTrack() {
    if (trackIndex >= (int) trackPaths.size() - 1) {
        trackIndex = 0;
    } else {
        trackIndex++;
    }

    loadTrack(trackIndex);
}

void SoundManager::clearTracks() {
    trackIndex = -1;
    trackPaths.clear();
}

bool SoundManager::isTrackFinished() {
    return  GetMusicTimePlayed(music) > (GetMusicTimeLength(music) - 0.5);
}

void SoundManager::update() {
    switch(trackIndex) {
        case -1:
            break;
        default:
            UpdateMusicStream(music);
            if (isTrackFinished()) {
                nextTrack();
            }
            
            break;
    }
}