#include <stdio.h>
#include <stdlib.h>

int main()
{
  int opcion, isValido = 0;
  char *tipoConversion;
  double valor, resultado;

  printf("Ingresa el tipo de conversion a realizar: \n");
  printf("  1. cm a ft\n  2. m a yardas\n  3. ft a cm\n  4. yardas a metros\n  5. km a millas\n  6. millas a km\n");
  scanf("%d", &opcion);

  if (opcion == 1)
  {
    tipoConversion = "Centrimetros(cm) a Pies(ft)";
    isValido = 1;
  }
  else if (opcion == 2)
  {
    tipoConversion = "Metros(m) a yardas";
    isValido = 1;
  }
  else if (opcion == 3)
  {
    tipoConversion = "Pies(ft) a Centimetros(cm)";
    isValido = 1;
  }
  else if (opcion == 4)
  {
    tipoConversion = "Yardas a Metros(m)";
    isValido = 1;
  }
  else if (opcion == 5)
  {
    tipoConversion = "Kilometros(km) a Millas";
    isValido = 1;
  }
  else if (opcion == 6)
  {
    tipoConversion = "Millas a Kilometros(km)";
    isValido = 1;
  }
  else
  {
    tipoConversion = "Opcion no valida";
    isValido = 0;
  }

  printf("Tipo de conversion: \n - %s\n\n", tipoConversion);

  if (isValido == 1)
  {
    printf("Ingresa el valor a convertir de %s:\n", tipoConversion);
    scanf("%lf", &valor);
  }
  else
  {
    return 1;
  }

  if (tipoConversion == "Centrimetros(cm) a Pies(ft)")
  {
    resultado = valor / 30.48;
  }
  else if (tipoConversion == "Metros(m) a yardas")
  {
    resultado = valor * 1.094;
  }
  else if (tipoConversion == "Pies(ft) a Centimetros(cm)")
  {
    resultado = valor * 30.48;
  }
  else if (tipoConversion == "Yardas a Metros(m)")
  {
    resultado = valor / 1.094;
  }
  else if (tipoConversion == "Kilometros(km) a Millas")
  {
    resultado = valor / 1.609;
  }
  else if (tipoConversion == "Millas a Kilometros(km)")
  {
    resultado = valor * 1.609;
  }
  else
  {
    printf("Opcion no valida \n\n Vuelve a intentarlo\n\n");
    return 1;
  }

  printf("El resultado de la conversion es: %f\n", resultado);

  return 0;
}