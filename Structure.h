

#ifndef TP5_STRUCTURE_H
#define TP5_STRUCTURE_H
typedef struct{
    int numerateur;
    int denominateur;


}NombreRationnel;

NombreRationnel saisie(void);
NombreRationnel afficher(NombreRationnel rationnel);
NombreRationnel produitRationnel (NombreRationnel nombre1, NombreRationnel nombre2);
NombreRationnel additionRationnel (NombreRationnel nombre1, NombreRationnel nombre2);
#endif //TP5_STRUCTURE_H
