#include <stdio.h>

int main()
{
  int fahrenheit, kelvin;

  printf("Ingresa la temperatra en Kelvin: ");
  scanf("%d", &kelvin);

  fahrenheit = kelvin * 9 / 5 - 459.67;

  printf("La temperatura en Fahrenheit  es: %d", fahrenheit);

  return 0;
}