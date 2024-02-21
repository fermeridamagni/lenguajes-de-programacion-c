#include <stdio.h>

int main()
{
    int fahrenheit, celsius;

    printf("Ingresa la temperatra en Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("La temperatura en Fahrenheit es: %d", fahrenheit);

    return 0;
}