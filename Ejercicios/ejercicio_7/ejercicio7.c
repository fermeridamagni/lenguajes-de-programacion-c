#include <stdio.h>
#include <stdlib.h>

int main () {
  int numero;

  printf("Ingresa un numero: ");
  scanf("%d", &numero);

  if (numero > 0 ) {
    printf("El numero %d es positivo", numero);
  } else if (numero < 0) {
    printf("El numero %d es negativo", numero);
  } else {
    printf("El numero %d es cero", numero);
  }

  return 0;
}