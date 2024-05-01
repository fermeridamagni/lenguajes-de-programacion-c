# Algoritmo del código

#### **Descripción:**

Este programa lee el peso de un número determinado de piezas y clasifica las piezas en tres categorías:

* Piezas con peso entre 9.8 y 10.2 kg
* Piezas con peso mayor a 10.2 kg
* Piezas con peso menor a 9.8 kg

El programa también calcula y muestra el peso total de todas las piezas.

#### **Entrada:**

* Número de piezas
* Peso individual de cada pieza en kg

#### **Salida:**

* Peso total de las piezas
* Número de piezas en cada categoría de peso
* Lista completa de pesos ingresados

#### **Explicación paso a paso:**

1. **Se inicializan las variables:**
   * `i`: Contador para iterar en el ciclo `while`.
   * `cantidad_de_piezas`: Almacena el número total de piezas.
   * `piezas_entre_nuevepuntoocho_y_diez_punto_dos`: Contador de piezas con peso entre 9.8 y 10.2 kg.
   * `piezas_mayores_a_diez_punto_dos`: Contador de piezas con peso mayor a 10.2 kg.
   * `piezas_menores_a_nueve_punto_ocho`: Contador de piezas con peso menor a 9.8 kg.
   * `peso`: Almacena el peso individual de cada pieza.
   * `peso_total`: Almacena el peso total de todas las piezas.
2. **Se solicita al usuario el número de piezas:**
   * Se utiliza la función `printf` para mostrar un mensaje al usuario indicando que ingrese el número de piezas.
   * Se utiliza la función `scanf` para leer el número ingresado por el usuario y almacenarlo en la variable `cantidad_de_piezas`.
3. **Ciclo `while` para procesar las piezas:**
   * El ciclo se repite `cantidad_de_piezas` veces.
   * Dentro del ciclo:
     * Se solicita al usuario el peso de la pieza actual (pieza `i + 1`).
     * Se utiliza la función `scanf` para leer el peso ingresado por el usuario y almacenarlo en la variable `peso`.
     * Se clasifica la pieza según su peso:
       * Si el peso está entre 9.8 y 10.2, se incrementa el contador `piezas_entre_nuevepuntoocho_y_diez_punto_dos`.
       * Si el peso es mayor a 10.2, se incrementa el contador `piezas_mayores_a_diez_punto_dos`.
       * Si el peso es menor a 9.8, se incrementa el contador `piezas_menores_a_nueve_punto_ocho`.
     * Se suma el peso actual al `peso_total`.
     * Se incrementa el contador `i`.
4. **Impresión de resultados:**
   * Se imprime el peso total de todas las piezas.
   * Se imprime el número de piezas en cada categoría de peso.
   * Se imprime la lista completa de pesos ingresados (opcional).

**Ejemplo de ejecución:**

**Entrada:**

* Número de piezas: 5
* Peso de la pieza 1: 9.9
* Peso de la pieza 2: 10.3
* Peso de la pieza 3: 9.7
* Peso de la pieza 4: 10.1
* Peso de la pieza 5: 9.8

**Salida:**

```
El peso total de las piezas es: 49.80
El numero de piezas con peso entre 9.8 y 10.2 es: 3
El numero de piezas con peso mayor a 10.2 es: 1
El numero de piezas con peso menor a 9.8 es: 1
```

**Nota:**

* La impresión de la lista completa de pesos ingresados es opcional. Se puede eliminar la siguiente línea del código:

C

```
printf("Lista de pesos ingresados: %f, %f, %f, %f, %f\n", peso1, peso2, peso3, peso4, peso5);
```
