#include <stdio.h>

int main() {
    int menuPrin;
    char nom[20] = {0};




    printf("Bonjour, bienvenue dans la bataille navale !\n");
    printf("Choisissez ce que vous voulez faire: \n\n");
    printf("1. Jouer\n");
    printf("2. Score\n");
    printf("3. Aide\n");
    printf("4. Profil\n");
    printf("5. Quitter\n");
    scanf("%d", &menuPrin);
    do {
        printf("Vous vous etes trompe de chiffre je pense, \nveuillez ressayer:");
        scanf("%d", &menuPrin);
    } while (menuPrin != 1 && menuPrin != 2 && menuPrin != 3 && menuPrin != 4 && menuPrin != 5);


    if (menuPrin == 3) {
        printf("Le but du jeu c'est de dire des cases (par exemple A6 ou I9) à l'ordinateur et qu'il réponde par louper, toucher ou couler."
               "Le tableaux est un 10X10 (de A à J et de 1 à 10) Si il dit louper, c'est qu'il n'y a pas d'endroit de bâteau à la case que "
               "vous avez cite. Si il dit toucher, c'est que vous avez toucher un endroit du bâteau et si il dit couler, c'est que vous avez "
               "couler le bâteau. Pour gagner, il faut avoir couler les 5 bâteaux. Un porte-avion (5 cases), un croiseur (4 cases), "
               "un sous-marin (3 cases), un contre-torpieur (3 cases) et un torpieur (2 cases). Les bâteaux ne peuvent pas etre en diagonal et ne "
               "peuvent pas etre coller. Bonne partie moussaillon !");
    }

    return 0;
}