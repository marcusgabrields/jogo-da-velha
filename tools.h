#ifndef __TOOLS_H__
#define __TOOLS_H__

    #include "config.h"
    #include "tools.c"

    void print_shape(int turn, char game_shape[3][3]);
    int fill(char game_shape[][3], int turn,  int x, int y, int jogada);
    int check_win(char game_shape[][3], int turn, int jogada);

#endif
