#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0, cantidad_de_piezas = 0, piezas_entre_nuevepuntoocho_y_diez_punto_dos = 0, piezas_mayores_a_diez_punto_dos = 0, piezas_menores_a_nueve_punto_ocho = 0;
  float peso = 0, peso_total = 0;

  printf("Ingresa el numero de piezas:");
  scanf("%d", &cantidad_de_piezas);

  while (cantidad_de_piezas > i)
  {
    printf("Ingrese el peso en 'KG' de la pieza %d: ", i + 1);
    scanf("%f", &peso);

    if (peso >= 9.8 && peso <= 10.2)
    {
      piezas_entre_nuevepuntoocho_y_diez_punto_dos++;
    }
    else if (peso > 10.2)
    {
      piezas_mayores_a_diez_punto_dos++;
    }
    else if (peso < 9.8)
    {
      piezas_menores_a_nueve_punto_ocho++;
    }

    peso_total += peso;

    i++;
  }

  printf("El peso total de las piezas es: %.2f\n", peso_total);

  printf("El numero de piezas con peso entre 9.8 y 10.2 es: %d\n", piezas_entre_nuevepuntoocho_y_diez_punto_dos);

  printf("El numero de piezas con peso mayor a 10.2 es: %d\n", piezas_mayores_a_diez_punto_dos);

  printf("El numero de piezas con peso menor a 9.8 es: %d\n", piezas_menores_a_nueve_punto_ocho);

  return 0;
}