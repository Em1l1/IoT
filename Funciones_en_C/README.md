<h1>Funciones en C</h1>

<h3>Ricardo Celis</h3>


<h1>Tabla de Contenido</h1>

- [1. Introducción a las funciones en C](#1-introducción-a-las-funciones-en-c)
  - [Bienvenida](#bienvenida)
  - [¿Qué es una función?](#qué-es-una-función)
  - [Cómo usar las funciones](#cómo-usar-las-funciones)
  - [Tipos de retorno en funciones](#tipos-de-retorno-en-funciones)
- [2. Manejo de funciones en C](#2-manejo-de-funciones-en-c)
  - [Implementación de funciones](#implementación-de-funciones)
  - [Parámetros por valor](#parámetros-por-valor)
- [3. Bibliotecas estándar de funciones](#3-bibliotecas-estándar-de-funciones)
  - [Principales Bibliotecas de C](#principales-bibliotecas-de-c)
  - [Math.h](#mathh)
  - [String.h](#stringh)
  - [Time.h](#timeh)
  - [Stdlib.h](#stdlibh)
- [4. Cierre](#4-cierre)
  - [Conclusiones](#conclusiones)

# 1. Introducción a las funciones en C
## Bienvenida

Bienvenido al Curso

- [https://www.hackerrank.com/domains/c](http://kerrank.com/domains/c)

## ¿Qué es una función?

Una **función**, es un trozo de código que hace una tarea específica. Esta tarea se puede llamar en varias ocasiones en nuestro código, sin necesidad de repetir código.

Elementos: El retorno, el nombre de la función y argumentos.
El retorno debe corresponder a un tipo concreto. Y es lo que la función debe retornar. Puede darse el caso de que la función no devuelva un valor y entonces se declara de tipo `void`.
El nombre de la función es la manera de identificar esta función para poderla llamar.
Los argumentos pueden ser `void`, que no tiene o de un tipo de concreto que será utilizado en la función.

## Cómo usar las funciones

Ejemplo del código de 4 funciones:

1. función **putchar** que escribe una letra, enviada por argumento
2. función **putstr** que escribe un array de letras, enviado por argumento
3. función **power** que calcula la potencia de un número, enviando un argumento base y un argumento exponente.
4. función **main** donde se ejecuta el programa principal.

Notas:

- no utilicé printf, de la libreria stdio.h
- no utilicé bucle for sino bucle while
- separo las declaraciones de las inicializaciones

```c
#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	putstr(char *a)
{
	int i;

	i = 0;
	while(a[i] != '\0')
	{
		putchar(a[i]);
		i++;
	}
}

int		power (int base, int n)
{
	int i;
	int resultado;

	i = 0;
	resultado = 1;
	while (i++ < n)
	{
		resultado *= base;
	}
	return (resultado);
}

int		main (void)
{
	int i;

	i = 0;
	while(i < 4)
	{
		putstr("i = ");
		putchar('0' + i);
		putstr(" resultado de la potencia = ");
		putchar('0' + power(2,i));
		putchar('\n');
		i++;
	}
	return (0);
}
```

resultado

```bash
i = 0 resultado de la potencia = 1
i = 1 resultado de la potencia = 2
i = 2 resultado de la potencia = 4
i = 3 resultado de la potencia = 8
```

## Tipos de retorno en funciones

**Tipos de retorno en funciones** 😄

```c
// <1. Funciones sin argumentos y sin valor de retorno

void functionName(); //Declarando la function.
functionName(); //Invocando o ejecutando a la function
void functionName()// definicion de la function
{
  //logica
}

// 2. Funciones con argumentos, pero sin valor de retorno

void functionName(float); //Declarando la function.
functionName(float); //Invocando o ejecutando a la function
void functionName(float) // definicion de la function
{
  //logica
}

// 3. Funciones sin argumentos, pero con valor de retorno

int functionName();

// 4. Funciones que tienen argumentos y valor de retorno

int functionName(int, float);
// >
```



**caso de uso** *donde la función no necesita que devuelva nada*

- Una función que imprime por la salida estándar una letra. (En este caso la salida estándar es la pantalla)

```c
#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}
```

Con el paso de parámetros, estamos viendo como diversas partes del programa se comunican entre sí:

- Funciones que no reciben argumentos ni retornan valores
- Funciones que reciben argumentos, pero que no retornan valores
- Funciones que reciben argumentos, y retornan valores
- Programas que llaman a otros programas sin paso de argumentos
- Programas que llaman a otros programas , con paso de argumentos(usando sockets).

# 2. Manejo de funciones en C

## Implementación de funciones

**Funciones sin argumentos y sin valor de retorno** 😄

```c
void demo();

int main()
{
  demo();

  return 0;
}

void()
{
 int a, b, suma;
 a = 100;
 b = 100;
 printf("El resultado es %i", suma);
}

```

**Funciones con argumentos, pero sin valor de retorno**

```c
int a, b;

void sum(int a, int b);

int main()
{
  sum(100, 100);

  return 0;
}

void sum(int a, int b)
{
 int sum;
 sum = a + b;
 printf("El resultado es %i", sum);
}
>
```

**Funciones que tienen argumentos y valor de retorno**

```c
int a, b;

int sum(int a, int b);

int main()
{
  sum(100, 100);
  printf("El resultado es %i", sum(100, 100));
  return 0;
}

int sum(int a, int b)
{
 int sum;
 sum = a + b;
 return sum;
}

```

## Parámetros por valor

La funcion power tiene dos argumentos base y n, en el método main, no se sabe que es n, pero si se conoce i, quizás quedaría más claro en la salida que se imprime por printf indicar el nombre de la variable i, que es la que itera en el bucle.

En la segunda parte ya se cambia y en main se declara n quitando i, ahí se entiende mejor, la salida por pantalla.

Las funciones deberían ser un poco como cajas negras, es decir que no necesitamos conocer como están implementadas para poder llamarlas, por lo que si pasamos como argumento una variable no tiene porque necesariamente llamarse igual.

En la llamada a power que haces en main utilizas un literal 2, y una variable n con valor literal 3.

- pasar un argumento por referencia, se modifica porque recibe la posición de memoria donde está el valor.
- pasar un argumento por valor, no se modifica porque es una copia, es decir es una posición de memoria diferente.

Un **Puntero** es un argumento por referencia. 🐱

# 3. Bibliotecas estándar de funciones
## Principales Bibliotecas de C

- Las funciones declaradas en **stdio.h** pueden clasificarse en dos categorías: funciones de manipulación de ficheros y funciones de manipulación de entradas y salidas. [fuente](https://es.wikipedia.org/wiki/Stdio.h#:~:text=h%2C que significa "standard input,y salida%2C así como la)
- Las funciones que pertenecen a **conio.h** declara varias funciones útiles para mejorar el rendimiento de la «entrada y salida por consola» [fuente](https://es.wikipedia.org/wiki/Conio.h#:~:text=a la búsqueda-,conio.,de E%2FS por consola.)
- Las funciones que pertenecen a **stdlib.h** pueden clasificarse en las siguientes categorías: conversión, memoria, control de procesos, ordenación y búsqueda, matemáticas. [fuente](https://es.wikipedia.org/wiki/Stdlib.h#:~:text=a la búsqueda-,stdlib.,control de procesos y otras.)
- **string.h** es un archivo de la Biblioteca estándar del lenguaje de programación C que contiene la definición de macros, constantes, funciones y tipos y algunas operaciones de manipulación de memoria.
  [fuente](https://es.wikipedia.org/wiki/String.h)
- **math.h** es un archivo de cabecera de la …biblioteca estándar del lenguaje de programación C diseñado para operaciones matemáticas básicas. [fuente](https://es.wikipedia.org/wiki/Math.h)
- **time.h** relacionado con formato de hora y fecha es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C que contiene funciones para manipular y formatear la fecha y hora del sistema. [fuente] (https://es.wikipedia.org/wiki/Time.h)
- **ctype.h** es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C diseñado para operaciones básicas con caracteres. [fuente](https://es.wikipedia.org/wiki/Ctype.h)
- **signal.h** es un archivo de cabecera definido en la Biblioteca estándar de C para especificar como un programa maneja señales mientras se ejecuta. [fuente](https://es.wikipedia.org/wiki/Signal.h)
- **locale.h** [fuente](https://es.cppreference.com/w/c/locale/LC_categories)
- **errno.h** [fuente](https://es.cppreference.com/w/cpp/header/cerrno)
- **assert.h** proporcionar una definicion de la macro assert, que imprime un mensaje de error y aborta el [programa fuente](https://es.wikipedia.org/wiki/Assert.h)

Tabla de codificación [ASCII](https://ascii.cl/es/)

```c
#include <stdio.h>  //input y output teclado, para imprimir pantalla printf
#include <conio.h>  //entradas y salidas comunicarnos en la consola
#include <string.h> // cuando se trabaja con cadenas de caracteres
#include <stdlib.h> // system comunicarnos afuera de c con sistema attoy convertir string a entero  adol convierte a long ran genera numeros enteros aleatorios delay para pausa
#include <math.h>   // sin cosh floor ceil sqrt
#include <time.h>   // para fechas o tiempos del sistema
#include <ctype.h>  //  tipo manejo de caracteres individuales
#include <signal.h> // señales en programa por ejemplo enventos en el teclado , detectar un espacio en blanco en cadena de caracteres, detectar caracter en minuscúla lower y upper.
#include <locale.h> // cuestinones locales al software cuando se neccesita que se adapte al lugar que se use
#include <errno.h>  // para debug errores.
#include <assert.h> // macro para verificar asumsiones y imprimir que esta pasando.
```



![img](https://www.google.com/s2/favicons?domain=https://cdn.devdocs.io/favicon.ico)[DevDocs — C documentation](https://devdocs.io/c/)

![img](https://www.google.com/s2/favicons?domain=https://static.platzi.com/media/favicons/platzi_favicon.png)[C Language Reference | Microsoft Docs](https://docs.microsoft.com/en-us/cpp/c-language/c-language-reference?view=vs-2019)

## Math.h

```c
#include <stdio.h>
#include <math.h>

int x;
float result;

int main()
{
  printf("ingrese el valor de x: ");
  scanf("%d", &x);
  result = cos(x);
  printf("El valor ingresado es:%d \n", x);
  printf("El valor del seno de X es:%f\n", result);

  return 0;
}
```

![img](https://www.google.com/s2/favicons?domain=https://www.tutorialspoint.com/c_standard_library/math_h.htm/favicon.ico)[C Library - - Tutorialspoint](https://www.tutorialspoint.com/c_standard_library/math_h.htm)

## String.h

Otras funciones son:

***strlen***: devuelve la longitud del *string.*

***strcpy***: recibe dos parámetros, el segundo se copia y se guarda dentro del primero.

Cuando no se quiere realizar la operación con el _string _entero se utilizan las funciones con una n en medio del nombre: ***strncat, strncpy, strncmp\***,… Éstas funciones reciben un parámetro más que es la longitud del string con la que se va a operar.

Un ejemplo de esto:

```c
#include <stdio.h>
#include <string.h>

char string1[60];
char string2[60];

int main()
{

    printf("Type a sentence: \n");
    gets(string1);
    printf("Type another sentence: \n");
    gets(string2);

    strrev(string1);
    printf("Reversed string: %s \n", string1);

    if ( strcmp(string1, string2) == 0)
        printf("The strings are equal \n");
    else
    {
        strcat(string1, string2);
        printf("The strings are different \n");
        printf("The strings joined: %s \n", string1);
        
    }

    printf("%d \n", strlen(string1));

    strcpy(string1, "New string1");
    printf("%s \n", string1);

    strncpy(string1, "New string 1", 4);
    string1[4] = '\0';
    printf("%s \n", string1);
    
    return 0;
}
```

Hay que tener en cuenta que en los *strings* el último carácter es el carácter nulo (’\0’) y a veces hay que añadirlo manualmente o el código da problemas.

Otras funciones de la libreria String
`man string`

```sh
STRING(3)                                                                            Linux Programmer's Manual                                                                            STRING(3)

NAME
       stpcpy,  strcat,  strchr,  strcmp,  strcoll, strcpy, strcspn, strdup, strfry, strlen, strncat, strncmp, strncpy, strpbrk, strrchr, strsep, strspn, strstr, strtok,
       strxfrm, - string operations

SYNOPSIS
       #include <string.h>

       char *stpcpy(char *dest, const char *src);
              Copy a string from src to dest, returning a pointer to the end of the resulting string at dest.

       char *strcat(char *dest, const char *src);
              Append the string src to the string dest, returning a pointer dest.

       char *strchr(const char *s, int c);
              Return a pointer to the first occurrence of the character c in the string s.

       int strcmp(const char *s1, const char *s2);
              Compare the strings s1 with s2.

       int strcoll(const char *s1, const char *s2);
              Compare the strings s1 with s2 using the current locale.

       char *strcpy(char *dest, const char *src);
              Copy the string src to dest, returning a pointer to the start of dest.

       size_t strcspn(const char *s, const char *reject);
              Calculate the length of the initial segment of the string s which does not contain any of bytes in the string reject,

       char *strdup(const char *s);
              Return a duplicate of the string s in memory allocated using malloc(3).


       char *strfry(char *string);
              Randomly swap the characters in string.

       size_t strlen(const char *s);
              Return the length of the string s.

       char *strncat(char *dest, const char *src, size_t n);
              Append at most n characters from the string src to the string dest, returning a pointer to dest.

       int strncmp(const char *s1, const char *s2, size_t n);
              Compare at most n bytes of the strings s1 and s2.

       char *strncpy(char *dest, const char *src, size_t n);
              Copy at most n bytes from string src to dest, returning a pointer to the start of dest.

       char *strpbrk(const char *s, const char *accept);
              Return a pointer to the first occurrence in the string s of one of the bytes in the string accept.

       char *strrchr(const char *s, int c);
              Return a pointer to the last occurrence of the character c in the string s.

       char *strsep(char **stringp, const char *delim);
              Extract the initial token in stringp that is delimited by one of the bytes in delim.

       size_t strspn(const char *s, const char *accept);
              Calculate the length of the starting segment in the string s that consists entirely of bytes in accept.

       char *strstr(const char *haystack, const char *needle);
              Find the first occurrence of the substring needle in the string haystack, returning a pointer to the found substring.

       char *strtok(char *s, const char *delim);
              Extract tokens from the string s that are delimited by one of the bytes in delim.

       size_t strxfrm(char *dest, const char *src, size_t n);
              Transforms src to the current locale and copies the first n characters to dest.

DESCRIPTION
       The string functions perform operations on null-terminated strings.  See the individual man pages for descriptions of each function.

SEE ALSO
       index(3), rindex(3), stpcpy(3), strcasecmp(3), strcat(3), strchr(3), strcmp(3), strcoll(3), strcpy(3), strcspn(3), strdup(3), strfry(3), strlen(3), strncasecmp(3), strncat(3),  strncmp(3),
       strncpy(3), strpbrk(3), strrchr(3), strsep(3), strspn(3), strstr(3), strtok(3), strxfrm(3)

COLOPHON
       This  page  is  part  of  release 4.15 of the Linux man-pages project.  A description of the project, information about reporting bugs, and the latest version of this page, can be found at
       https://www.kernel.org/doc/man-pages/.

                                                                                             2014-01-04                                                                                   STRING(3)
```

![img](https://www.google.com/s2/favicons?domain=https://www.tutorialspoint.com/c_standard_library/math_h.htm/favicon.ico)[C Library - - Tutorialspoint](https://www.tutorialspoint.com/c_standard_library/string_h.htm)

## Time.h

El código, no es igual en Linux que en Windows, por lo que tendrán que comentar y descomentar según sea su máquina si quieren probar mi código.

```c
#include <time.h>
#include <stdlib.h>

int		main(void)
{
	long i;
	long begin;
	long end;
	int hours;
	int minutes;
	int seconds;
	long aux;
	
	i = 0;
	begin = time(NULL);
	while (i < 600)
	{
		system("clear"); // Linux
		//system("cls"); // Windows
		printf("contandor %06d\n", i);
		i++;
	}
	end = time(NULL);
	aux = difftime(end, begin);
	hours = aux / 3600;
	minutes = aux / 60;
	seconds = aux % 60;
	printf("el tiempo transcurrido total es %d seg y equivale a %02d:%02d:%02d", aux, hours, minutes, seconds);
	return 0;
}
```

**Salida**

```bash
contandor 000599
el tiempo transcurrido total es 19 seg y equivale a 00:00:19
```

![img](https://www.google.com/s2/favicons?domain=https://www.tutorialspoint.com/c_standard_library/time_h.htm/favicon.ico)[C Library - - Tutorialspoint](https://www.tutorialspoint.com/c_standard_library/time_h.htm)

![img](https://www.google.com/s2/favicons?domain=https://www.timeanddate.com//favicon-48x48.png)[timeanddate.com](https://www.timeanddate.com/)

## Stdlib.h

Para quienes usamos Mac o Linux, las dos funciones `system()` utilizadas no funcionarán. Porque corren solo en Windows. Sí que la primera tiene su versión para sistemas UNIX. Para limpiar la consola, en lugar de `system(cls);` para Windows, deben usar `system("clear");`.

**versión del `Decimal2Binary.c`**

```c
#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	long number;
	int binaryNumber[12];
	int i;
	
	i = 0;
	printf("Introduzca un valor\n");
	scanf("%d", &number);

	while (i++ < 12)
		binaryNumber[i] = 2;

	i = 0;
	while (number >= 0)
	{
		if(i < 12)
			binaryNumber[i] = number % 2;
		number = number / 2;
		if(number == 0)
			number--;
		i++;
	}
	printf("el número binario es: ");
	if(i > 12)
		i = 12;
	while (i-- > 0)
		if (binaryNumber[i] != 2)
			printf("%d", binaryNumber[i]);
	printf("\n");
}
```

**salida**

```shell
Introduzca un valor
8
el número binario es: 1000
```

Con Whiles

```c
// 1er paso Dividir el valor entre 2 y almacenar el resto, mod, en un array
// 2do paso dividir otra vez entre 2 y almacenar el restante
// Repetir hasta que nuestro número ya no se pueda dividir

#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12], n, i;

main()
{
    //system("cls");
    //system("color 9F");
    printf("Ingrese un valor decimal\n");
    scanf("%d", &n);
    printf("Usted va a convertir número %d a binario\n", n);


    
    while (n > 0)
    {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    i = i - 1;

    printf("La conversión de la conversión es: ");

    while (i >= 0)
    {
        printf("%d", binaryNumber[i]);
        i--;
    }

    return 0;
}
```

![img](https://www.google.com/s2/favicons?domain=https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm/favicon.ico)[C Library - - Tutorialspoint](https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm)

![img](https://www.google.com/s2/favicons?domain=https://www.w3schools.com/colors/colors_picker.asp/favicon.ico)[HTML Color Picker](https://www.w3schools.com/colors/colors_picker.asp)

# 4. Cierre
## Conclusiones

[Code Wars](https://www.codewars.com/) para practicar.

