#include <stdio.h>
#include <windows.h>

int main() {
    int menuPrin;
    int menuAide;
    int compteur = 17;
    //char nom[20] = {0};
    int tabJoueur[10][10] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 0,
                             1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                             1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                             1, 0, 1, 0, 0, 1, 0, 0, 0, 0,
                             1, 0, 1, 0, 0, 1, 0, 0, 0, 0,
                             0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                             0, 0, 1, 1, 1, 0, 0, 0, 0, 0,
                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int vertical;
    int horizontal;

    printf("Bonjour, bienvenue dans la bataille navale !\n");
    printf("Choisissez ce que vous voulez faire: \n\n");
    printf("1. Jouer\n");
    printf("2. Score\n");
    printf("3. Aide\n");
    printf("4. Profil\n");
    printf("5. Quitter\n");
    scanf("%d", &menuPrin);

    switch (menuPrin)
    {
        case 1 : while (compteur != 0) {
                system("cls");
                printf("   1 2 3 4 5 6 7 8 9 10\n");
                for (int i = 0; i < 10; i++) {
                    printf("%2d ", i + 1);
                    for (int y = 0; y < 10; y++) {
                        if (tabJoueur[i][y] < 2) printf("%c ", 255);
                        else if (tabJoueur[i][y] == 2) printf("\033[34m%c \033[0m", 219);
                        else if (tabJoueur[i][y] == 3) {
                            printf("\033[32m%c \033[0m", 219);
                            compteur--;
                        }
                    }
                    printf("\n");
                }
                printf("Ou tirez vous dans la ligne ?:");
                scanf("%d", &vertical);
                printf("Et ou tirez vous dans la colonne ?:");
                scanf("%d", &horizontal);
                if (tabJoueur[vertical - 1][horizontal - 1] == 1) tabJoueur[vertical - 1][horizontal - 1] = 3;
                else if (tabJoueur[vertical - 1][horizontal - 1] == 0) tabJoueur[vertical - 1][horizontal - 1] = 2;
            }

                 printf("Vous avez gangé moussaillon !");
                 system("pause");
                 break;

        case 2 : printf("Pas encore dispobible\n");
                 system("pause");
                 system("cls");
                 main();
                 break;

        case 3 : printf("Pas encore dispobible\n");
            do {
                system("cls");
                printf("Le but du jeu c'est de dire des cases (par exemple A6 ou I9) a l'ordinateur et qu'il\n"
                       "reponde par louper, toucher ou couler. Le tableaux est un 10X10 (de A a J et de 1 a 10)\n"
                       "Si il dit louper, c'est qu'il n'y a pas d'endroit de bateau a la case que vous avez cite.\n"
                       "Si il dit toucher, c'est que vous avez toucher un endroit du bateau et si il dit couler,\n "
                       "c'est que vous avez couler le bateau. Pour gagner, il faut avoir couler les 5 bateaux.\n"
                       "Un porte-avion (5 cases), un croiseur (4 cases), un sous-marin (3 cases),\n"
                       "un contre-torpieur (3 cases) et un torpieur (2 cases). Les bateaux ne peuvent pas etre\n"
                       "en diagonal et ne peuvent pas etre coller. Bonne partie moussaillon ! \n\n\n\n");
                printf("Appuyer sur 1 pour quitter le menu aide :");
                scanf("%d", &menuAide);
            } while (menuAide != 1);
            system("cls");
            main();
            break;
        case 4 : printf("Pas encore dispobible\n");
                 system("pause");
                 system("cls");
                 main();
                 break;

        case 5 : system("exit");
                 break;

        default :
            system("cls");
            main();
            break;
    }
    return 0;
}