# Algoritmo del código

#### **Entrada:**

* Número de alumnos

#### **Salida:**

* Número de alumnos aprobados
* Número de alumnos reprobados
* Promedio de calificaciones

#### **Descripción:**

1. Se inicializan las variables:
   * `calificaciones`: Contador de alumnos
   * `alumnos`: Número total de alumnos
   * `reprobados`: Contador de alumnos reprobados
   * `aprobados`: Contador de alumnos aprobados
   * `calificacion`: Calificación del alumno actual
   * `promedio`: Promedio de calificaciones
   * `sumaCalificaciones`: Suma de todas las calificaciones
2. Se solicita al usuario el número de alumnos.
3. Se inicia un ciclo `for` que se repite `alumnos` veces:
   * Se imprime un mensaje para solicitar la calificación del alumno actual.
   * Se lee la calificación del alumno actual.
   * Se verifica si la calificación es menor a 6:
     * Si es menor, se incrementa el contador `reprobados`.
     * En caso contrario, se incrementa el contador `aprobados`.
   * Se suma la calificación actual a la variable `sumaCalificaciones`.
4. Se imprime el número de alumnos aprobados.
5. Se imprime el número de alumnos reprobados.
6. Se calcula el promedio de calificaciones dividiendo `sumaCalificaciones` por `alumnos`.
7. Se imprime el promedio de calificaciones.
8. Se retorna 0, indicando que el programa se ha ejecutado correctamente.

#### **Explicación paso a paso:**

1. **Inicialización de variables:**
   * Las variables `calificaciones`, `alumnos`, `reprobados`, `aprobados`, `calificacion`, `promedio` y `sumaCalificaciones` se inicializan con valores específicos para su uso posterior en el programa.
   * `calificaciones` se inicializa en 0 para llevar la cuenta del número de alumnos procesados.
   * `alumnos` se utiliza para almacenar el número total de alumnos ingresado por el usuario.
   * `reprobados` se inicializa en 0 para contar el número de alumnos que no alcanzan la calificación mínima para aprobar.
   * `aprobados` se inicializa en 0 para contar el número de alumnos que alcanzan o superan la calificación mínima para aprobar.
   * `calificacion` se utiliza para almacenar la calificación individual de cada alumno.
   * `promedio` se utiliza para almacenar el promedio general de las calificaciones de todos los alumnos.
   * `sumaCalificaciones` se utiliza para acumular la suma de todas las calificaciones individuales.
2. **Solicitud del número de alumnos:**
   * Se utiliza la función `printf` para mostrar un mensaje al usuario solicitando que ingrese el número de alumnos.
   * La función `scanf` se utiliza para leer el número ingresado por el usuario y almacenarlo en la variable `alumnos`.
3. **Ciclo for para procesar las calificaciones:**
   * Se utiliza un ciclo `for` para repetir la siguiente secuencia de instrucciones `alumnos` veces:
     * El valor de la variable `calificaciones` se incrementa en 1 en cada iteración del ciclo.
     * Se utiliza la función `printf` para mostrar un mensaje al usuario indicando el número de alumno actual y solicitando que ingrese su calificación.
     * La función `scanf` se utiliza para leer la calificación ingresada por el usuario y almacenarla en la variable `calificacion`.
     * Se utiliza una sentencia condicional `if` para verificar si la calificación actual (`calificacion`) es menor a 6.
       * Si la calificación es menor a 6, se incrementa el contador `reprobados` en 1.
       * En caso contrario, se incrementa el contador `aprobados` en 1.
     * Se suma la calificación actual (`calificacion`) a la variable `sumaCalificaciones`.
4. **Impresión del número de alumnos aprobados:**
   * Se utiliza la función `printf` para mostrar un mensaje indicando el número de alumnos aprobados, utilizando el valor de la variable `aprobados`.
5. **Impresión del número de alumnos reprobados:**
   * Se utiliza la función `printf` para mostrar un mensaje indicando el número de alumnos reprobados, utilizando el valor de la variable `reprobados`.
6. **Cálculo del promedio de calificaciones:**
   * Se calcula el promedio de calificaciones dividiendo la variable `sumaCalificaciones`, que contiene la suma total de todas las calificaciones, por la variable `alumnos`, que contiene el número total de alumnos.
   * El resultado de la división se almacena en la variable `promedio`.
7. **Impresión del promedio de calificaciones:**
