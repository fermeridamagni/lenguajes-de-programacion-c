#include <stdio.h>

int main()
{
  int kelvin, celsius;

  printf("Ingresa la temperatra en Celsius: ");
  scanf("%d", &celsius);

  kelvin = (celsius + 273.15);

  printf("La temperatura en Fahrenheit es: %d", kelvin);

  return 0;
}