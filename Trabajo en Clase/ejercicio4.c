#include <stdio.h>

int main()
{
  double x, y, respuesta;

  printf("Ingrese el valor de x: ");
  scanf("%lf", &x);
  printf("Ingrese el valor de y: ");
  scanf("%lf", &y);

  respuesta = (x / y);

  printf("El resultado de la division es: %f", respuesta);

  return 0;
}
