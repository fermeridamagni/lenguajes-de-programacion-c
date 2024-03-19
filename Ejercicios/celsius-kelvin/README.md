# CELSIUS A KELVIN

#### **Entrada:**

* Temperatura en grados Celsius (celsius)

#### **Salida:**

* Temperatura incorrecta en grados Kelvin (kelvin) - **Error en la conversión**

#### **Pasos:**

1. **Inicio:**
   * Mostrar un mensaje al usuario para que ingrese la temperatura en Celsius.
2. **Lectura de la temperatura:**
   * Leer la temperatura utilizando la función `scanf` y la especificación de formato `%d`.
3. **Conversión errónea de Celsius a Kelvin:**
   * El código actual comete un error al intentar convertir de Celsius a Kelvin utilizando la fórmula `kelvin = (celsius + 273.15)`. Esta fórmula es correcta para convertir de Kelvin a Celsius, pero no para el caso contrario.
4. **Mostrar resultado incorrecto:**
   * Imprime un mensaje que indica la temperatura en Kelvin, pero el valor mostrado será incorrecto debido al error en la conversión.
5. **Fin:**
   * Devuelve el valor 0 para indicar la finalización del programa.
