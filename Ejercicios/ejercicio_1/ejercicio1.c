#include <stdio.h>

int main()
{
  int x, y, z;

  printf("Ingresa el valor de X: ");
  scanf("%d", &x); // %d para enteros (int)

  printf("Ingresa el valor de Y: ");
  scanf("%d", &y);

  printf("Ingresa el valor de Z: ");
  scanf("%d", &z);

  printf("Los numeros que ingresate fueron: \n");
  printf("X: %d, Y: %d, Z: %d", x, y, z);

  return 0;
}