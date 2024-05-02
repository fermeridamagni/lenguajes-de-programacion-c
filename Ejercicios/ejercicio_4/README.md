# CONVERSIONES DE UNIDADES DE LONGITUD

#### **Descripción:**

Este programa permite convertir unidades de longitud entre diferentes sistemas de medida:

* Centímetros a pies
* Metros a yardas
* Pies a centímetros
* Yardas a metros
* Kilómetros a millas
* Millas a kilómetros

#### **Entrada:**

* Opción de conversión que desea realizar (1 a 6)
* Valor a convertir

#### **Salida:**

* Tipo de conversión seleccionada
* Valor convertido

#### **Explicación paso a paso:**

1. **Se presentan las opciones de conversión al usuario:**
   * Se utiliza la función `printf` para mostrar un menú con las opciones de conversión disponibles (1 a 6).
2. **Se solicita al usuario la opción de conversión deseada:**
   * Se utiliza la función `scanf` para leer la opción ingresada por el usuario y almacenarla en la variable `opcion`.
3. **Se valida la opción de conversión ingresada:**
   * Se utilizan sentencias `if-else` para verificar si la opción ingresada es válida (entre 1 y 6).
   * Si la opción es válida, se asigna el tipo de conversión correspondiente a la variable `tipoConversion` y se establece la variable `isValido` en 1.
   * Si la opción no es válida, se establece la variable `tipoConversion` en "Opcion no valida" y la variable `isValido` en 0.
4. **Se muestra el tipo de conversión seleccionado:**
   * Se utiliza la función `printf` para mostrar el tipo de conversión seleccionado, almacenado en la variable `tipoConversion`.
5. **Si la opción de conversión es válida:**
   * Se solicita al usuario el valor a convertir:
     * Se utiliza la función `printf` para mostrar un mensaje indicando que ingrese el valor a convertir.
     * Se utiliza la función `scanf` para leer el valor ingresado por el usuario y almacenarlo en la variable `valor`.
   * Se realiza la conversión de unidades según el tipo de conversión seleccionado:
     * Se utilizan sentencias `if-else` para determinar la fórmula de conversión adecuada en cada caso.
     * La fórmula se aplica al valor ingresado (`valor`) y el resultado se almacena en la variable `resultado`.
6. **Se muestra el resultado de la conversión:**
   * Se utiliza la función `printf` para mostrar el resultado de la conversión, almacenado en la variable `resultado`.
7. **Se retorna 0 para indicar que el programa se ha ejecutado correctamente.**

**Ejemplo de ejecución:**

**Entrada:**

* Opción de conversión: 3 (Pies a centímetros)
* Valor a convertir: 5.2

**Salida:**

```
Tipo de conversion: 
 - Pies(ft) a Centimetros(cm)

Ingrese el valor a convertir de Pies(ft) a Centimetros(cm):
5.2

El resultado de la conversion es: 162.56
```

**Nota:**

* Este programa asume que el usuario ingresa valores numéricos válidos para la conversión seleccionada. No se valida la entrada de datos para evitar errores.
* Se puede mejorar el programa agregando validación de entrada para verificar que el usuario ingrese valores numéricos y que la opción de conversión sea válida.
