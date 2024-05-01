# Algoritmo del código

#### **Descripción:**

Este programa presenta un menú para que el usuario seleccione entre diferentes opciones para calcular resistencias y capacitancias en circuitos eléctricos, así como la resistencia de un diodo LED.

#### **Entrada:**

* Opciones del menú
* Cantidad de componentes (resistencias o capacitancias)
* Valores individuales de resistencias o capacitancias
* Tipo y color de LED (para calcular la resistencia del diodo)
* Voltaje del LED (para calcular la resistencia del diodo)
* Corriente del LED (para calcular la resistencia del diodo)

#### **Salida:**

* Resistencia total en serie, paralelo y mixto (para resistencias)
* Capacitancia total en serie, paralelo y mixto (para capacitancias)
* Resistencia del diodo LED

#### **Explicación paso a paso:**

**1. Funciones para calcular resistencias:**

* `resistencia_serie(n, resistencias)`:
  * Calcula la resistencia total en serie de `n` resistencias.
  * Recibe un entero `n` que indica la cantidad de resistencias y un arreglo `resistencias` que contiene los valores individuales de las resistencias.
  * Recorre el arreglo `resistencias` sumando los valores individuales.
  * Retorna la resistencia total en serie.
* `resistencia_paralelo(n, resistencias)`:
  * Calcula la resistencia total en paralelo de `n` resistencias.
  * Recibe un entero `n` que indica la cantidad de resistencias y un arreglo `resistencias` que contiene los valores individuales de las resistencias.
  * Recorre el arreglo `resistencias` sumando los inversos de cada valor individual (1/resistencia).
  * Calcula la inversa de la suma total de inversos para obtener la resistencia total en paralelo.
  * Retorna la resistencia total en paralelo.
* `resistencia_mixto(n, resistencias_serie, resistencias_paralelo)`:
  * Calcula la resistencia total en un circuito mixto con resistencias en serie y en paralelo.
  * Recibe un entero `n` que indica la cantidad de componentes, un arreglo `resistencias_serie` que contiene los valores de las resistencias en serie y un arreglo `resistencias_paralelo` que contiene los valores de las resistencias en paralelo.
  * Calcula la resistencia total en serie y la resistencia total en paralelo utilizando las funciones `resistencia_serie` y `resistencia_paralelo`, respectivamente.
  * Suma las resistencias totales en serie y en paralelo para obtener la resistencia total en el circuito mixto.
  * Retorna la resistencia total en el circuito mixto.

**2. Funciones para calcular capacitancias:**

* `capacitancia_serie(n, capacitancias)`:
  * Calcula la capacitancia total en serie de `n` capacitores.
  * Recibe un entero `n` que indica la cantidad de capacitores y un arreglo `capacitancias` que contiene los valores individuales de las capacitancias.
  * Recorre el arreglo `capacitancias` sumando los inversos de cada valor individual (1/capacitancia).
  * Calcula la inversa de la suma total de inversos para obtener la capacitancia total en serie.
  * Retorna la capacitancia total en serie.
* `capacitancia_paralelo(n, capacitancias)`:
  * Calcula la capacitancia total en paralelo de `n` capacitores.
  * Recibe un entero `n` que indica la cantidad de capacitores y un arreglo `capacitancias` que contiene los valores individuales de las capacitancias.
  * Recorre el arreglo `capacitancias` sumando los valores individuales.
  * Retorna la capacitancia total en paralelo.
* `capacitancia_mixto(n, capacitancias_serie, capacitancias_paralelo)`:
  * Calcula la capacitancia total en un circuito mixto con capacitores en serie y en paralelo.
  * Recibe un entero `n` que indica la cantidad de componentes, un arreglo `capacitancias_serie` que contiene los valores de las capacitancias en serie y un arreglo `capacitancias_paralelo` que contiene los valores de las capacitancias en paralelo.
  * Calcula la capacitancia total en serie y la capacitancia total en paralelo utilizando las funciones `capacitancia_serie` y `capacitancia_paralelo`, respectivamente.
  * Suma las capacitancias totales en serie y en paralelo para obtener la capacitancia total en el circuito mixto.
