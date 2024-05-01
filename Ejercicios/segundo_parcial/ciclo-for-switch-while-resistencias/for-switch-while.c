#include <stdio.h>

// Funciones para calcular la resistencia total
float resistencia_serie(int n, float *resistencias)
{
  float resistencia_total = 0;
  for (int i = 0; i < n; i++)
  {
    resistencia_total += resistencias[i];
  }
  return resistencia_total;
}

float resistencia_paralelo(int n, float *resistencias)
{
  float resistencia_total = 0;
  for (int i = 0; i < n; i++)
  {
    resistencia_total += 1 / resistencias[i];
  }
  resistencia_total = 1 / resistencia_total;
  return resistencia_total;
}

float resistencia_mixto(int n, float *resistencias_serie, float *resistencias_paralelo)
{
  float resistencia_total_serie = resistencia_serie(n, resistencias_serie);
  float resistencia_total_paralelo = resistencia_paralelo(n, resistencias_paralelo);
  return resistencia_total_serie + resistencia_total_paralelo;
}

// Funciones para calcular la capacitancia total
float capacitancia_serie(int n, float *capacitancias)
{
  float capacitancia_total = 0;
  for (int i = 0; i < n; i++)
  {
    capacitancia_total += 1 / capacitancias[i];
  }
  capacitancia_total = 1 / capacitancia_total;
  return capacitancia_total;
}

float capacitancia_paralelo(int n, float *capacitancias)
{
  float capacitancia_total = 0;
  for (int i = 0; i < n; i++)
  {
    capacitancia_total += capacitancias[i];
  }
  return capacitancia_total;
}

float capacitancia_mixto(int n, float *capacitancias_serie, float *capacitancias_paralelo)
{
  float capacitancia_total_serie = capacitancia_serie(n, capacitancias_serie);
  float capacitancia_total_paralelo = capacitancia_paralelo(n, capacitancias_paralelo);
  return capacitancia_total_serie + capacitancia_total_paralelo;
}

// Función para calcular la resistencia de un diodo LED
float resistencia_diodo_led(float voltaje, float corriente)
{
  return voltaje / corriente;
}

int main()
{
  int opcion;
  do
  {
    printf("Menu:\n\n");
    printf("1. Calcular la resistencia total en un circuito en serie, paralelo y mixto\n");
    printf("2. Calcular la capacitancia total en un circuito en serie, paralelo y mixto\n");
    printf("3. Calcular la resistencia para un diodo LED\n");
    printf("4. Salir del programa\n\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
    {
      int n, i;
      printf("Ingrese la cantidad de resistencias: ");
      scanf("%d", &n);
      float resistencias[n];
      for (i = 0; i < n; i++)
      {
        printf("Ingrese la resistencia %d: ", i + 1);
        scanf("%f", &resistencias[i]);
      }
      float resistencia_total_serie = resistencia_serie(n, resistencias);
      float resistencia_total_paralelo = resistencia_paralelo(n, resistencias);
      float resistencia_total_mixto = resistencia_mixto(n, resistencias, resistencias);

      printf("Resistencia total en serie: %.2f ohmios\n", resistencia_total_serie);
      printf("Resistencia total en paralelo: %.2f ohmios\n", resistencia_total_paralelo);
      printf("Resistencia total en mixto: %.2f ohmios\n", resistencia_total_mixto);
      break;
    }
    case 2:
    {
      int n;
      printf("Ingrese la cantidad de capacitancias: ");
      scanf("%d", &n);
      float capacitancias[n];
      for (int i = 0; i < n; i++)
      {
        printf("Ingrese la capacitancia %d: ", i + 1);
        scanf("%f", &capacitancias[i]);
      }
      float capacitancia_total_serie = capacitancia_serie(n, capacitancias);
      float capacitancia_total_paralelo = capacitancia_paralelo(n, capacitancias);
      float capacitancia_total_mixto = capacitancia_mixto(n, capacitancias, capacitancias);

      printf("Capacitancia total en serie: %.2f faradios\n", capacitancia_total_serie);
      printf("Capacitancia total en paralelo: %.2f faradios\n", capacitancia_total_paralelo);
      printf("Capacitancia total en mixto: %.2f faradios\n", capacitancia_total_mixto);
      break;
    }
    case 3:
    {
      int tipo_led, color_led;
      printf("Tipo de LED:\n 1. Brillante\n 2. Ultrabrillante\n 3. Difuso\nIngrese opcion: ");
      scanf("%d", &tipo_led);
      printf("Color del LED:\n 1. Azul\n 2. Verde\n 3. Rojo\n 4. Ámbar\n 5. Blanco\nIngrese opcion: ");
      scanf("%d", &color_led);

      float voltaje;
      switch (color_led)
      {
      case 1: // Azul
        voltaje = 3.5;
        break;
      case 2: // Verde
        voltaje = 3.7;
        break;
      case 3: // Rojo
        voltaje = 1.8;
        break;
      case 4: // Ámbar
        voltaje = 2.1;
        break;
      case 5: // Blanco
        voltaje = 3.5;
        break;
      default:
        printf("Opcion de color no valida. Saliendo del submenu...");
        break;
      }

      float corriente, resistencia_diodo_led;
      if (voltaje > 0)
      {
        printf("Ingrese la corriente (en mA): ");
        scanf("%f", &corriente);
        resistencia_diodo_led = voltaje / (corriente / 1000); // Convertir mA a A
        printf("Resistencia para un diodo LED: %.2f ohmios\n", resistencia_diodo_led);
      }
      else
      {
        printf("Se seleccionó una opción inválida previamente.\n");
      }

      break;
    }
    case 4:
    {
      printf("Saliendo del programa...\n");
      break;
    }
    default:
    {
      printf("Opcion no valida\n");
      break;
    }
    }
  } while (opcion != 4);

  return 0;
}