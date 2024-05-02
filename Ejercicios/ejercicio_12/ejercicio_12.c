#include <stdio.h>

int main()
{
  int fahrenheit, celsius;

  printf("Ingresa la temperatra en Fahrenheit: ");
  scanf("%d", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;

  printf("La temperatura en Celsius es: %d", celsius);

  return 0;
}