#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Graphics.h"
#include <memory>

class GameState;

class Game {
public:
    Game();
    
    bool init(std::shared_ptr<GameState> state);
    void loop();
    
    void pushState(std::shared_ptr<GameState> state);
    void popState();
    void setQuit();
    
    void toggleCatMode();
    bool isCatMode() { return catMode; }
private:
    void update();
    void render();
    void quitGame();
    
    bool quit    { false };
    bool catMode { false };
    
    Graphics graphics;
    SDL_Event event;
    std::vector<std::shared_ptr<GameState>> states;
};

#endif