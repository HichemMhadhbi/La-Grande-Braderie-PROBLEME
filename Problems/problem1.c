/*
Chaque année, c'est la tradition, une grande braderie est organisée dans le village et toute la région y participe. C'est l'occasion pour les habitants de vendre quelques petits objets qui traînent dans le grenier depuis des années. Afin que cela soit équitable, chaque vendeur doit avoir à sa disposition la même longueur de rue pour installer ses affaires. Pour délimiter les emplacements, des marques sont faites à la peinture à intervalles réguliers. Les villageois vous demandent votre aide pour calculer les positions (c'est-à-dire la distance par rapport au début de la rue) auxquelles ces marques doivent être faites.

Ce que doit faire votre programme :
Il y a trois entiers à lire : la position de départ positionDepart, la largeur d'un emplacement largeurEmplacement et le nombre de vendeurs nbVendeurs.

Vous devez afficher une suite de nombres, partant de positionDepart et augmentant de largeurEmplacement à chaque fois. Il y a au total nbVendeurs augmentations à faire. Vous devez afficher la valeur de chacun des nombres de la suite.

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
   printf("Donne la nombre de la position de départ, la largeur d'un emplacement et le nombre de vendeurs :\n");

   scanf("%d %d %d", &positionDepart, &largeurEmplacement, &nbVendeurs);

   for (i = 0; i <= nbVendeurs; i++) {
      printf("Les resultats sont : \n")
      printf("%d\n", positionDepart + i * largeurEmplacement);
   }

   return 0;
}
