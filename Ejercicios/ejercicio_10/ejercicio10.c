#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char clave[50], claveGuardada[] = "clavesegura";

  printf("Ingresa la clave: ");
  scanf("%c", clave);

  if (strcmp(clave, claveGuardada) == 0)
  {
    printf("Clave correcta, bienvenido!");
  }
  else
  {
    printf("Clave incorrecta, intenta de nuevo.");
  }

  return 0;
}