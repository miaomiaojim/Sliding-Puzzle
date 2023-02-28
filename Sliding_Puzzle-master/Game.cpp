#include "Game.h"
#include "Gamestate.h"

Game::Game() {
    quit = false;
}

bool Game::init(std::shared_ptr<GameState> state) {
    if (!graphics.setup())
        return false;
    pushState(state);
    return true;
}

void Game::loop()
{
    while(quit == false)
    {
        update();
        render();
    }
    quitGame();
}

void Game::update()
{
    while(SDL_PollEvent(&event))
    {
        if(states.size() > 0){
            states.back()->handleEvents(event);
            states.back()->update();
        }
    }
}

void Game::render()
{
    if(states.size() > 0)
        states.back()->render();
}

void Game::setQuit() {
    quit = true;
}

void Game::toggleCatMode() {
    if (catMode == false)
        catMode = true;
    else if (catMode == true)
        catMode = false;
}

void Game::pushState(std::shared_ptr<GameState> state) {
    states.push_back(state);
    if(state->init(&graphics, this) == false)
        quit = true;
}

void Game::popState() {
    states.pop_back();
    
    if(states.size() == 0)
        quit = true;
}

void Game::quitGame() {
    while(states.size() > 0)
    {
        states.pop_back();
    }
    graphics.destroy();
    SDL_Quit();
}