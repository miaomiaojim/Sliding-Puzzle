#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "SDL.h"
#include "Game.h"

// GameState Base Class
class GameState {
public:
    virtual bool init(Graphics* graphics, Game* game) = 0;
    virtual ~GameState() {};
    
    virtual void handleEvents(SDL_Event& e) = 0;
    virtual void update() = 0;
    virtual void render() = 0;
};

#endif