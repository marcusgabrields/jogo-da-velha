#include "tools.h"

int game_pvia(char game_shape[][TAM], int turn, char mode);

int game_pvia(char game_shape[][TAM], int turn, char mode){
    char x, y;
    int check, aux, jogada = 1, win = 0;

    srand(time(NULL));

    if(mode == 49){
        while(1){
            if(turn == 1){
                aux = player(game_shape, turn, x, y, jogada);
                if(aux == -1){
                    jogada ++;
                    turn = 2;
                    system("cls");
                }
                else if(aux == 1){
                    system("cls");
                    print_shape(turn, game_shape);
                    printf("\nO Player 1 VENCEU!\n");
                    return 1;
                }
                else{
                    system("cls");
                    print_shape(turn, game_shape);
                    printf("\nO JOGO EMPATOU!\n");
                    return 0;
                }
            }
            else{
                aux = computer_random(game_shape, x, y, turn, jogada);
                if(aux == -1){
                    jogada ++;
                    turn = 1;
                    system("cls");
                }
                else if(aux == 2){
                    system("cls");
                    print_shape(turn, game_shape);
                    printf("\nO Computador VENCEU!\n");
                    return 2;
                }
                else{
                    system("cls");
                    print_shape(turn, game_shape);
                    printf("\nO JOGO EMPATOU!\n");
                    return 0;
                }

            }
        }
    }
    else if(mode == 2){
        while(1){
            if(turn == 1){
                aux = player(game_shape, turn, x, y, jogada);
                if(aux == -1){
                    jogada ++;
                    turn = 2;
                    system("cls");
                }
                else if(aux == 1){
                    system("cls");
                    print_shape(turn, game_shape);
                    printf("\nO Player 1 VENCEU!\n");
                    return 1;
                }
                else{
                    system("cls");
                    print_shape(turn, game_shape);
                    printf("\nO JOGO EMPATOU!\n");
                    return 0;
                }
            }
            else{

            }
        }
    }
    else{
        // Modo Dificil
    }
}

int player(char game_shape[][TAM], int turn, int x, int y, int jogada){
        int check, win = 0;

        print_shape(turn, game_shape);
        printf("\n Enter a value for X: ");
        x = getch();
        printf("%c",x);
        while(x < 49 || x > 51 ){
            printf("\n Please enter a valid option");
            x = getch();
        }
        printf("\n Enter a value for Y: ");
        y = getch();
        printf("%c",y);
        while(y < 49 || y > 51 ){
            printf("\n Please enter a valid option");
            y = getch();
        }
        check = fill(game_shape, turn, x, y, jogada);
        while(check != 1){
            system("cls");
            print_shape(turn, game_shape);
            printf("\n Voce digitou um valor que ja existe.");
            printf("\n Enter a value for X: ");
            x = getch();
            printf("%c",x);
            while(x < 49 || x > 51 ){
                printf("\n Please enter a valid option");
                x = getch();
            }
            printf("\n Enter a value for Y: ");
            y = getch();
            printf("%c",y);
            while(y < 49 || y > 51 ){
                printf("\n Please enter a valid option");
                y = getch();
            }
            check = fill(game_shape, turn, x, y, jogada);
        }
        win = check_win(game_shape, turn, jogada);
        if(win == 1){
            return 1;
        }
        else if(win == 0){
            return 0;
        }
        else{
            return -1;
        }

}

int computer_random(char game_shape[][TAM], int x, int y, int turn, int jogada){
    int check, win = 0;

    x = (rand() % 3) + 49;
    y = (rand() % 3) + 49;
    check = fill(game_shape, turn, x, y, jogada);
    while(check != 1){
        x = (rand() % 3) + 49;
        y = (rand() % 3) + 49;
        check = fill(game_shape, turn, x, y, jogada);
    }
    win = check_win(game_shape, turn, jogada);
    if(win == 2){
        return 2;
    }
    else if(win == 0){
        return 0;
    }
    else{
        return -1;
    }
}
