#include <stdio.h>
#include <stdlib.h>

// Incluimos la librería string.h para poder usar la función strcmp que compara dos cadenas de texto
#include <string.h>

int main()
{
  char clave[50], claveGuardada[] = "clavesegura";
  /*
    Indicamos que clave puede tener hasta 49 caracteres
    ya que el último caracter es para el nulo '\0'
  */

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