#pragma once
#include "raylib.h"
#include <vector>
#include <string>

class SoundManager {
  public:
    static SoundManager* getInstance();

    void update();
    void addTrack(std::string);
    void addTracks(std::vector<std::string>);
    void clearTrack();

  private:
    static SoundManager *soundManager;
    SoundManager();
    int trackIndex;
    std::vector<std::string> trackPaths;
    void loadTrack(int);
    void nextTrack();
    void clearTracks();
    bool isTrackFinished();
    Music music;
};