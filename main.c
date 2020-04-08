#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
/*
 * Auteur : Enzo NONNENMACHER
 * Titre : Projet bataille navale pour les modules MA-20 et ICT-431
 * Version : 0.1
 * Date : 18.03.2020
 * Employeur : CPNV
 */

int nbLignescore = 0;
int scoreJeu = 0;
char nom[1] = {0};

int main() {
    int menuPrin = 0;
    int menuAide = 0;
    int menuScore = 0;
    int compteur1 = 0;
    int compteur2 = 0;
    int compteur3 = 0;
    int compteur4 = 0;
    int tabJoueur1[10][10] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, // Initialisation des cases du tableaux1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                              1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                              1, 0, 1, 0, 0, 1, 0, 0, 0, 0,
                              1, 0, 1, 0, 0, 1, 0, 0, 0, 0,
                              1, 0, 1, 0, 0, 1, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 1, 1, 1, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int tabJoueur2[10][10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // Initialisation des cases du tableaux2, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                              0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
                              0, 0, 1, 0, 1, 1, 1, 0, 0, 1,
                              0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
                              0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 1, 0, 0, 0, 1, 1, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                              1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int tabJoueur3[10][10] = {0, 0, 1, 1, 1, 1, 1, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                              1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                              1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                              0, 0, 0, 0, 1, 1, 1, 1, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int tabJoueur4[10][10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                              1, 0, 0, 0, 0, 0, 0, 1, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
                              1, 1, 1, 0, 0, 0, 0, 1, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
                              0, 0, 0, 0, 0, 0, 0, 1, 0, 1,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                              0, 0, 0, 0, 1, 1, 1, 0, 0, 1,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int vertical = 0;
    int horizontal = 0;
    int menuJeu = 0;
    int choisirMap = 0;
    int compteurCoup = 0;

    printf("Bonjour, bienvenue dans la bataille navale !\n");
    printf("Choisissez ce que vous voulez faire: \n\n");
    printf("1. Jouer\n");
    printf("2. Score\n");
    printf("3. Aide\n");
    printf("4. Quitter\n");
    scanf("%d", &menuPrin);

   srand( (unsigned)time( NULL ) );
   choisirMap = 1 + rand() % 4;

    switch (menuPrin)
    {
        case 1 :
                 switch (choisirMap) {
                     case 1 :
                         while (compteur1 != 17) {
                             system("cls");
                             // Affichage de la légende
                             printf("Louper : ");
                             printf("\033[34m%c \033[0m", 219);
                             printf("Toucher : ");
                             printf("\033[32m%c \033[0m", 219);
                             printf("Couler : %c\n\n", 219);
                             // Affichage du tableau
                             printf("   1 2 3 4 5 6 7 8 9 10\n");
                             for (int i = 0; i < 10; i++) {
                                 printf("%2d ", i + 1);
                                 for (int y = 0; y < 10; y++) {
                                     if (tabJoueur1[i][y] < 2) printf("%c ", 255);
                                     else if (tabJoueur1[i][y] == 2) printf("\033[34m%c \033[0m", 219);
                                     else if (tabJoueur1[i][y] == 3) printf("\033[32m%c \033[0m", 219);
                                     else if (tabJoueur1[i][y] == 5) printf("%c ", 219);
                                 }
                                 printf("\n");
                             }
                             do {
                                 printf("Ou tirez vous dans la ligne ?:");
                                 scanf("%d", &vertical);
                             } while (vertical > 11);
                             do {
                                 printf("Et ou tirez vous dans la colonne ?:");
                                 scanf("%d", &horizontal);
                             } while (horizontal > 11);
                             compteurCoup++;
                             if (tabJoueur1[vertical - 1][horizontal - 1] == 1)
                                 tabJoueur1[vertical - 1][horizontal - 1] = 3;
                             else if (tabJoueur1[vertical - 1][horizontal - 1] == 0)
                                 tabJoueur1[vertical - 1][horizontal - 1] = 2;
                             if (tabJoueur1[vertical - 1][horizontal - 1] == 3) compteur1 = compteur1 + 1;

                             if ((tabJoueur1[0][7] == 3) &&
                                 (tabJoueur1[0][8] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur1[0][7] = 5;
                                 tabJoueur1[0][8] = 5;
                             }
                             if ((tabJoueur1[7][2] == 3) && (tabJoueur1[7][3] == 3) &&
                                 (tabJoueur1[7][4] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur1[7][2] = 5;
                                 tabJoueur1[7][3] = 5;
                                 tabJoueur1[7][4] = 5;
                             }
                             if ((tabJoueur1[1][0] == 3) && (tabJoueur1[2][0] == 3) && (tabJoueur1[3][0] == 3) &&
                                 (tabJoueur1[4][0] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur1[1][0] = 5;
                                 tabJoueur1[2][0] = 5;
                                 tabJoueur1[3][0] = 5;
                                 tabJoueur1[4][0] = 5;
                             }
                             if ((tabJoueur1[1][5] == 3) && (tabJoueur1[2][5] == 3) && (tabJoueur1[3][5] == 3) &&
                                 (tabJoueur1[4][5] == 3) &&
                                 (tabJoueur1[5][5] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur1[1][5] = 5;
                                 tabJoueur1[2][5] = 5;
                                 tabJoueur1[3][5] = 5;
                                 tabJoueur1[4][5] = 5;
                                 tabJoueur1[5][5] = 5;
                             }
                             if ((tabJoueur1[2][2] == 3) && (tabJoueur1[3][2] == 3) &&
                                 (tabJoueur1[4][2] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur1[2][2] = 5;
                                 tabJoueur1[3][2] = 5;
                                 tabJoueur1[4][2] = 5;
                             }
                         }
                             do {
                                 system("cls");
                                 printf("Entrez votre nom:\n");
                                 scanf("%s", nom);
                                 printf("\nVous avez gange moussaillon !\n");
                                 nbLignescore++;
                                 printf("Votre nombre de coup: %d\n", compteurCoup);
                                 scoreJeu = compteurCoup;
                                 printf("Taper 1 pour revenir au menu principal : ");
                                 scanf("%d", &menuJeu);
                             } while (menuJeu != 1);
                             system("cls");
                             main();
                         break;
                     case 2 :
                         while (compteur2 != 17) {
                             system("cls");
                             // Affichage de la légende
                             printf("Louper : ");
                             printf("\033[34m%c \033[0m", 219);
                             printf("Toucher : ");
                             printf("\033[32m%c \033[0m", 219);
                             printf("Couler : %c\n\n", 219);
                             printf("   1 2 3 4 5 6 7 8 9 10\n");
                             // Affichage du tableau
                             for (int a = 0; a < 10; a++) {
                                 printf("%2d ", a + 1);
                                 for (int q = 0; q < 10; q++) {
                                     if (tabJoueur2[a][q] < 2) printf("%c ", 255);
                                     else if (tabJoueur2[a][q] == 2) printf("\033[34m%c \033[0m", 219);
                                     else if (tabJoueur2[a][q] == 3) printf("\033[32m%c \033[0m", 219);
                                     else if (tabJoueur2[a][q] == 5) printf("%c ", 219);
                                 }
                                 printf("\n");
                             }
                             do {
                                 printf("Ou tirez vous dans la ligne ?:");
                                 scanf("%d", &vertical);
                             } while (vertical > 11);
                             do {
                                 printf("Et ou tirez vous dans la colonne ?:");
                                 scanf("%d", &horizontal);
                             } while (horizontal > 11);
                             compteurCoup++;
                             if (tabJoueur2[vertical - 1][horizontal - 1] == 1)
                                 tabJoueur2[vertical - 1][horizontal - 1] = 3;
                             else if (tabJoueur2[vertical - 1][horizontal - 1] == 0)
                                 tabJoueur2[vertical - 1][horizontal - 1] = 2;
                             if (tabJoueur2[vertical - 1][horizontal - 1] == 3) compteur2 = compteur2 + 1;

                             if ((tabJoueur2[5][6] == 3) &&
                                 (tabJoueur2[5][7] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur2[5][6] = 5;
                                 tabJoueur2[5][7] = 5;
                             }
                             if ((tabJoueur2[2][4] == 3) && (tabJoueur2[2][5] == 3) &&
                                 (tabJoueur2[2][6] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur2[2][4] = 5;
                                 tabJoueur2[2][5] = 5;
                                 tabJoueur2[2][6] = 5;
                             }
                             if ((tabJoueur2[8][0] == 3) && (tabJoueur2[8][1] == 3) && (tabJoueur2[8][2] == 3) &&
                                 (tabJoueur2[8][3] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur2[8][0] = 5;
                                 tabJoueur2[8][1] = 5;
                                 tabJoueur2[8][2] = 5;
                                 tabJoueur2[8][3] = 5;
                             }
                             if ((tabJoueur2[1][2] == 3) && (tabJoueur2[2][2] == 3) && (tabJoueur2[3][2] == 3) &&
                                 (tabJoueur2[4][2] == 3) &&
                                 (tabJoueur2[5][2] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur2[1][2] = 5;
                                 tabJoueur2[2][2] = 5;
                                 tabJoueur2[3][2] = 5;
                                 tabJoueur2[4][2] = 5;
                                 tabJoueur2[5][2] = 5;
                             }
                             if ((tabJoueur2[1][9] == 3) && (tabJoueur2[2][9] == 3) &&
                                 (tabJoueur2[3][9] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur2[1][9] = 5;
                                 tabJoueur2[2][9] = 5;
                                 tabJoueur2[3][9] = 5;
                             }
                         }
                             do {
                                 system("cls");
                                 printf("Entrez votre nom:\n");
                                 scanf("%s", nom);
                                 printf("Vous avez gange moussaillon !\n");
                                 nbLignescore++;
                                 printf("Votre nombre de coup: %d\n", compteurCoup);
                                 scoreJeu = compteurCoup;
                                 printf("Taper 1 pour revenir au menu principal : ");
                                 scanf("%d", &menuJeu);
                             } while (menuJeu != 1);
                             system("cls");
                             main();
                         break;
                     case 3 :
                         while (compteur3 != 17) {
                             system("cls");
                             // Affichage de la légende
                             printf("Louper : ");
                             printf("\033[34m%c \033[0m", 219);
                             printf("Toucher : ");
                             printf("\033[32m%c \033[0m", 219);
                             printf("Couler : %c\n\n", 219);
                             printf("   1 2 3 4 5 6 7 8 9 10\n");
                             // Affichage du tableau
                             for (int v = 0; v < 10; v++) {
                                 printf("%2d ", v + 1);
                                 for (int u = 0; u < 10; u++) {
                                     if (tabJoueur3[v][u] < 2) printf("%c ", 255);
                                     else if (tabJoueur3[v][u] == 2) printf("\033[34m%c \033[0m", 219);
                                     else if (tabJoueur3[v][u] == 3) printf("\033[32m%c \033[0m", 219);
                                     else if (tabJoueur3[v][u] == 5) printf("%c ", 219);
                                 }
                                 printf("\n");
                             }
                             do {
                                 printf("Ou tirez vous dans la ligne ?:");
                                 scanf("%d", &vertical);
                             } while (vertical > 11);
                             do {
                                 printf("Et ou tirez vous dans la colonne ?:");
                                 scanf("%d", &horizontal);
                             } while (horizontal > 11);
                             compteurCoup++;
                             if (tabJoueur3[vertical - 1][horizontal - 1] == 1)
                                 tabJoueur3[vertical - 1][horizontal - 1] = 3;
                             else if (tabJoueur3[vertical - 1][horizontal - 1] == 0)
                                 tabJoueur3[vertical - 1][horizontal - 1] = 2;
                             if (tabJoueur3[vertical - 1][horizontal - 1] == 3) compteur3 = compteur3 + 1;

                             if ((tabJoueur3[2][0] == 3) &&
                                 (tabJoueur3[2][1] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur3[2][0] = 5;
                                 tabJoueur3[2][1] = 5;
                             }
                             if ((tabJoueur3[6][0] == 3) && (tabJoueur3[6][1] == 3) &&
                                 (tabJoueur3[6][2] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur3[6][0] = 5;
                                 tabJoueur3[6][1] = 5;
                                 tabJoueur3[6][2] = 5;
                             }
                             if ((tabJoueur3[8][4] == 3) && (tabJoueur3[8][5] == 3) && (tabJoueur3[8][6] == 3) &&
                                 (tabJoueur3[8][7] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur3[8][4] = 5;
                                 tabJoueur3[8][5] = 5;
                                 tabJoueur3[8][6] = 5;
                                 tabJoueur3[8][7] = 5;
                             }
                             if ((tabJoueur3[0][2] == 3) && (tabJoueur3[0][3] == 3) && (tabJoueur3[0][4] == 3) &&
                                 (tabJoueur3[0][5] == 3) &&
                                 (tabJoueur3[0][6] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur3[0][2] = 5;
                                 tabJoueur3[0][3] = 5;
                                 tabJoueur3[0][4] = 5;
                                 tabJoueur3[0][5] = 5;
                                 tabJoueur3[0][6] = 5;
                             }
                             if ((tabJoueur3[3][6] == 3) && (tabJoueur3[4][6] == 3) &&
                                 (tabJoueur3[5][6] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur3[3][6] = 5;
                                 tabJoueur3[4][6] = 5;
                                 tabJoueur3[5][6] = 5;
                             }
                         }
                         do {
                             system("cls");
                             printf("Entrez votre nom:\n");
                             scanf("%s", nom);
                             printf("Vous avez gange moussaillon !\n");
                             nbLignescore++;
                             printf("Votre nombre de coup: %d\n", compteurCoup);
                             scoreJeu = compteurCoup;
                             printf("Taper 1 pour revenir au menu principal : ");
                             scanf("%d", &menuJeu);
                         } while (menuJeu != 1);
                         system("cls");
                         main();
                     break;

                     case 4 :
                         while (compteur4 != 17) {
                             system("cls");
                             // Affichage de la légende
                             printf("Louper : ");
                             printf("\033[34m%c \033[0m", 219);
                             printf("Toucher : ");
                             printf("\033[32m%c \033[0m", 219);
                             printf("Couler : %c\n\n", 219);
                             printf("   1 2 3 4 5 6 7 8 9 10\n");
                             // Affichage du tableau
                             for (int v = 0; v < 10; v++) {
                                 printf("%2d ", v + 1);
                                 for (int u = 0; u < 10; u++) {
                                     if (tabJoueur4[v][u] < 2) printf("%c ", 255);
                                     else if (tabJoueur4[v][u] == 2) printf("\033[34m%c \033[0m", 219);
                                     else if (tabJoueur4[v][u] == 3) printf("\033[32m%c \033[0m", 219);
                                     else if (tabJoueur4[v][u] == 5) printf("%c ", 219);
                                 }
                                 printf("\n");
                             }
                             do {
                                 printf("Ou tirez vous dans la ligne ?:");
                                 scanf("%d", &vertical);
                             } while (vertical > 11);
                             do {
                                 printf("Et ou tirez vous dans la colonne ?:");
                                 scanf("%d", &horizontal);
                             } while (horizontal > 11);
                             compteurCoup++;
                             if (tabJoueur4[vertical - 1][horizontal - 1] == 1)
                                 tabJoueur4[vertical - 1][horizontal - 1] = 3;
                             else if (tabJoueur4[vertical - 1][horizontal - 1] == 0)
                                 tabJoueur4[vertical - 1][horizontal - 1] = 2;
                             if (tabJoueur4[vertical - 1][horizontal - 1] == 3) compteur4 = compteur4 + 1;

                             if ((tabJoueur4[0][0] == 3) &&
                                 (tabJoueur4[1][0] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur4[0][0] = 5;
                                 tabJoueur4[1][0] = 5;
                             }
                             if ((tabJoueur4[3][0] == 3) && (tabJoueur4[3][1] == 3) &&
                                 (tabJoueur4[3][2] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur4[3][0] = 5;
                                 tabJoueur4[3][1] = 5;
                                 tabJoueur4[3][2] = 5;
                             }
                             if ((tabJoueur4[5][9] == 3) && (tabJoueur4[6][9] == 3) && (tabJoueur4[7][9] == 3) &&
                                 (tabJoueur4[8][9] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur4[5][9] = 5;
                                 tabJoueur4[6][9] = 5;
                                 tabJoueur4[7][9] = 5;
                                 tabJoueur4[8][9] = 5;
                             }
                             if ((tabJoueur4[1][7] == 3) && (tabJoueur4[2][7] == 3) && (tabJoueur4[3][7] == 3) &&
                                 (tabJoueur4[4][7] == 3) &&
                                 (tabJoueur4[5][7] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur4[1][7] = 5;
                                 tabJoueur4[2][7] = 5;
                                 tabJoueur4[3][7] = 5;
                                 tabJoueur4[4][7] = 5;
                                 tabJoueur4[5][7] = 5;
                             }
                             if ((tabJoueur4[7][4] == 3) && (tabJoueur4[7][5] == 3) &&
                                 (tabJoueur4[7][6] == 3)) { // Mettre les cases d'un bâteau touché entièrement en coulé
                                 tabJoueur4[7][4] = 5;
                                 tabJoueur4[7][5] = 5;
                                 tabJoueur4[7][6] = 5;
                             }
                         }
                         do {
                             system("cls");
                             printf("Entrez votre nom:\n");
                             scanf("%s", nom);
                             printf("Vous avez gange moussaillon !\n");
                             nbLignescore++;
                             printf("Votre nombre de coup: %d\n", compteurCoup);
                             scoreJeu = compteurCoup;
                             printf("Taper 1 pour revenir au menu principal : ");
                             scanf("%d", &menuJeu);
                         } while (menuJeu != 1);
                         system("cls");
                         main();
                     break;

                     default: system("cls");
                     break;
                 }

        case 2 : if (nbLignescore <= 0) {
                do {
                    system("cls");
                    printf("Vous n'avez pas encore jouer\n");
                   printf("taper 1 pour revenir au menu pricipal: \n");
                   scanf("%d", &menuScore);
               } while(menuScore != 1);
               system("cls");
               main();
        }
        do {
            system("cls");
            printf("Nom                  Score\n");
            for (int w = 0; w < nbLignescore; w++) {
                    printf("%s                  ", nom);
                    printf("%d", scoreJeu);
            }
            printf("\n\n\n\nTaper 1 pour revenir au menu pricipal: \n");
            scanf("%d", &menuScore);
        } while (menuScore != 1);
                 system ("cls");
                 main();
                 break;

        case 3 : printf("Pas encore dispobible\n");
            do {
                system("cls");
                printf("Le but du jeu c'est de dire des cases (par exemple A6 ou I9) a l'ordinateur et qu'il\n" // Aide pour le joueur
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

        case 4 : system("exit");
                 break; 

        default :
            system("cls");
            main();
            break;
    }
    return 0;
}