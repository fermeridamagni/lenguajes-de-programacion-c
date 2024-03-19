#include <stdio.h>

int main()
{
  int fahrenheit, kelvin;

  printf("Ingresa la temperatra en Fahrenheit: ");
  scanf("%d", &fahrenheit);

  kelvin = (fahrenheit + 459.67) * 5 / 9;

  printf("La temperatura en Kelvin es: %d", kelvin);

  return 0;
}