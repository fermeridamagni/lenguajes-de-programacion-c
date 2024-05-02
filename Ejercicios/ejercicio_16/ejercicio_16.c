#include <stdio.h>
#include <stdlib.h>

int main () {
  float primer_parcial, segundo_parcial, tercer_parcial, promedio;

  printf("Ingrese la calificacion del primer parcial: ");
  scanf("%f", &primer_parcial);

  printf("Ingrese la calificacion del segundo parcial: ");
  scanf("%f", &segundo_parcial);

  printf("Ingrese la calificacion del tercer parcial: ");
  scanf("%f", &tercer_parcial);

  promedio = (primer_parcial + segundo_parcial + tercer_parcial) / 3;

  if (promedio >= 6) {
    printf("El alumno aprobo con un promedio de: %f", promedio);
  } else {
    printf("El alumno reprobo con un promedio de: %f", promedio);
    printf("\n El alumno debe presentar un examen extraordinario.");
  }

  return 0;
}