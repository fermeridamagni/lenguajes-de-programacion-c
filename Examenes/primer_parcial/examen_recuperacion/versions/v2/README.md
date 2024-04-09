# INDICACIONES

Hacer un problema donde tome decisiones, ingrese datos, muestre datos, implementar un menú, y que en algún punto el programa deba de ser iterativo por mínimo 10 veces.

Cuando se cumpla la función que se pueda repetir para mejorar el resultado, alterando una y otra vez el resultado.

Mínimo 10 Iteraciones y que pueda regresar al menú

# ALGORITMO

#### **Entrada:**

* Opción del juego (1: Adivinar número, 2: Piedra, papel o tijera, 3: Salir)
* Número ingresado por el usuario (juego de adivinar número)
* Opción del usuario (piedra, papel o tijera)

#### **Salida:**

* Mensaje de éxito o error en el juego de adivinar número
* Mensaje de victoria, derrota o empate en el juego de piedra, papel o tijera

#### **Pasos:**

1. **Inicio:**
   * Mostrar un menú con las opciones disponibles:
     * Adivinar número secreto
     * Piedra, papel o tijera
     * Salir
   * Pedir al usuario que seleccione una opción.
2. **Selección del juego:**
   * Leer la opción seleccionada por el usuario.
3. **Procesamiento del juego:**
   * **Adivinar número secreto:**
     * Si se seleccionó la opción Adivinar número secreto:
       * Pedir al usuario que ingrese un número.
       * Comparar el número ingresado con el número secreto (7).
       * Mostrar un mensaje de éxito si el número coincide, o un mensaje de error y pedir al usuario que vuelva a intentarlo si no coincide.
   * **Piedra, papel o tijera:**
     * Si se seleccionó la opción Piedra, papel o tijera:
       * Mostrar las opciones disponibles: piedra, papel y tijera.
       * Pedir al usuario que seleccione una opción.
       * Generar una opción aleatoria para la máquina (piedra, papel o tijera).
       * Comparar la opción del usuario con la opción de la máquina.
       * Mostrar un mensaje de victoria, derrota o empate según la comparación.
   * **Salir:**
     * Si se seleccionó la opción Salir, finalizar el programa.
4. **Repetición:**
   * Repetir el proceso desde el paso 2 hasta que se seleccione la opción Salir.

#### **Explicación del código:**

* La función `main` es la función principal del programa. Controla el flujo del programa y llama a las funciones según la opción seleccionada por el usuario.
* Las variables `opcion`, `numero_secreto`, `numero_usuario`, `opcion_usuario` y `opcion_maquina` se utilizan para almacenar la información del juego.
