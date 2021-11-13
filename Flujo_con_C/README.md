<h1>Control de Flujo en C</h1>

<h3>Ricardo Celis</h3>


<h1>Tabla de Contenido</h1>

- [1. Bienvenida](#1-bienvenida)
  - [Bienvenida al Curso](#bienvenida-al-curso)
- [2. Toma de decisiones](#2-toma-de-decisiones)
  - [Estructuras de decisión](#estructuras-de-decisión)
  - [Expresión if](#expresión-if)
  - [If anidados](#if-anidados)
  - [Expresión switch case](#expresión-switch-case)
- [3. Control de Bucles en C](#3-control-de-bucles-en-c)
  - [Bucle while](#bucle-while)
  - [Bucle do while](#bucle-do-while)
  - [Bucle for](#bucle-for)
- [4. Uso de las instrucciones break y continue](#4-uso-de-las-instrucciones-break-y-continue)
  - [Expresión break](#expresión-break)
  - [Expresión continue](#expresión-continue)
  - [Expresión goto](#expresión-goto)
- [5. Cierre](#5-cierre)
  - [Continúa practicando](#continúa-practicando)
  - [Cierre y conclusiones](#cierre-y-conclusiones)

# 1. Bienvenida
## Bienvenida al Curso

# 2. Toma de decisiones
## Estructuras de decisión

Un statement es una línea de código o un solo comando que el programa compila de a uno a la vez.
Ejemplo:

```c
printf("Hello world \n");
```

Por su parte, un bloque de código es un conjunto de varios statements que se compilan juntos, estos se agrupan con los corchetes “{}”.
Ejemplo:

```c
statment1;
statment2;
.
.
.
statmentx;
```

Ahora ¿Cómo funcionan los “if’s”?
Sencillo, estas estructuras tienen el siguiente formato:

```c
if (condicion1)
{
    statment1;
    statment2;
}
else if (condicion2)
{
    statment3;
    statment4;
    statment5;
}
else if (condicion3)
    statment6;
else
{
    statment7;
    statment8;
    .
    .
    .
    statmentn;
}
```

Aunque esté escrito en **pseudocódigo** funciona para darnos una idea.
**Los ciclos if siempre van acompañados de una condición**, si esta se cumple se realizarán los statments o el bloque de código correspondiente, y si no se cumple, se procederá a comparar con en el **siguiente comparativo else if** y checará la condición de este nuevo comparativo, si se cumple entrará al bloque de código y si no seguirá comparando con los else if restantes **hasta llegar al comparativo else final** que es el bloque a ejecutar por defecto.

**Notas:**

- Veamos que en el segundo “else if”, no se utilizan corchetes ya que solo se ejecutará un statment.
- **La programación es secuencial**, es decir, si se cumple por ejemplo la condición del primer if se ejecutará el bloque de código correspondiente y no comparará con los demás “else if” ni “else”. Por lo que si tenemos condiciones repetidas, siempre se ejecutará el bloque de código correspondiente a la condición cumplida que esté “más arriba” en el código.

**Statement**: Es declarar una sola variable o una linea de codigo desde que empieza hasta que se pone el ;

**Bloques**: Se pone entre {}

El if funciona atraves de expresiones

Cuando tengas un solo statement no necesitas poner las llaves {}

Puedes poner tantos else if como requieras

> ```c
> Los Statements son Simples unidades básica de código y Los bloques de códigos tienen varios Statements
> 
> {// aqui un bloque de codigo
> 
> // Statements 1
> // Statements 2
> // Statements 3
> .
> .
> 
> }
> ```
>
> 

> cuando escribe una estrucutra de decición ya se un if, un else if o un else, si consta más de una linea de código lo que se quiere ejecutar, es requerido definir las llaves, si solo contiene una línea entonces es opcional.

## Expresión if

**Operadores lógicos**

<img src="https://i.ibb.co/hcKp5D6/operadores.jpg" alt="operadores" border="0">

**Operadores lógicos en explicados de manera sencilla**

1. Con **AND (&&)** si una de las dos expresiones es falsa entonces toda la expresión será falsa.
2. Con **OR (||)** si una de las dos expresiones es verdadera entonces toda la expresión será verdadera.
3. Con **NOT (!)** si la expresión es falsa entonces toda la expresión viene a ser verdadera, pero si la expresión es verdadera entonces toda la expresión viene a ser falsa.

Entiéndase que el valor de toda una expresión viene a ser 0 si es falsa y 1 si es verdadera.

<img src="https://i.ibb.co/jrvX0YF/operadores-C.jpg" alt="operadores-C" border="0">

```c
#include <stdio.h>
int n = -1;

int main()
{
    if(n > 10 && n < 20)
    printf("el numero es mayor que diez, pero menor que 20");
    else if (n == 10)
    printf("el numero es diez");
    else if (n > 20)
    printf("el numero es mayor que veinte");
    else if(n < 10 && n >= 0)
    printf("el numero esta en el rango de 0 a 9");
    else
    printf("ERROR no quiero numeros negativos");
    return 0;
    
}#include <stdio.h>
int n = -1;

int main()
{
    if(n > 10 && n < 20)
    printf("el numero es mayor que diez, pero menor que 20");
    else if (n == 10)
    printf("el numero es diez");
    else if (n > 20)
    printf("el numero es mayor que veinte");
    else if(n < 10 && n >= 0)
    printf("el numero esta en el rango de 0 a 9");
    else
    printf("ERROR no quiero numeros negativos");
    return 0;
    
}
```

![img](https://www.google.com/s2/favicons?domain=https://en.cppreference.com/w/c/language/operator_logical/favicon.ico)[Logical operators - cppreference.com](https://en.cppreference.com/w/c/language/operator_logical)

## If anidados

**Menu**

<img src="https://i.ibb.co/Dz2mkcK/ifc.jpg" alt="ifc" border="0">

```c
#include <stdio.h>

int opt1 = 1;
int opt2 = 2;

int main(){
	printf("¡Bienvenido a PlatziStore!\nElige una opción para tu pedido:\n");
	printf(" - Opción 0 para PlatziBebidas\n");
	printf(" - Opción 1 para PlatziComidas\n");
	printf(" - Opción 2 para PlatziPostres\n");

	// este programa genera menus segun lo que el usuario elija
	if (opt1 == 0){
		printf("Usted eligió la opción 0. Verá nuestro menú de bebidas. Elija una:\n");
		printf(" - Opción 0 para PlatziCola-0\n");
		printf(" - Opción 1 para PlatziCola-N\n");
		printf(" - Opción 2 para PlatziPiña-Colada\n");

		if (opt2 == 0)
			printf("Usted eligió una PlatziCola-0\n");
		else if (opt2 == 1)
			printf("Usted eligió una PlatziCola-N\n");
		else if (opt2 == 2)
			printf("Usted eligió una PlatziPiña-Colada\n");
		else
			printf("Elija una opción válida");
	}
	else if (opt1 == 1){
		//aqui va el menu de alimentos
		printf("Usted eligió la opción 1. Verá nuestro menú de alimentos. Elija una PlatziComida:\n");
		printf(" - Opción 0 para PlatziBurritos\n");
		printf(" - Opción 1 para PlatziPizza\n");
		printf(" - Opción 2 para PlatziMaster\n");

		if (opt2 == 0)
			printf("Usted eligió un PlatziBurritos\n");
		else if (opt2 == 1)
			printf("Usted eligió una PlatziPizza\n");
		else if (opt2 == 2)
			printf("Usted eligió una PlatziMaster\n");
		else
			printf("Elija una opción válida\n");
	}
	else if (opt1 == 2){
		//aqui va el menu de postres
		printf("Usted eligió la opción 2. Verá nuestro menú de pastres. Elija un PlatziPostres:\n");
		printf(" - Opción 0 para Platzi3Leches\n");
		printf(" - Opción 1 para PlatziBacano\n");
		printf(" - Opción 2 para PlatziRecargado\n");

		if (opt2 == 0)
			printf("Usted eligió un Platzi3Leches\n");
		else if (opt2 == 1)
			printf("Usted eligió un PlatziBacano\n");
		else if (opt2 == 2)
			printf("Usted eligió un PlatziRecargado\n");
		else
			printf("Elija una opción válida\n");
	}
	else {
		printf("Por favor, elija una opción válida\n");
	}

	return 0;
}
```



## Expresión switch case

menu de carreras y cursos de platzi (un extracto)

```c
#include <stdio.h>

int opt1 = 2;
int opt2 = 1;

int	main (void)
{
	// este programa genera menus de carreras
	printf("Bienvenido al menu de carreras\n");
	printf("1) Desarrollo e ingeniería\n");
	printf("2) Diseño y UX\n");
	printf("3) Marketing\n");
	printf("4) Producción audiovisual\n");
	switch (opt1)
	{
	case 1:
		printf("usted eligió la carrera de desarrollo e ingeniería\n");
		// este programa genera menus de cursos
		printf("Bienvenido al menu de cursos\n");
		printf("1) Seguridad Informática\n");
		printf("2) Base de datos\n");
		printf("3) Fundamentos de programación\n");
		printf("4) Inteligencia Artificial y Matching Learnig\n");
		switch (opt2)
		{
		case 1:
			printf("usted eligió el curso de seguridad informática\n");
			break;
		case 2:
			printf("usted eligió el curso de base de datos\n");
			break;
		case 3:
			printf("usted eligió el curso de fundamentos de programación\n");
			break;
		case 4:
			printf("usted eligió el curso de inteligencia artificial y matching learnig\n");
			break;
		default:
			printf("opción invalida\n");
			break;
		}
		break;
	case 2:
		printf("usted eligió la carrera de diseño y UX\n");
		// este programa genera menus de cursos
		printf("Bienvenido al menu de cursos\n");
		printf("1) Diseño gráfico\n");
		printf("2) Diseño de experiencia de usuario\n");
		printf("3) Diseño de interfaces\n");
		switch (opt2)
		{
		case 1:
			printf("usted eligió el curso de diseño gráfico\n");
			break;
		case 2:
			printf("usted eligió el curso de diseño de experiencia de usuario\n");
			break;
		case 3:
			printf("usted eligió el curso de diseño de interfaces\n");
			break;
		default:
			printf("opción invalida\n");
			break;
		}
		break;
	case 3:
		printf("usted eligió la carrera de marketing\n");
		// este programa genera menus de cursos
		printf("Bienvenido al menu de cursos\n");
		printf("1) Marketing Digital\n");
		printf("2) Marketing y Ventas\n");
		printf("3) Inbound Marketing\n");
		printf("4) Outbound Marketing\n");
		switch(opt2)
		{
		case 1:
			printf("usted eligió el curso de marketing digital\n");
			break;
		case 2:
			printf("usted eligió el curso de marketing y venta\n");
			break;
		case 3:
			printf("usted eligió el curso de inbound marketing\n");
			break;
		case 4:
			printf("usted eligió el curso de outbound marketing\n");
			break;
		default: 
			printf("opción invalida\n");		
			break;
		}
		break;
	case 4:
		printf("usted eligió la carrera de Producción audiovisual\n");
		// este programa genera menus de cursos
		printf("Bienvenido al menu de cursos\n");
		printf("1) Producción audiovisual\n");
		printf("2) Periodismo digital\n");
		switch (opt2)
		{
		case 1:
			printf("usted eligió el curso de producción audiovisual\n");
			break;
		case 2:
			printf("usted eligió el curso de periodismo digital\n");
			break;
		default: 
			printf("opción invalida\n");
			break;
		}
		break;
	default:
		printf("opción invalida\n");
		break;
	}
	return (0);
}

// Salida
```

**Menu carreras**

```bash
Bienvenido al menu de carreras

1. Desarrollo e ingeniería
2. Diseño y UX
3. Marketing
4. Producción audiovisual
   usted eligió la carrera de diseño y UX
   Bienvenido al menu de cursos
5. Diseño gráfico
6. Diseño de experiencia de usuario
7. Diseño de interfaces
   usted eligió el curso de diseño gráfico
```

> 1. Ponle mucha atención a la indentación aunque no sea relevante para el compilador hace el código mas legible para las personas.
> 2. La sentencia switch se utiliza principalmente para máquinas de estados.

# 3. Control de Bucles en C

## Bucle while

La sentencia WHILE hace repetir el ciclo de captura del dato “n” y la resta de dicho dato “-1” hasta que llegue un momento en que no cumpla con la condición de ser un número mayor que 10.
En ese momento, sale del bucle y termina de ejecutarse el código.

Sintáxix:

```c
while(expression)
{
expressions;
}
```

Código:

```c
#include <stdio.h>
int n = 10;
int main()
{
while (n > 10){
printf(“n es igual a %d\n”, n);
n = n-1;
}
printf(“hemos salido del bucle porque n es igual o menor que 10”);
return 0;
}
```

**SACAR PROMEDIO DE TANTAS CALIFICACIONES DADAS**

La sentencia WHILE se hace repeitr mientras la condición sea verdadera. Hasta que es falsa se termina.
En este ejemplo se acumulan datos capturados que cumplan la reglas de un criterio (mientras no sea igual a -1).
Cuando este criterio deja de cumplirse, el código ya hizo la sumatoria de los datos buenos, y contabilizó cuantos datos buenos son.
Esto le permite dividir la sumatoria de los datos que si cumplieron el criterio entre la cantidad de datos capturados buenos; y así sacar el promedio.

**S i n t á x i x :**

```c
while(expression)
{
expressions;
}
```


**C ó d i g o :**

```c
//promedio.c](https://promedio.c/)
#include <stdio.h>

int main()
{
int calif, conta=0, suma=0;
float promedio;
printf(“Introduce la Calificación (termina con -1): “);
scanf(”%d”, &calif );
   while (calif !=-1)
  {
        suma+= calif;
        conta++;
        printf("Introduce la Califación (termina con -1): ");
        scanf("%d", &calif );

  }

  promedio = (float) suma/conta;

  printf("\tEl promedio es: %6.1f", promedio);
return 0;
}
```

## Bucle do while

**WHILE**
Un código que esté mandando a cada cierto tiempo la altura del nivel del agua de una cisterna.
La condición sería que los datos sean capturados mientras estén dentro de un rango definido, y sólo cuando este rango no se cumpla, dejar de hacer dicho registro.

**DO WHILE**
Un código que encienda la iluminación completa de un auditorio, mientras que en dicho espacio se compruebe que haya al menos unas 20 personas. Sino sólo se encienden las luces de emergencia.

<img src="https://i.ibb.co/1Z3rrGv/dowhile.jpg" alt="dowhile" border="0">

**Adivina un número que la máquina piensa**

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main (void)
{
	int numero;
	int numeroPensado;
	int intentos;
	long i = time(NULL);

	numeroPensado = i % 11 + 1;
	intentos = 0;

	printf ("He pensado un número del 1 al 10\n");
	do
	{
		intentos++;
		printf ("¿cual dirás que es?\n");
		scanf("%d", &numero);
		if (numero < numeroPensado)
			printf ("Mi número pensado es mayor que %d\n", numero);
		else if (numero > numeroPensado)
			printf ("Mi número pensado es menor que %d\n", numero);
	} while (numero != numeroPensado );
	printf ("¡Enhorabuena! mi numero %d adivinado en %d intentos\n", numeroPensado, intentos);
}
```

**Salida**

```bash
He pensado un número del 1 al 10
¿cual dirás que es?
5
Mi número pensado es mayor que 5
¿cual dirás que es?
7
Mi número pensado es menor que 7
¿cual dirás que es?
6
¡Enhorabuena! mi numero 6 adivinado en 3 intentos
```

## Bucle for

Programa que calcula los primeros 100.000 primos (combina un for para recorrer los números y un do while para encontrar el primer divisor y descartar que es primo.

```c
#include <stdlib.h>

int	main(void)
{
	int totalPrimosEcontrados;
	int total = 100000;
	int numeroEstudiar;
	int divisor;
	int encontradoDivisor;

	totalPrimosEcontrados = 0;
	for (numeroEstudiar = 1; numeroEstudiar <= total; numeroEstudiar++)
	{
		divisor = 1;
		encontradoDivisor = 1;
		do 
		{
			if(divisor > 1 && divisor < numeroEstudiar)
				if (numeroEstudiar % divisor == 0)
					encontradoDivisor = 0;
			divisor++;
		} while (encontradoDivisor == 1 && divisor < numeroEstudiar);
		if (encontradoDivisor == 1)
		{
			totalPrimosEcontrados++;
			printf("[%d] Encontrado número primo\n", numeroEstudiar);
		}
//		else 
//			printf("[%d] no es primo\n", numeroEstudiar);
	}
	printf("Total primos encontrados del 1 al %d, = %d\n", total, totalPrimosEcontrados);
	return (0);
}
```

**Salida**

<img src="https://i.ibb.co/wRS1T21/for.gif" alt="for" border="0">

en este ciclo main no se escribió el **return 0** e igual funcionó, si les interesa saber porque miren este [return 0 optional](https://stackoverflow.com/questions/4138649/why-is-return-0-optional)

**Programa simula un temporizador que va de 100000 a 0 segundos**

```c
#include <stdio.h>
//Programa simula un temporizador que va de 100000 a 0 segundos

int main(){

  int i;
  int contador=100000;
  int tiempoRestante=100000;

  printf("Se te termina el tiempo\n\n");
  
  for(i = 0; i <= contador; ++i){
    printf("Tienes %d segundos \r",tiempoRestante);
    
    tiempoRestante=tiempoRestante-1;
  }
  
  printf("\nYa no tienes tiempo, perdiste\n");
  
  return (0);
}
```

**Ejecucion**

<img src="https://i.ibb.co/g4GxQYS/temporizador.gif" alt="temporizador" border="0">

![img](https://www.google.com/s2/favicons?domain=https://s.ytimg.com/yts/img/favicon-vfl8qSV2F.ico)[RobotChallenge 2014 - Linefollower Enhanced Highlights](https://youtu.be/X_yQUzzl1qM)

![img](https://www.google.com/s2/favicons?domain=https://s.ytimg.com/yts/img/favicon-vfl8qSV2F.ico)[.::CDIR ITESCO EN ROBOTCHALLENGE 2014::.](https://youtu.be/i678o8yDSKY)

![img](https://www.google.com/s2/favicons?domain=https://s.ytimg.com/yts/img/favicon-vfl8qSV2F.ico)[Seguidor de Línea CDIR ITESCO](https://youtu.be/LO6kESS-Lu8)

# 4. Uso de las instrucciones break y continue
## Expresión break

Programa que calcula los primeros 100.000 primos (combina un `for`para recorrer los números y un `do while` para encontrar el primer divisor y descartar que es primo. (pero ahora usando `break`en el `do while`)

```c
#include <stdlib.h>

int	main(void)
{
	int totalPrimosEcontrados;
	int total = 100000;
	int numeroEstudiar;
	int divisor;

	totalPrimosEcontrados = 0;
	for (numeroEstudiar = 1; numeroEstudiar <= total; numeroEstudiar++)
	{
		divisor = 0;
		do 
		{
			divisor++;
			if(divisor > 1 && divisor < numeroEstudiar)
				if (numeroEstudiar % divisor == 0)
					break;
		} while (divisor < numeroEstudiar);
		if (divisor == numeroEstudiar)
		{
			totalPrimosEcontrados++;
			printf("[%d] Encontrado número primo\n", numeroEstudiar);
		}
//		else 
//			printf("[%d] no es primo\n", numeroEstudiar);
	}
	printf("Total primos encontrados del 1 al %d, = %d\n", total, totalPrimosEcontrados);
	return (0);
}
```

**Salida**

<img src="https://i.ibb.co/wRS1T21/for.gif" alt="for" border="0">

- **While (Mientras)😗** Repite el bloque de código mientras la expresión sea verdadera.
- **Do While (Hacer Mientras):** Ejecuta el bloque de código primero y sigue haciéndolo hasta que la condición deje de ser verdadera.
- **For:** Itera el bloque de código para llegar al final que nosotros le asignamos

## Expresión continue

Expresion continue: Sirve para volver al principio del bucle en cualquier momento, sin ejecutar las líneas que haya por debajo de la palabra continue. Este ejemplo, en condiciones normales contaría hasta desde `i=0` hasta `i=7`, pero cada vez que se ejecuta el bucle pregunta al usuario si desea incrementar la variable o no.

**Break**: Nos saca del ciclo

**Continue**: Salta unicaménte una iteración, pero el ciclo continua

Continue nos sirve para cuando algo muy especifico que se esta detectando con un if dentro de un ciclo (while, Do while, for), quieres que se salte, es decir que no se ejecute y que siga la siguiente iteración.

Programa que calcula los primeros 100.000 primos (combina un `for`para recorrer los números y un `do while` para encontrar el primer divisor y descartar que es primo. (Utiliza el `continue`para cuando no debe imprimir el número como primo.

```c
#include <stdlib.h>

int	main(void)
{
	int totalPrimosEcontrados;
	int total = 100000;
	int numeroEstudiar;
	int divisor;
	
	totalPrimosEcontrados = 0;
	for (numeroEstudiar = 1; numeroEstudiar <= total; numeroEstudiar++)
	{
		divisor = 0;
		do 
		{
			divisor++;
			if(divisor > 1 && divisor < numeroEstudiar)
				if (numeroEstudiar % divisor == 0)
					break;
		} while (divisor < numeroEstudiar);
		if (divisor < numeroEstudiar)
			continue;
//		else 
//			printf("[%d] no es primo\n", numeroEstudiar);
		totalPrimosEcontrados++;
		printf("[%d] Encontrado número primo\n", numeroEstudiar);
	}
	printf("Total primos encontrados del 1 al %d, = %d\n", total, totalPrimosEcontrados);
	return (0);
}
```

**Salida**

<img src="https://i.ibb.co/wRS1T21/for.gif" alt="for" border="0">

## Expresión goto

Esta instrucción `goto` seguramente sea algo heredado de otros lenguajes más antiguos. El lenguaje **C ** que se basa en un paradigma de programación estructurada.
Es más avanzado a la programación secuencial porque tiene funciones que rompe la continuidad, por la existencia de return, los bucles con el `continue`, y `break. El`goto` es algo que puede saltar a otro lugar del código que puede ser curioso… no lo he probado pero que tal y si pongo la etiqueta dentro de un bucle y este no tiene inicializadas las condiciones… En fin no quiero romperme la cabeza, solo le pido al compilador que ante semejante aberración chille, llore, berrée o te saque del programa de forma abrupta, a ser posible sin guardar el programa.

La instrucción de salto goto se puede usar en un programa, para transferir incondicionalmente el control del mismo a la primera instrucción después de una etiqueta, o dicho de otra forma, al ejecutar una instrucción goto, el control del programa se transfiere (salta) a la primera instrucción después de una etiqueta. Una etiqueta se define mediante su nombre (identificador) seguido del carácter dos puntos 😃.

> Goto : El iniciador del llamado "Código Spaguetti"
> aquel código que necesitas a un genio para poder entenderlo.
>
> El **go to** está presente en muchos [códigos spaguetti](https://es.wikipedia.org/wiki/Código_espagueti).

```c
for (size_t i = 0; i < count; i++)
{
      for (size_t i = 0; i < count; i++)
        {
          for (size_t i = 0; i < count; i++)
            {
                if (panic)
                    goto errorHandler;
             }
        }
}
errorHandler: //todo el codigo para componer tu desastre
```

# 5. Cierre
## Continúa practicando

Está comprobado que practicar es una de las formas en que podemos reforzar lo aprendido, por este motivo, encontrarás en [nuestro blog](https://platzi.com/blog/) distintos ejercicios para que nunca pares de programar.

Recuerda estar atento porque periódicamente encontrarás nuevos ejercicios y cuéntanos en los comentarios que te han parecido.

## Ejercicios para practicar

- [Primer nivel: salida de mensajes](https://platzi.com/comunidad/retos-de-programacion-en-cualquier-lenguaje-primer-nivel-salida-de-mensajes/)
- [Segundo nivel: condicionales](https://platzi.com/comunidad/retos-de-programacion-para-cualquier-lenguaje-segundo-nivel-condicionales/)
- [Tercer nivel: manejo de strings](https://platzi.com/comunidad/retos-de-programacion-para-cualquier-lenguaje-tercer-nivel-strings/)
- [Cuarto nivel: matemáticas](https://platzi.com/comunidad/retos-de-programacion-en-cualquier-lenguaje-cuarto-nivel-matematicas/)
- [Quinto nivel: ciclo ‘for’](https://platzi.com/comunidad/retos-de-programacion-en-cualquier-lenguaje-quinto-nivel-ciclo-for/)
- [Sexto nivel: ciclo ‘while’](https://platzi.com/comunidad/retos-de-programacion-en-cualquier-lenguaje-sexto-nivel-ciclo-while-2/)

## Cierre y conclusiones

Nunca pares de Aprende
