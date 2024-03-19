#include <stdio.h>

int main()
{
  int kelvin, celsius;

  printf("Ingresa la temperatra en Kelvin: ");
  scanf("%d", &kelvin);

  celsius = (kelvin - 273.15);

  printf("La temperatura en Celsius  es: %d", celsius);

  return 0;
}