#include <stdio.h>
#include <stdlib.h>
#include "Player/bot.h"
#include "Game/game.h"
#include "Renderer/renderer.h"

int main(){
    Bot player_one;
    Bot player_two;
    GameState state;
    Game game(player_one, player_two);
    Renderer interface;
    while((state = game.nextMove()) == ONGOING){
        interface.printBoard(game.getBoardState());
    }

    switch(state){
        case BLACK_WIN:
            break;
        case WHITE_WIN:
            break;
        case WRONG_MOVE:
            break;
        default:
            return 0xFF; //unexpected error
    }
    return 0;
}
