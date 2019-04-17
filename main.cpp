#include "framework.h"
#include "game.h"

Game *game = nullptr;

int main()
{

    game = new Game();
    game->init("Chawila Mario", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600);
    game->startGame();

    //Clean everything when Game end
    game->clean();


    //Then delete the pointer
    delete(game);

    return 0;
}

