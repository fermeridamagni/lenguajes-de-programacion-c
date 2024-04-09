#include <stdio.h>
#include <stdlib.h>

int main()
{
  int calificaciones = 0, alumnos, reprobados = 0, aprobados = 0;
  float calificacion, promedio = 0, sumaCalificaciones = 0;

  printf("Ingresa el numero de alumnos: ");
  scanf("%d", &alumnos);

  for (calificaciones = 0; calificaciones < alumnos; calificaciones++)
  {
    printf("Ingresa la calificacion del alumno %d: ", calificaciones + 1);
    scanf("%f", &calificacion);

    if (calificacion < 6)
    {
      reprobados++;
    }
    else
    {
      aprobados++;
    }

    sumaCalificaciones += calificacion;
  }

  printf("\n\n\033[1;30mEl numero de alumnos aprobados es: %d\033[0m\n", aprobados);

  printf("\033[1;31mEl numero de alumnos reprobados es: %d\033[0m\n", reprobados);

  promedio = sumaCalificaciones / alumnos;

  printf("\033[1;32mEl promedio de calificaciones es: %.2f\033[0m\n", promedio);
  
  return 0;
}