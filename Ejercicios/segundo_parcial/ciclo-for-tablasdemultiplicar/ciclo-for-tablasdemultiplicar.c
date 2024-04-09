#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tabla, parteDeTabla, numeroMaximo = 10;

  printf("\033[1;37mIntroduce la tabla de multiplicar que deseas ver: \033[0m");
  scanf("%d", &tabla);

  printf("Hasta que numero deseas ver la tabla de multiplicar? \n (Por defecto se muestra hasta el 10)\n");
  printf("\033[1;37mIntroduce el numero maximo: \033[0m");
  scanf("%d", &numeroMaximo);

  printf("\n\033[1;33mTabla del %d, multiplicando hasta el numero: %d\n\033[0m", tabla, numeroMaximo);

  for (parteDeTabla = 1; parteDeTabla <= numeroMaximo; parteDeTabla++)
  {
    printf("%d x %d = %d\n", tabla, parteDeTabla, tabla * parteDeTabla);
  }
  return 0;
}