#include "Exercice.h"
#include "Structure.h"
#include "Tableaux.h"
#define TAILLE 100
#include "stdio.h"


  void exercice1(){
    NombreRationnel nombre1 = saisie();
    afficher(nombre1);
    NombreRationnel nombre2 = saisie();
    afficher(nombre2);
    produitRationnel(nombre1,nombre2);
    additionRationnel(nombre1,nombre2);

    }

   void exercice2(){
    int Tab[TAILLE]={0};
    int nombreElement = remplirtableau( Tab , TAILLE);
    printf("%d" , nombreElement );
    lePlusGrand( Tab, nombreElement);
}
    void exercice3(){
    int Tab1[3][4]={0};
    int Tab2[12]={0};
    remplirmatriceEtTableau(Tab1 , Tab2 , 12 );
    afficher2D(Tab1);
}