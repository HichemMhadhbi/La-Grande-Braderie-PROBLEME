/*
Chaque ann�e, c'est la tradition, une grande braderie est organis�e dans le village et toute la r�gion y participe. C'est l'occasion pour les habitants de vendre quelques petits objets qui tra�nent dans le grenier depuis des ann�es. Afin que cela soit �quitable, chaque vendeur doit avoir � sa disposition la m�me longueur de rue pour installer ses affaires. Pour d�limiter les emplacements, des marques sont faites � la peinture � intervalles r�guliers. Les villageois vous demandent votre aide pour calculer les positions (c'est-�-dire la distance par rapport au d�but de la rue) auxquelles ces marques doivent �tre faites.

Ce que doit faire votre programme :
Il y a trois entiers � lire : la position de d�part positionDepart, la largeur d'un emplacement largeurEmplacement et le nombre de vendeurs nbVendeurs.

Vous devez afficher une suite de nombres, partant de positionDepart et augmentant de largeurEmplacement � chaque fois. Il y a au total nbVendeurs augmentations � faire. Vous devez afficher la valeur de chacun des nombres de la suite.

EXAMPLEs
EXAMPLE 1
input:
10
5
3
output:
10
15
20
25
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int positionDepart, largeurEmplacement, nbVendeurs, i;
   printf("Donne la nombre de la position de d�part, la largeur d'un emplacement et le nombre de vendeurs :\n");

   scanf("%d %d %d", &positionDepart, &largeurEmplacement, &nbVendeurs);

   for (i = 0; i <= nbVendeurs; i++) {
      printf("Les resultats sont : \n")
      printf("%d\n", positionDepart + i * largeurEmplacement);
   }

   return 0;
}
