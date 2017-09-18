#include "tools.h"

void print_shape(int turn, char game_shape[][3]){

        printf("\n -=- PLAYER %i TURN -=- \n", turn);
        printf("\n");
        printf("      1   2   3   Y\n");
        printf("\n");
        printf(" 1    %c | %c | %c \n", game_shape[0][0], game_shape[0][1], game_shape[0][2]);
        printf("     ---|---|--- \n ");
        printf("2    %c | %c | %c \n", game_shape[1][0], game_shape[1][1], game_shape[1][2]);
        printf("     ---|---|--- \n ");
        printf("3    %c | %c | %c \n", game_shape[2][0], game_shape[2][1], game_shape[2][2]);
        printf("\n X\n");

}

int fill(char game_shape[][3], int turn,  int x, int y, int jogada){

    x = x - 49;
    y = y - 49;

    if(jogada == 1 && turn == 1){
        game_shape[x][y] = 'X';
        return 1;
    }
    else if(jogada == 1 && turn == 2){
        game_shape[x][y] = 'O';
        return 1;
    }
    else{
        if(turn == 1 && game_shape[x][y] == ' '){
            game_shape[x][y] = 'X';
            return 1;
        }
        else if(turn == 2 && game_shape[x][y] == ' '){
            game_shape[x][y] = 'O';
            return 1;
        }
        else{
            return 0;
        }

    }

}

int check_win(char game_shape[][3], int turn, int jogada){

    if(turn == 1){
        if(game_shape[0][0] == 'X' && game_shape[0][1] == 'X' && game_shape[0][2] == 'X' ||
           game_shape[1][0] == 'X' && game_shape[1][1] == 'X' && game_shape[1][2] == 'X' ||
           game_shape[2][0] == 'X' && game_shape[2][1] == 'X' && game_shape[2][2] == 'X' ||
           /* COLUNAS */
           game_shape[0][0] == 'X' && game_shape[1][0] == 'X' && game_shape[2][0] == 'X' ||
           game_shape[0][1] == 'X' && game_shape[1][1] == 'X' && game_shape[2][1] == 'X' ||
           game_shape[0][2] == 'X' && game_shape[1][2] == 'X' && game_shape[2][2] == 'X' ||
           /* DIAGONAIS */
           game_shape[0][0] == 'X' && game_shape[1][1] == 'X' && game_shape[2][2] == 'X' ||
           game_shape[0][2] == 'X' && game_shape[1][1] == 'X' && game_shape[2][0] == 'X' ){
            return turn;
        }
    }
    else {
        if(game_shape[0][0] == 'O' && game_shape[0][1] == 'O' && game_shape[0][2] == 'O' ||
           game_shape[1][0] == 'O' && game_shape[1][1] == 'O' && game_shape[1][2] == 'O' ||
           game_shape[2][0] == 'O' && game_shape[2][1] == 'O' && game_shape[2][2] == 'O' ||
           /* COLUNAS */
           game_shape[0][0] == 'O' && game_shape[1][0] == 'O' && game_shape[2][0] == 'O' ||
           game_shape[0][1] == 'O' && game_shape[1][1] == 'O' && game_shape[2][1] == 'O' ||
           game_shape[0][2] == 'O' && game_shape[1][2] == 'O' && game_shape[2][2] == 'O' ||
           /* DIAGONAIS */
           game_shape[0][0] == 'O' && game_shape[1][1] == 'O' && game_shape[2][2] == 'O' ||
           game_shape[0][2] == 'O' && game_shape[1][1] == 'O' && game_shape[2][0] == 'O' ){
            return turn;
        }
    }
    if(jogada == 9){
        return 0;
    }

}
