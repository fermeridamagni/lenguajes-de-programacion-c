#include <stdio.h>
#include <stdlib.h>

int main () {
  int numero;

  printf("Ingresa un numero: ");
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("El numero %d es par", numero);
  } else {
    printf("El numero %d es impar", numero);
  }

  return 0;
}