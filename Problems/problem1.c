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
