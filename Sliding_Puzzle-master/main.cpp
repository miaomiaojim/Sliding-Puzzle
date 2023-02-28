#include "SDL.h"
#include "Gamestate_Menu.h"

int main() {
    Game game;
    std::shared_ptr<GameState> menustate = std::make_shared<MenuState>();
    if (game.init(menustate))
        game.loop();
    return 0;
}