#include "Structure.h"
#include "stdio.h"

NombreRationnel saisie(void){ //Demande le numerateur et denominateur du nombre rationnel souhaité
    NombreRationnel nombre;
    printf("Saisir le numerateur :");
    scanf("%d", &nombre.numerateur);
    printf("Saisir le denominateur :");
    scanf("%d", &nombre.denominateur );
    return nombre;
}


NombreRationnel afficher(NombreRationnel nombre){ // affiche d'une forme simple la nombre rationnel pris en paramètre
    printf("Le nombre rationnel est %d/%d \n", nombre.numerateur, nombre.denominateur );

}


NombreRationnel produitRationnel (NombreRationnel nombre1, NombreRationnel nombre2){ // affiche le produit de deux nombres rationnels pris en paramètre
    int numerateur = nombre1.numerateur * nombre2.numerateur;
    int denominateur = nombre1.denominateur * nombre2.denominateur;
    printf("Le produit des nombres vaut %d/%d", numerateur, denominateur);



}
NombreRationnel additionRationnel (NombreRationnel nombre1, NombreRationnel nombre2){ // affiche la somme de deux rationnels pris en paramètres
    int numerateur = nombre1.numerateur * nombre2.denominateur + nombre1.denominateur * nombre2.numerateur;
    int denominateur = nombre1.denominateur * nombre2.denominateur;
    printf(" et la sommme des nombres vaut %d/%d", numerateur, denominateur);
}








