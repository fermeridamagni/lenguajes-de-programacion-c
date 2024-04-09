#include <stdlib.h>
#include <stdio.h>

int main()
{
  int opcion, numero_secreto, numero_usuario, opcion_usuario, opcion_maquina;

  printf("Juegos...\n\n");

  printf("1. Adivinar numero secreto\n");
  printf("2. Piedra, papel o tijera\n");
  printf("3. Salir\n\n");

  printf("Seleccione una opcion: ");
  scanf("%d", &opcion);

  do
  {
    switch (opcion)
    {
    case 1:
      printf("\nJugando a adivinar numero secreto...\n");

      printf("Ingrese un numero: ");
      scanf("%d", &numero_usuario);

      numero_secreto = 7;

      if (numero_usuario == numero_secreto)
      {
        printf("Felicidades, ha adivinado el numero secreto\n");
      }
      else
      {
        printf("Lo siento, no ha adivinado el numero secreto, vuelve a intentarlo\n");
        printf("Ingrese un numero: ");
        scanf("%d", &numero_usuario);
      }

      break;
    case 2:
      printf("\nJugando a piedra, papel o tijera...\n");

      printf("1. Piedra\n");
      printf("2. Papel\n");
      printf("3. Tijera\n\n");
      printf("4. Salir del juego\n\n");

      printf("Seleccione una opcion: ");
      scanf("%d", &opcion_usuario);

      opcion_maquina = 3;

      if (opcion_usuario == 1 && opcion_maquina == 3)
      {
        printf("Ganaste, la maquina eligio tijera\n");
      }
      else if (opcion_usuario == 2 && opcion_maquina == 1)
      {
        printf("Ganaste, la maquina eligio piedra\n");
      }
      else if (opcion_usuario == 3 && opcion_maquina == 2)
      {
        printf("Ganaste, la maquina eligio papel\n");
      }
      else if (opcion_usuario == opcion_maquina)
      {
        printf("Empate\n");
      }
      else if (opcion_usuario == 4)
      {
        printf("Saliendo del juego...\n");

        return 0;
      }
      else
      {
        printf("Perdiste\n");
      }

      break;
    case 3:
      printf("\nSaliendo...\n");
      return 0;
      break;
    default:
      printf("\nOpcion no valida\n");

      break;
    }
  } while (opcion != 3);

  return 0;
}