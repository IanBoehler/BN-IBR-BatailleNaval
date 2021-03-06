//Auteur Ian Boehler Date 22.03.2019 Version 1.0
#include <stdio.h>
#include <windows.h>

#define SIZE 10
#define STLC 218 // ┌, Single Top Left Corner
#define STRC 191 // ┐, Single Top Right Corner
#define SBLC 192 // └, Single Bottom Left Corner
#define SBRC 217 // ┘, Single Bottom Right Corner
#define SVSB 179 // │, Single Vertical Simple Border
#define SVRB 180 // ┤, Single Vertical Right Border
#define SVLB 195 // ├, Single Vertical Left Border
#define SHSB 196 // ─, Single Horizontal Simple Border
#define SHBB 193 // ┴, Single Horizontal Bottom Border
#define SHTB 194 // ┬, Single Horizontal Top Border
#define SC   197 // ┼, Single Center

int Tableau[10][10] = {{0, 0, 0,  0, 0,  0, 0, 0,  0,  0},
                       {0, 0, 0,  0, 0,  0, 0, 0,  3,  0},
                       {0, 0, 0,  0, 0,  0, 0, 0,  13, 0},
                       {0, 0, -1, 0, 0,  0, 0, 0,  3,  0},
                       {0, 0, 0,  0, 22, 0, 0, 0,  0,  0},
                       {0, 0, 0,  0, 22, 0, 0, 0,  0,  0},
                       {0, 0, 0,  0, 0,  0, 0, 0,  0,  0},
                       {0, 0, 4,  4, 4,  4, 0, -1, 0,  0},
                       {0, 0, 0,  0, 0,  0, 0, 0,  0,  0},
                       {0, 0, 0,  0, 0,  0, 0, 0,  0,  0}};

void TopBorder(int width) {
    printf(" ");

    for (int Lettre = 65; Lettre <= 74; Lettre++) {
        printf("   %c", Lettre);


    }
    printf("\n");
    printf("  %c", STLC);  //┌
    for (int Choix = 0; Choix < width - 1; Choix++) {


        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHTB); // ─┬ 9x
    }
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, STRC); //─┐
}

int Coule[5];


void coule(int x, int y) {
    for (int i = 1; i <= 4; i++) {
        if (Coule[i] == i) {
            for (int s = 0; s < 9; s++) {
                for (int u = 0; u < 9; u++) {
                    if (Tableau[x][y] == 10 + i) {
                        Tableau[x][y] += 10;
                    }
                }
            }
        }
    }
}


void VerticalBarre(int width, int row) {
    char carAff = 'x';
    printf("%2d", row + 1);
    for (int Choix = 0; Choix < width; Choix++) { // C'est les trais du millieu
        carAff = ' ';
        coule(row, Choix);
        // Tir loupé donc à l'eau
        if ((Tableau[row][Choix]) < 0)
            carAff = '~';
        // Tir qui touche donc touché
        if ((Tableau[row][Choix]) > 10)
            carAff = 'X';
        // Tir qui coule le bateau donc coulé
        if ((Tableau[row][Choix]) > 20)
            carAff = '/';
        printf("%c %c ", SVSB, carAff);
    }
    printf("%c", SVSB);
}

void PluseBarre(int width) {
    printf("\n  %c", SVLB);
    for (int Choix = 1; Choix < width; Choix++) { // Les +
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SC);
    }
    printf("%c%c%c%c\n", SHSB, SHSB, SHSB, SVRB);
}

void BottomBorder(int width) {
    printf("\n  %c", SBLC);
    for (int Choix = 1; Choix < width; Choix++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHBB);
    }
    printf("%c%c%c%c", SHSB, SHSB, SHSB, SBRC);
}


int grille(void) {
    SetConsoleOutputCP(65001); // For accented characters
    printf("Une grille basée sur les lignes simples:\n");
    SetConsoleOutputCP(437); // For semi-graphic characters

    TopBorder(SIZE);
    for (int row = 0; row < SIZE; row++) {

        if (row > 0) {
            PluseBarre(SIZE);
        }
        VerticalBarre(SIZE, row);
    }
    BottomBorder(SIZE);
}

char tir[5];

void Partie() {
    int gameover = 0;
    do {
        grille();
        printf("       Tirez :");
        scanf("%s", tir);
        int col = tir[0] - 65;          // Variable pour définir la colonne de la grille
        int ligne = tir[1] - 49;        // Variable pour définir la ligne de la grille
        printf("\nVous avez tirer en %d %d\n", col, ligne);
        if (Tableau[ligne][col] == 0) {
            Tableau[ligne][col] = -1;
            printf("\nA l'eau !\n");
        } else if (Tableau[ligne][col] > 0 && Tableau[ligne][col] < 10) {
            Coule[Tableau[ligne][col]] += 1;
            Tableau[ligne][col] += 10;
            printf("\nToucher\n");
        } else if (Tableau[ligne][col] == 2 || Tableau[ligne][col] == 3 || Tableau[ligne][col] == 4) {
            Coule[Tableau[ligne][col]] += 1;
            Tableau[ligne][col] += 10;

        } else if (Tableau[ligne][col] > 10 || Tableau[ligne][col] == -1) {
            printf("\nVous avez deja tirer dans cette case !\n");
        }
        gameover = 1;

        for (int i = 1; i <= 4; i++) {
            if (Coule[i] != i) {
                gameover = 0;
            }
        }
        if (gameover == 1) {
            printf("\n\nBRAVO VOUS AVEZ GAGNER !");
            system("pause");
        }
    } while (gameover == 0);
}


int main(void) {

    int Aide;
    int Jouer;
    int Quitter;
    int Choix;


    printf("1.Jouer\n\n");

    printf("2.Aide\n\n");

    printf("0.Quitter\n");

    scanf("%d", &Choix);


    switch (Choix) {


        case 1 :

            printf("La seule grille c'est celle si");
            Partie();


            break;
        case 2:
            printf("Les regles sont simple, vous avez des bateaux et vous devez coulez ceux de l'ennemi\n\n");
            printf("Pour ca vous disposez de 3 bateaux le premier de un de long, le deuxieme de deux de long, le troisieme de trois de long\n\n");
            printf("Le systeme de tir n'est pas difficile vous entrez les coordonnees et feu !\n\n");
            printf("Par exemple un type de coordonees c'est B3 pour tirer dans la case B3 le programme vous dira si c'est touche, coule, loupe\n\n");
            break;
        case 0 :
            printf("Fermeture de l'application");
            break;

        default :
            printf("Pas valide");
    }

    system("pause");
    return 0;
}
