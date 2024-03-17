#include <stdio.h>
#include <string.h>

int main() {
  char secreto[20];

  printf("Ingresa la contraseña: ");
  scanf("%s", secreto);

  if (strcmp(secreto, "password123") == 0) {
    printf("Contraseña correcta, bienvenido!");
  } else {
    printf("Contraseña incorrecta, intenta de nuevo.");
  }

  return 0;
}