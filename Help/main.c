#include <stdio.h>

int main() {
    int Aide;
    int Jouer;
    int Quitter;
    int Choix;


    printf("1.Jouer\n\n");

    printf("2.Aide\n\n");

    printf("0.Quitter\n");

    scanf("%d", &Choix);





    switch(Choix){


        case 1 : printf("Lancement du jeu.....Pas encore fait");
            break;
        case 2:  printf("Les regles sont simple, vous avez des bateaux et vous devez coulez ceux de l'ennemi\n");
            printf("Pour ca vous disposez de 3 bateaux le premier de un de long, le deuxieme de deux de long, le troisieme de trois de long\n");
            printf("Le systeme de tir n'est pas difficile vous entrez les coordonnees et Feu !");
            break;
        case 0 : printf("Fermeture de l'application");
            break;

        default : printf("Pas valide");

    }










    return 0;
}