#pragma once

class FontManager {
    private:
        static FontManager* fontManager;
        FontManager();
    public:
        FontManager* getInstance();
};  