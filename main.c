/* <-- BIBLIOTECAS --> */
#include "config.h"
#include "menu.h"
#include "game_pvp.c"
#include "game_pvia.c"
/* <-- BIBLIOTECAS --> */

/* <-- DECLARAÇÃO DE PROCEDIMENTOS --> */
void zerar(char game_shape[][TAM]);
/* <-- DECLARAÇÃO DE PROCEDIMENTOS --> */

/* <-- MAIN --> */
int main(){
    char menu_choice;
    char game_shape[TAM][TAM];
    int start_player;

    zerar(game_shape);

    srand(time(NULL));
    start_player = (rand() % 2) + 1;

    print_menu();
    menu_choice = getch();
    while(menu_choice < 49 || menu_choice > 51) {
        printf("\n Please enter a valid option");
        menu_choice = getch();
    }
    if(menu_choice == 49){
        system("cls");
        print_new_game();
        menu_choice = getch();
        while(menu_choice < 49 || menu_choice > 50) {
            printf("\n Please enter a valid option");
            menu_choice = getch();
        }
        if(menu_choice == 49){
            system("cls");
            print_game_level();
            menu_choice = getch();
            while(menu_choice < 49 || menu_choice > 51) {
                printf("\n Please enter a valid option ");
                menu_choice = getch();
            }
            system("cls");
            print_pvia_menu();
            if(start_player == 1){
                printf("\n  O Player começa (press any key)");
            }
            else{
                printf("\n  O Computador começa (press any key)");
            }
            getch();
            system("cls");
            // CHAMA JOGADOR vs IA Passando o nivel
            game_pvia(game_shape, start_player, menu_choice);
        }
        else{
            system("cls");
            print_pvp_menu();
            if(start_player == 1){
                printf("\n  O Player 1 começa (press any key)");
            }
            else{
                printf("\n  O Player 2 começa (press any key)");
            }
            getch();
            system("cls");
            // CHAMA JOGADOR vs JOGADOR Passando a vez
            game_pvp(game_shape, start_player);
        }
    }

    // Aqui entra game save e EXIT


    system("pause");
}
/* <-- MAIN --> */


/* <-- PROCEDIMENTOS --> */
void zerar(char game_shape[][TAM]){
    int linha, coluna;
    for(linha = 0 ; linha < TAM ; linha++)
        for(coluna = 0 ; coluna < TAM ; coluna++)
            game_shape[linha][coluna] = ' ';
}
/* <-- PROCEDIMENTOS --> */
