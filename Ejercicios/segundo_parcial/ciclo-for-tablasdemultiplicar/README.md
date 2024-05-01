# Algoritmo del código

#### **Descripción:**

Este programa imprime la tabla de multiplicar de un número seleccionado por el usuario, hasta un número máximo también especificado por el usuario.

#### **Entrada:**

* Número de la tabla de multiplicar (por ejemplo, 2 para la tabla del 2)
* Número máximo hasta el que se quiere multiplicar (por defecto 10)

#### **Salida:**

* La tabla de multiplicar del número seleccionado, desde 1 hasta el número máximo indicado.

#### **Explicación paso a paso:**

1. **Se inicializan las variables:**
   * `tabla`: Almacena el número de la tabla de multiplicar que desea ver el usuario.
   * `parteDeTabla`: Contador para iterar dentro del ciclo `for`.
   * `numeroMaximo`: Limite superior para la multiplicación (por defecto 10).
2. **Se solicita al usuario el número de la tabla de multiplicar:**
   * Se utiliza la función `printf` para mostrar un mensaje al usuario indicando que ingrese el número de la tabla que desea ver.
   * Se utiliza la función `scanf` para leer el número ingresado por el usuario y almacenarlo en la variable `tabla`.
3. **Se solicita al usuario el número máximo hasta el que desea ver la tabla:**
   * Se utiliza la función `printf` para mostrar un mensaje al usuario indicando que ingrese el número máximo hasta el que desea ver la tabla.
   * Se utiliza la función `scanf` para leer el número ingresado por el usuario y almacenarlo en la variable `numeroMaximo`.
4. **Se imprime el encabezado de la tabla:**
   * Se utiliza la función `printf` para mostrar un mensaje indicando que se está imprimiendo la tabla del número ingresado, junto con el número máximo de multiplicación.
5. **Ciclo `for` para imprimir la tabla:**
   * Se utiliza un ciclo `for` que se repite desde 1 hasta el valor de la variable `numeroMaximo`.
   * Dentro del ciclo, se utiliza la función `printf` para imprimir la multiplicación del número de la tabla (`tabla`) por el valor actual del contador (`parteDeTabla`).
6. **Se retorna 0 para indicar que el programa se ha ejecutado correctamente.**

**Ejemplo de ejecución:**

**Entrada:**

* Tabla de multiplicar: 3
* Número máximo: 5

**Salida:**

```
Tabla del 3, multiplicando hasta el numero: 5

3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
```
