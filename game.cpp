#include "game.h"


//===========================================
Game::Game()
{

    std::cout << "Game constructor created" << std::endl;
}


Game::~Game()
{

}

//=============================================
//Initialize the Game
//=============================================
void Game::init(
        const char *title,
        int xpos,
        int ypos,
        int width,
        int height
        ){



    //Check if SDL can be initialize before we start the Game
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {


        std::cout << "Game is been initialized" << std::endl;


        // we start by creating SDL window
        this->window = SDL_CreateWindow(
                                        title,
                                        xpos,
                                        ypos,
                                        width,
                                        height,
                                        SDL_WINDOW_RESIZABLE
                                      );

        //create SDL renderer
        this->render = SDL_CreateRenderer(this->window, -1, 0);

        //Set SDL backgroud color
        SDL_SetRenderDrawColor(this->render, 255, 255, 255, 255);

        //then we're sure the game can start running
        this->_is_running = true;
        std::cout << "Game is running" << std::endl;

    }else{
        this->_is_running = false;
        std::cout << "Game Failed to start" << std::endl;
    }


}




//=============================================
//Start Game
//=============================================
void Game::startGame()
{
    while (this->_is_running) {
        this->handleEvents();
        this->update();
        this->renderGame();
    }

}





//===========================================
//Handle Events
//==========================================
void Game::handleEvents()
{

    std::cout << "Polling events" <<std::endl;

    SDL_PollEvent(&this->event);

    switch (this->event.type) {

    case SDL_QUIT:
        this->_is_running = false;
        break;
    default:
        break;
    }
}







//==============================================
//Update
//==============================================
void Game::update()
{

}






//=================================================
//Render Game
//=================================================
void Game::renderGame()
{

    SDL_RenderClear(this->render);

    SDL_RenderPresent(this->render);

}



//====================================================
// clean
//===================================================
void Game::clean()
{
    SDL_DestroyWindow(this->window);
    SDL_DestroyRenderer(this->render);
    SDL_Quit();
    std::cout << "Game cleand successfully" << std::endl;
}
