#include <stdio.h>

int main()
{
  float somme,nb;
  int size = 0;
  printf("Entrez les notes et terminer par \'C-d\'\n");
  while( scanf("%f",&nb) != EOF)
    {
      printf(">>>>%f\n", nb);
      somme+=nb;
      size++;
    }
  printf("La moyenne est de %f\n", somme/size);
  return 0;
}
