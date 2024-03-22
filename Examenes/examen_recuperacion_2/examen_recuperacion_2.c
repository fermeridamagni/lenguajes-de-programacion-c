#include <stdio.h>
#include <stdlib.h>

// Función para mostrar el menú
void mostrarMenu()
{
  printf("\n\033[1;37m------------- MENU -------------\033[0m\n");

  printf("\n\033[1;37m** Operaciones **\033[0m\n");
  printf("- 1. Calcular el promedio de N cantidad de numeros.\n");
  printf("- 2. Multiplicar N cantidad de numeros.\n");
  printf("- 3. Sumar N cantidad de numeros.\n");
  printf("- 4. Dividir dos numeros.\n");

  printf("\n\033[1;37m** Aplicacion **\033[0m\n");
  printf("- 5. Cambiar nombre/apodo.\n");
  printf("- 6. Salir de la aplicacion.\n");

  printf("\nOpcion: ");
}

// Función para calcular el promedio de N cantidad de números
void calcularPromedio(char *nombre)
{
  int n, i;
  float num, suma = 0.0;

  printf("\nOperacion: \n- Calcular el promedio de N cantidad de numeros.\n");

  // Ingresar la cantidad de números
  printf("%s, ingresa la cantidad de numeros a promediar: ", nombre);
  scanf("%d", &n);

  // Iterar para leer cada número y sumarlo
  for (i = 1; i <= n; ++i)
  {
    printf("Ingrese el numero %d: ", i);
    scanf("%f", &num);
    suma += num;
  }

  // Calcular y mostrar el promedio
  float promedio = suma / n;
  printf("El promedio de los %d numeros es: %.2f\n", n, promedio);
}

// Función para calcular la multiplicación de N cantidad de números
void calcularMultiplicacion(char *nombre)
{
  int n, i;
  float num, producto = 1.0;

  printf("\nOperacion: \n- Multiplicar N cantidad de numeros.\n");

  // Ingresar la cantidad de números
  printf("%s, ingresa la cantidad de numeros a multiplicar: ", nombre);
  scanf("%d", &n);

  // Iterar para leer cada número y multiplicarlo
  for (i = 1; i <= n; ++i)
  {
    printf("Ingrese el numero %d: ", i);
    scanf("%f", &num);
    producto *= num;
  }

  // Mostrar el producto
  printf("La multiplicacion de los %d numeros es: %.2f\n", n, producto);
}

// Función para calcular la suma de N cantidad de números
void calcularSuma(char *nombre)
{
  int n, i;
  float num, suma = 0.0;

  printf("\nOperacion: \n- Sumar N cantidad de numeros.\n");

  // Ingresar la cantidad de números
  printf("%s, ingresa la cantidad de numeros a sumar: ", nombre);
  scanf("%d", &n);

  // Iterar para leer cada número y sumarlo
  for (i = 1; i <= n; ++i)
  {
    printf("Ingrese el numero %d: ", i);
    scanf("%f", &num);
    suma += num;
  }

  // Mostrar la suma
  printf("La suma de los %d numeros es: %.2f\n", n, suma);
}

// Función para calcular la división de dos números
void calcularDivision()
{
  float num1, num2;

  printf("\nOperacion: \n- Dividir dos numeros.\n");

  // Ingresar los dos números
  printf("Ingrese el primer numero: ");
  scanf("%f", &num1);
  printf("Ingrese el segundo numero: ");
  scanf("%f", &num2);

  // Verificar si el segundo número es 0
  if (num2 == 0)
  {
    printf("No se puede dividir por cero.\n");
  }
  else
  {
    // Calcular y mostrar la división
    float division = num1 / num2;
    printf("La division de %.2f entre %.2f es: %.2f\n", num1, num2, division);
  }
}

// Función principal
int main()
{
  int modo;
  char nombre[50];

  printf("Ingrese su nombre/apodo: ");
  scanf("%s", nombre);

  // Bucle para repetir el menú hasta que se elija la opción 2
  do
  {
    printf("\n\033[1;37mBienvenid@ %s!\033[0m\n", nombre);

    mostrarMenu();
    scanf("%d", &modo);

    switch (modo)
    {
    case 1:
      calcularPromedio(nombre);
      break;
    case 2:
      calcularMultiplicacion(nombre);
      break;
    case 3:
      calcularSuma(nombre);
      break;
    case 4:
      calcularDivision();
      break;
    case 5:
      printf("\nIngrese su nuevo nombre/apodo: ");
      scanf("%s", nombre);
      break;

    case 6:
      printf("\nAdios %s, vuelve pronto!\n", nombre);
      printf("Saliendo de la aplicacion...\n");

      break;
    default:
      printf("\n\033[1;31mOPCION INVALIDA. Ingresa un numero entre 1 y 5.\033[0m\n");
    }
  } while (modo != 6);

  return 0;
}
