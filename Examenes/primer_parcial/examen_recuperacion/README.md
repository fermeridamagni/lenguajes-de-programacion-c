# INDICACIONES

Hacer un problema donde tome decisiones, ingrese datos, muestre datos, implementar un menú, y que en algún punto el programa deba de ser iterativo por mínimo 10 veces.

Cuando se cumpla la función que se pueda repetir para mejorar el resultado, alterando una y otra vez el resultado.

Mínimo 10 Iteraciones y que pueda regresar al menú

# ALGORITMO

Algoritmo del código C para un menú con opciones de promedio y suma

#### **Entrada:**

Algoritmo del código C para una aplicación con menú de operaciones matemáticas y cambio de nombre

#### **Entrada:**

* Opciones del menú (1: Promedio, 2: Multiplicación, 3: Suma, 4: División, 5: Cambiar nombre, 6: Salir)
* Cantidades de números
* Valores de cada número
* Nuevo nombre/apodo (opcional)

#### **Salida:**

* Promedio de los números ingresados
* Multiplicación de los números ingresados
* Suma de los números ingresados
* División de dos números
* Saludo personalizado con el nombre/apodo del usuario
* Opción para cambiar el nombre/apodo

#### **Pasos:**

1. **Inicio:**
   * Pedir al usuario que ingrese su nombre/apodo.
   * Mostrar un menú con las opciones disponibles:
     * Operaciones matemáticas:
       * Promedio
       * Multiplicación
       * Suma
       * División
     * Aplicación:
       * Cambiar nombre/apodo
       * Salir
2. **Selección de la opción:**
   * Leer la opción seleccionada por el usuario.
3. **Procesamiento de la opción:**
   * **Operaciones matemáticas:**
     * Si se seleccionó una operación matemática:
       * Pedir al usuario la cantidad de números.
       * Leer la cantidad de números.
       * Pedir al usuario que ingrese cada uno de los números.
       * Realizar la operación matemática seleccionada.
       * Mostrar el resultado de la operación.
   * **Cambiar nombre/apodo:**
     * Si se seleccionó la opción Cambiar nombre/apodo:
       * Pedir al usuario que ingrese su nuevo nombre/apodo.
       * Actualizar el nombre/apodo del usuario.
   * **Salir:**
     * Si se seleccionó la opción Salir, finalizar el programa.
4. **Repetición:**
   * Repetir el proceso desde el paso 2 hasta que se seleccione la opción Salir.

#### **Explicación del código:**

* La función `mostrarMenu` muestra las opciones disponibles al usuario.
* Las funciones `calcularPromedio`, `calcularMultiplicacion`, `calcularSuma` y `calcularDivision` se encargan de realizar las operaciones matemáticas correspondientes.
* La función `main` es la función principal del programa. Controla el flujo del programa y llama a las funciones según la opción seleccionada por el usuario.
* La variable `nombre` se utiliza para almacenar el nombre/apodo del usuario.

* Opciones del menú (1: Promediar, 2: Sumar, 3: Salir)
* Cantidades de números
* Valores de cada número

#### **Salida:**

* Promedio de los números ingresados
* Suma de los números ingresados

#### **Pasos:**

1. **Inicio:**
   * Mostrar un menú con las opciones disponibles: Promediar, Sumar y Salir.
2. **Selección de la opción:**
   * Leer la opción seleccionada por el usuario.
3. **Procesamiento de la opción:**
   * **Promediar:**
     * Si se seleccionó la opción Promediar:
       * Pedir al usuario la cantidad de números a promediar.
       * Leer la cantidad de números.
       * Pedir al usuario que ingrese cada uno de los números.
       * Calcular la suma de los números.
       * Calcular el promedio dividiendo la suma por la cantidad de números.
       * Mostrar el promedio de los números.
     * **Sumar:**
       * Si se seleccionó la opción Sumar:
       * Pedir al usuario la cantidad de números a sumar.
       * Leer la cantidad de números.
       * Pedir al usuario que ingrese cada uno de los números.
       * Calcular la suma de los números.
       * Mostrar la suma de los números.
     * **Salir:**
       * Si se seleccionó la opción Salir, finalizar el programa.
4. **Repetición:**
   * Repetir el proceso desde el paso 2 hasta que se seleccione la opción Salir.

#### **Explicación del código:**

* La función `menu` muestra las opciones disponibles al usuario.
* La función `promediar` se encarga de calcular el promedio de los números ingresados por el usuario.
* La función `sumar` se encarga de calcular la suma de los números ingresados por el usuario.
* La función `main` es la función principal del programa. Controla el flujo del programa y llama a las funciones `menu`, `promediar` y `sumar` según la opción seleccionada por el usuario.
