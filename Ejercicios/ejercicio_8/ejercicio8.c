#include <stdio.h>
#include <stdlib.h>

int main()
{
  int primer_numero, segundo_numero, tercer_numero, numero_mayor;

  printf("Ingresa el primer numero: ");
  scanf("%d", &primer_numero);

  printf("Ingresa el segundo numero: ");
  scanf("%d", &segundo_numero);

  printf("Ingresa el tercer numero: ");
  scanf("%d", &tercer_numero);

  if (primer_numero > segundo_numero)
  {
    if (primer_numero > tercer_numero)
    {
      numero_mayor = primer_numero;
    }
    else
    {
      numero_mayor = tercer_numero;
    }
  }
  else
  {
    if (segundo_numero > tercer_numero)
    {
      numero_mayor = segundo_numero;
    }
    else
    {
      numero_mayor = tercer_numero;
    }
  }

  printf("El numero mayor es: %d", numero_mayor);

  return 0;
}