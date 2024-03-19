#include <stdlib.h>
#include <stdio.h>

int main()
{
  int edad = 0;

  printf("Ingresa tu edad: ");
  scanf("%d", &edad);

  if (edad < 10)
  {
    printf("Eres un nino");
  }
  else
  {
    if (edad >= 11 & edad < 14)
    {
      printf("Eres un pre-adolescente");
    }
    else
    {
      if (edad >= 15 & edad < 18)
      {
        printf("Eres un adolescente");
      }
      else
      {
        if (edad >= 19 & edad < 25)
        {
          printf("Eres un adulto joven");
        }
        else
        {
          if (edad >= 26 & edad < 65)
          {
            printf("Eres un adulto");
          }
          else
          {
            if (edad > 65)
            {
              printf("Eres un adulto mayor");
            }
          }
        }
      }
    }
  }

  return 0;
}
