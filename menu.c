#include <stdio.h>
#include "menu.h"

void print_menu(){
    printf("\n -=- JOGO DA VELHA -=- \n");
    printf("\n 1 - New Game");
    printf("\n 2 - Saved game");
    printf("\n 3 - EXIT");
    printf("\n Enter your choice ");
}

void print_new_game(){
    printf("\n -=- JOGO DA VELHA -=- \n");
    printf("\n 1 - One player");
    printf("\n 2 - Two players");
    printf("\n Enter your choice ");
}

void print_game_level(){
    printf("\n -=- GAME LEVEL -=- \n");
    printf("\n 1 - Easy");
    printf("\n 2 - Medium");
    printf("\n 3 - Hard");
    printf("\n Enter your choice ");
}

void print_pvp_menu(){
    printf("\n -=- PLAYER vs PLAYER -=- \n");
    printf("\n X - Player 1");
    printf("\n O - Player 2");
    printf("\n\n Sorteando quem vai começar ...");
}

void print_pvia_menu(){
    printf("\n -=- PLAYER vs COMPUTER -=- \n");
    printf("\n X - Player");
    printf("\n O - Computer");
    printf("\n\n Sorteando quem vai começar ...");
}
