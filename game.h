#ifndef GAME_H
#define GAME_H

#include "framework.h"

class Game
{
public:

    //constructor
    Game();



    //de-constructor
    ~Game();



    //Game initializer
    void init(
            const char* title,  // Game title
            int xpos,           // X position of the window when Game starts
            int ypos,           // Y position of the window when Game starts
            int width,          // Width of the window when the Game starts
            int height          // Height of the window when the Game starts
            );



    //Start Game
    void startGame();


    //All Game events will be processed here
    void handleEvents();

    //Update/Redraw stuff to screen
    void update();

    //Render the to screen
    void renderGame();

    //Clean Game before closing
    void clean();

private:

    //monitor the Game status
    bool _is_running;


    //SDL stuff
    SDL_Window     *window      = nullptr;
    SDL_Renderer   *render      = nullptr;
    SDL_Event       event;


};

#endif // GAME_H

