#include "tools.h"

int game_pvp(char game_shape[][TAM], int turn);

int game_pvp(char game_shape[][TAM], int turn){
    char x, y;
    int check, jogada = 1, win = 0;

    setlocale(LC_ALL,"Portuguese");

    while(1){
        if(turn == 1){
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
                system("cls");
                print_shape(turn, game_shape);
                printf("\nO Player 1 VENCEU!\n");
                return 1;
            }
            if(win == 0){
                system("cls");
                print_shape(turn, game_shape);
                printf("\nO JOGO EMPATOU!\n");
                return 0;
            }
            jogada ++;
            turn = 2;
            system("cls");
        }
        else{
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
            if(win == 2){
                system("cls");
                print_shape(turn, game_shape);
                printf("\nO Player 2 VENCEU!\n");
                return 2;
            }
            if(win == 0){
                system("cls");
                print_shape(turn, game_shape);
                printf("\nO JOGO EMPATOU!\n");
                return 0;
            }
            jogada ++;
            turn = 1;
            system("cls");
        }
    }
    return 0;

}
