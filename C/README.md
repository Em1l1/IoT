<h1>Introducción a C</h1>

<h3>Ricardo Celis</h3>


<h1>Tabla de Contenido</h1>


- [1. Introducción al lenguaje C](#1-introducción-al-lenguaje-c)
  - [Introducción al curso](#introducción-al-curso)
  - [¿Qué es el lenguaje C?](#qué-es-el-lenguaje-c)
  - [¿Cómo funcionan las computadoras?](#cómo-funcionan-las-computadoras)
  - [¿Por qué aprender C?](#por-qué-aprender-c)
  - [Instalando C en Windows](#instalando-c-en-windows)
  - [Instalando C en Linux](#instalando-c-en-linux)
- [2. Estructura de un programa C](#2-estructura-de-un-programa-c)
  - [Estructura de un programa C](#estructura-de-un-programa-c)
- [3. Tipos de Datos en el lenguaje C](#3-tipos-de-datos-en-el-lenguaje-c)
  - [Tipos de datos](#tipos-de-datos)
  - [Tipo de dato void](#tipo-de-dato-void)
  - [Tipo de dato Enum](#tipo-de-dato-enum)
  - [Tipo de dato char](#tipo-de-dato-char)
- [4. Variables en el lenguaje C](#4-variables-en-el-lenguaje-c)
  - [Declaración de variables](#declaración-de-variables)
  - [Declaración avanzada de variables](#declaración-avanzada-de-variables)
  - [Declaración de constantes](#declaración-de-constantes)
      - [Existen diferentes tipos de constantes:](#existen-diferentes-tipos-de-constantes)
      - [constantes literales](#constantes-literales)
      - [Constantes definidas](#constantes-definidas)
      - [constantes enumeradas](#constantes-enumeradas)
      - [constantes declaradas](#constantes-declaradas)
  - [Preprocessor directives: Define](#preprocessor-directives-define)
- [5. Conclusiones](#5-conclusiones)
  - [Conclusiones](#conclusiones)


# 1. Introducción al lenguaje C

## Introducción al curso

- [presentacion-curso-de-introduccion-a-c.pdf](https://drive.google.com/file/d/1FnYmicifCBcofOV1pjujQwZOgvWSoWt3/view?usp=sharing)

## ¿Qué es el lenguaje C?

El lenguaje C es un tipo de lenguaje estructurado. Se ocupan en software de aplicacion, drivers, computadoras para realizar operaciones matematicas super veloces y en sistemas embebidos.

Fue creado por Denis Ritchie quien lo desarrollo en los años 1972 y 1973, lo que queria es hacer un lenguaje mas comprendible. C es un lenguaje Compilado asi tambien es un lenguaje de Nivel Intermedio.

El lenguaje C es un lenguaje de propósito general, compilado y de nivel intermedio.
- `Propósito general :` Esto quiere decir que no está pensado para resolver un problema en específico, sino que cualquier problema que puede resolverse con algún programa de computadora puede escribirse utilizando lenguaje C
- `Compilado :` Se analiza todo el texto del programa, se genera un archivo binario y luego se procede a ejecutar.
- `Nivel intermedio :` Donde algunas cosas podemos olvidarnos, como el manejo más básico del hardware, otras no tanto como el manejo de la memoria.
El creador del lenguaje C es Dennis Ritchie.

- [tuvtran | project-based-learning](https://github.com/tuvtran/project-based-learning#cc)

## ¿Cómo funcionan las computadoras?

Las computadoras nos ayudan a trabajar con mayor velocidad y eficiencia porque pueden generar un resultado para resolver nuestras operaciones a partir de un conjunto de instrucciones previamente definidas. Además, así como en las películas, las computadoras tienen millones de dispositivos electrónicos que conocemos como transistores y se encargan de convertir la electricidad en bits: el sistema binario de ceros y unos, la menor expresión de información de las computadoras.

Las computadoras nacen a partir de la necesidad del ser humano para acelerar sus procesos. Los datos entran al computador se almacenan, son procesados y nos generan un resultado de salida. Las señales que entran son binarias las cuales tiene dos estados un 0 para false y un 1 como un true. Estos son la unidad mínima de información.

  - Sistema decimal
  - Sistema binario
  - Código AsccII.
  - Un archivo, imagen, audio, vídeo. Son datos binarios.

Input --> CPU–> Memoria --> Salida de datos.

Las computadoras nacen de la necesidad de hacer nuestra vida mas fácil
En un principio las computadoras nos ayudaban a trabajar con números mas fácil
Hoy en día las computadoras nos han ayudado a muchas mas cosas
Dentro de una computadora todo funciona con Binario

Transistores almacenan 0 y 1 (Bits)
Los cables dentro de un circuito llevan la informacion de un lado a otro
La base que se utiliza para mostrar todo en una computadora es Binario

El software son las series de instrucciones para que esta pueda hacer los procesos

El flujo que todo programa va a seguir: El input, CPU, memoria, Resultado final

## ¿Por qué aprender C?

Stack overflow es cuando tratas de usar más memoria de la que hay, nótese el logo de StackOverflow

[![stack.jpg](https://i.postimg.cc/9MN60Vh8/stack.jpg)](https://postimg.cc/VrnGZx5n)

Si quieres motivarte aún más a aprender C, te dejo estos puntos bastante interesantes que encontré en un foro acerca del por qué aprender C, además de los expuestos en esta clase. ❤️

- Por Educación de mejores prácticas de código, C es un lenguaje muy sensible, si su código no es legible o tiene errores de lógica, no compilará, en comparación con Python o JavaScript, si aprenden la lógica de programar en C ganan la lógica de aprender cualquier lenguaje, es como aprender un lenguaje romance y poder entender los demás romances, es como ver la Matrix de la estructura de un código bien escrito. Si una persona empieza por aprender lenguajes como JavaScript cometerá muchos errores de sintaxis y la mayor parte de las veces creará código no legible o que ocasione problemas para sus compañeros en proyectos más grandes (de hecho por eso se inventó el lenguaje de TypeScript).

- C es un lenguaje bastante rápido en tiempo de ejecución y muy potente, quizás lo obvian porque casi no se ve reflejado visualmente, pero si miran los microcontroladores o microprocesadores se fundamentan sobre este. Los sistemas embebidos que se encuentran en circuitos integrados, usan este tipo de lenguaje. Actualmente se utiliza mucho para programar hardware bien sea de Atmel o Microchip, de hecho es lenguaje más utilizado en programación de circuitos embebidos.

- El lenguaje C ayuda a entender los fundamentos de teoría de computación. Esto debido a que con C tienes que escribir mucho desde CERO porque dispone de pocas librerias.

- Por eso me puse a estudiar C, por que es la base de todos los lenguajes, es muy importante aprender las bases, estar cimentado para poder crecer, por que si una casa no tiene una base firme después se cae.

## Instalando C en Windows

- [Dev-C++ download | SourceForge.net](https://sourceforge.net/projects/orwelldevcpp/)
- [Visual Studio Code - Code Editing. Redefined](https://code.visualstudio.com/)

## Instalando C en Linux

Por si les sirve como información:

GCC es:

- `G`NU
- `C`ompiler
- `C`ollection

Son las siglas del compilador que estamos usando para C.
Lo que hace es recibir tu código escrito en C y genera un ejecutable binario que tu máquina (Linux, Windows) la pueda entender y ejecutar.

helloLinux.c

```c
#include <stdio.h>

int main() {
  printf("Hello Linux \n");
  return 0;
}
```


Compilamos y ejecutamos el codigo

```bash
➜  C git:(IoT) ✗ ls
helloLinux.c  helloworld  helloworld.c
#Compilamos el codigo
➜  C git:(IoT) ✗ gcc helloLinux.c -o hellolinux
➜  C git:(IoT) ✗ ./hellolinux
Hello Linux
```

- [FAQ de C - Errores comunes de programación](http://xina.uoc.es/prestatgeries/PV00_75009_00197/mcomplement/faqcerrc.html)

# 2. Estructura de un programa C

## Estructura de un programa C

la estructura esencial de cualquier programa en C consta de:

- Directivas de Pre-Compilador (librerías)
- Función main
- Código dentro de la función main
- Finalizacion de la función main (return)

Puedes incluir la libreria que deseas con la keyword

```c
#include <nombre_libreria.h>
```

# 3. Tipos de Datos en el lenguaje C

## Tipos de datos

Tipos de datos.

C es tipado, siempre se declara que tipo de dato se usará.

Saber siempre los rangos minimos & máximos de los valores del programa para asignarle un tipo de dato.

```c
Basic Types:

Valores numéricos enteros(integer)
  short        2 bytes.    -32,767 to 32,767
  unsigned int 2 bytes.    0 to 65,535

  int          4 bytes.   -2,147,483,684 to -2,147,483,684
  unsigned int 4 bytes.   0 to 4,294,967,295

  long 8 bytes.
  unsigned long 8 bytes.



Valores numéricos decimales (float)
  float 4 bytes.        6 lugares decimales 
  double 8 bytes.       15 lugareces decimales
  long double 10 bytes. 19 lugares decimales
```


- [¿Qué es E10? 💫 Portal Multimedia Científica Y Popular. 2020](https://es.science19.com/what-is-e10-11567)

## Tipo de dato void

Al Void también se la conoce como palabra reservada de no atribución, la cuál no retorna valores, pero no debemos asociarla con NULL que es totalmente diferente.

  - void: Especifica que no hay valor disponible, se usa en tres escenarios
  - Función retorna un tipo de dato void: `void foo(){}`
  - Función tiene argumento(s) de tipo void: `int foo(void){}`
  - Puntero hacia una dirección en memoria de un objeto, sin importar su tipo dato.

## Tipo de dato Enum

`enum :` Es un tipo de dato que asigna valores a una lista de constantes 

- [Enumeration (or enum) in C](https://www.geeksforgeeks.org/enumeration-enum-c/)

## Tipo de dato char

**char:** nos permite almacenar un caracter, que internamente está constituido como un rango de valores (como los números enteros) con tamaño de 1 byte.
char -128 a 127
unsigned char 0 a 255

- [C - string](https://www.tutorialspoint.com/cprogramming/c_strings.htm)


# 4. Variables en el lenguaje C

## Declaración de variables

Los placeholders (%d) o marcadores de posición son etiquetas que le indican al compilador, lo que debe imprimir en el lugar donde se encuentra la etiqueta

Existen varios placeholders que podemos usar en C, para imprimir variables de diferentes tipos, incluso en un formato particular (Ej. imprimir un dato float con una cantidad definida de decimales). Comparto una tabla que contiene los placeholders más importantes. 

[![placeholders.jpg](https://i.postimg.cc/9M7MQtSd/placeholders.jpg)](https://postimg.cc/xJ9YsH98)

[![funciones-printf.jpg](https://i.postimg.cc/DZ1KJCcc/funciones-printf.jpg)](https://postimg.cc/TL2sBJFy)

## Declaración avanzada de variables

Una variable es un espacio de memoria reservado (en RAM), cuyo tamaño depende del tipo de dato que se quiere almacenar. A dicho espacio reservado podemos asignarle un nombre, para referirnos mucho más fácil a la dirección de memoria donde se encuentra, o al valor que almacena. Los datos contenidos en una variable, al estar cargados en la memoria RAM, desaparecerán una vez el computador se apague.

Debido a que C es un lenguaje fuertemente tipado, es necesario declarar el tipo de datos que va a contener una variable desde el momento de la declaración. La sintaxis (forma correcta de escribir en un lenguaje) para declarar una variable en C es la siguiente

```c
char letra;
```

donde char representa el tipo de datos (caracter), letra es el nombre que le asignamos a la variable, y el ; representa el final de la instrucción. En este ejemplo, hemos reservado 1 byte para almacenar nuestros datos, sin embargo, no se le ha asignado ningún valor aún. Si quisiéramos declarar una variable e inmediatamente guardar un dato en ella podríamos hacerlo usando la sintaxis:

```c
char letra='a';
```

a será el valor que almacena la variable, y se encuentra entre comillas sencillas para indicar que es un caracter.

Finalmente cabe aclarar que podemos asignar cualquier nombre a una variable, teniendo en cuenta estas restricciones:

No debe empezar por un número
No debe ser igual a una palabra reservada del sistema, es decir, palabras definidas previamente por el lenguaje para ejecutar acciones especiales
Deben ser significativos, es decir, que describan claramente lo que están almacenando. Ej. Para almacenar la cantidad de estudiantes de un curso, podriamos llamar a la variable alumnos

No hay diferencia en si. Solo usas `float` o `double` para declarar tus variables decimales.
  - `float` admite hasta 6 decimales.
  - `double` admite hasta 14 decimales.

> Una variable es el nombre que le damos a un espacio en memoria para poder almacenar información de un tipo especifico y esto va a determinar el tamaño y estructura del espacio que estamos reservando en memoria.

- [Desbordamiento de búfer en C](https://parzibyte.me/blog/2018/11/18/desbordamiento-de-bufer-en-c/)

## Declaración de constantes

Concepto de constante es bastante explícito para nosotros los humanos, en la clase no queda muy claro como C interpreta una constante

Como su nombre lo indica, una constante es un valor que no va a cambiar durante toda la ejecución del programa. Al igual que una variable, una constante reserva una cantidad de memoria (que dependen del tipo de dato que almacena), y le asigna un valor, el cual será considerado en adelante como una variable de sólo lectura. Es decir, solo podremos acceder a esa posición de memoria a recuperar el valor que contiene , pero no tenemos la posibilidad de modificar dicho valor

De hecho, si intentamos reasignar un valor definido previamente en una constante, el compilador nos arrojará un error.

Si ingresas %c te imprime el valor en cáracter del código ASCII de tu número 😃

```c
#include <stdio.h>

const char letra = 77;

int main()
{
  printf("Hola, %d tiene un valor de %c en codigo ASCII", letra);
}

>>> Hola, 77 tiene un valor de p en codigo ASCII
```

#### Existen diferentes tipos de constantes:

#### constantes literales

**Ejemplo de constantes literales enteras**

123
1024L // entero long
4352U // entero unsigned
0xFF3A // hexadecimal

**Ejemplos de constantes literales reales**

82.347
2.5E4
5.432E-3

**Ejemplos de constantes literales caracter**

'A'
'b'
'c'

**Ejemplos de constantes literales de cadena**

"Esta es una cadena"

#### Constantes definidas

```c
define PI 3.141516
define MAX 48
```
#### constantes enumeradas

```c
enum Color favorit_color { Red, Orage, Yellow, Green, Blue, Purple}
```

#### constantes declaradas

```c
const int MONTH = 12;
const char CAR = '@';
const char STRING[] = "Programming in C" 
```

## Preprocessor directives: Define


Una directiva de preprocesador es una instrucción que recibe el compilador y le indica que hay ciertas acciones a realizar antes de iniciar a compilar el programa. Se insertan al principio de cada programa, y se identifican por estar precedidas por el caracter `# (Hastag)`

Una de las más conocidas es la directiva `include`, que le dice al compilador que debe incluir una librearía (código previamente escrito, con alguna funcionalidad extra que puede ser usada de manera general en muchos programas) y hacerla parte del código actual.

Otras directivas de prerpocesador son `#ifdef`, `#ifndef`, `#else`, `#elif` y `#endif` las cuales sirven como condiciones para evitar errores, al definir varias veces las mismas variables.

También se puede usar define para reemplazar nombres de funciones.

```c
#include <stdio.h>
#include <stdlib.h>

#define PIZZACOST 1.5
#define p printf

const char NEWLINE = '\n';

int main (int argc, const char* argv[])
{
    float costPizza;
    float numberOfSlices = 3;

    costPizza = PIZZACOST * numberOfSlices;

    p("%.2f", costPizza);
    p("%c", NEWLINE);

    return 0;
}
```

> Directivas. Una instrucción que recibe el compilador y le 
indica que hay ciertas acciones a realizar antes de iniciar a compilar el programa. 

Poner nada más “n” decimales poner:

Entre el signo % y el tipo de variable se pone un punto y el número de decimales que quieres por ejemplo: `%.2f`
Con eso si el valor era `4.5000000` ahora solo mostrará `4.50`

# 5. Conclusiones

## Conclusiones

Nunca pared de Aprender!