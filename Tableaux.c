
#include "stdio.h"
#include "Fonction.h"
int remplirtableau(int Tab[], int taille){ // permet de remplir d'un nombre de valeur souhaitées un tableau 1D

    int N = 0;
    int i = 0;
    printf("Saisir le nombre d'entiers contenus dans le tableau :");
    scanf("%d", &N );
    if (N > taille){
        printf("Le nombre est superieur a la capacite du tableau");
        return 0;
    }
    else{
        for ( i=0 ; i < N ; i++ ){
            Tab[i] = saisirEntier();
    }

}
    return N;
}
void lePlusGrand (int Tab[], int N ){ // affiche le plus grand nombre d'un tableau 1D
    int i = 0;
    int max = Tab[0];
    for (i = 0 ; i < N ; i++ ){
        if (max < Tab[i]) {
            max = Tab[i];
        }
    }
        printf("Le plus grand entier du tableau est %d", max);

}

void remplirmatriceEtTableau(int Tab1[3][4], int Tab2[], int taille){ // cette procedure remplis une matrice de dimension 2 de valeurs et les copie dans un tableau a une dimension
    int i = 0;
    int j =0;
    for (j =0 ; j < 4 ; j++){
        for ( i=0 ; i < 3 ; i++){
            Tab1[i][j] = saisirEntier();
            Tab2[i] = Tab1[i][j];
        }
    }
}

void afficher2D(int Tab1[3][4]){ // cette procedure affiche mon tableau 2D pour vérifier s'il est conforme
    int i = 0;
    int j =0;
    for (j =0 ; j < 4 ; j++){
        for ( i=0 ; i < 3 ; i++){
            printf("%5d", Tab1[i][j]);

        }
        printf("\n");
}
}