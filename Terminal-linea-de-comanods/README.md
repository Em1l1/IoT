<h1>Terminal y Línea de Comandos 2018</h1>

<h3>Alberto Alcocer</h3>

<h1>Tabla de Contenido</h1>

- [1.Terminal y Línea de Comandos](#1terminal-y-línea-de-comandos)
  - [Qué es la terminal y para qué sirve](#qué-es-la-terminal-y-para-qué-sirve)
  - [Árbol de directorios y navegación](#árbol-de-directorios-y-navegación)
    - [Navegar entre directorios](#navegar-entre-directorios)
  - [Manipulación y modificación del árbol de directorios](#manipulación-y-modificación-del-árbol-de-directorios)
  - [Herramientas básicas](#herramientas-básicas)
  - [Variables y entorno](#variables-y-entorno)
  - [Streams](#streams)
  - [Procesos desde la terminal](#procesos-desde-la-terminal)
    - [Ejecutar en 2do plano (background)](#ejecutar-en-2do-plano-background)
    - [Ejecutar varios procesos](#ejecutar-varios-procesos)
    - [Mostrar cantidad de procesos](#mostrar-cantidad-de-procesos)
    - [Tiempo de prendida de la computadora](#tiempo-de-prendida-de-la-computadora)
  - [Power Tools: Comandos poderosos de búsqueda](#power-tools-comandos-poderosos-de-búsqueda)
    - [Buscar cadenas de caracteres](#buscar-cadenas-de-caracteres)
    - [Buscar archivos](#buscar-archivos)
    - [Fecha actual](#fecha-actual)
  - [Power Tools: curl, zip y tar](#power-tools-curl-zip-y-tar)
    - [Emular un navegador](#emular-un-navegador)
  - [Pipe](#pipe)
  - [Crontab: Una herramienta para automatizar tareas desde la terminal](#crontab-una-herramienta-para-automatizar-tareas-desde-la-terminal)
  - [Links](#links)
  - [Usuarios y Permisos](#usuarios-y-permisos)
  - [Qué sigue después de aprender a usar la terminal](#qué-sigue-después-de-aprender-a-usar-la-terminal)

# 1.Terminal y Línea de Comandos

## Qué es la terminal y para qué sirve

Bienvenido al curso de terminal y línea de comandos. En este curso aprenderás una serie de tips y hacks que te van a ayudar a manejar la terminal como si no existiera una interfaz gráfica. La línea de comandos te permite hacer de todo: configuraciones, editar texto, compilar código y utilizar las herramientas que existen dentro de tu sistema operativo.

En el curso estaremos utilizando la terminal de UNIX. Windows cada vez se acerca más a la capacidad de esta terminal, aunque todavía hay diferencias. Todos los comandos que se ejecuten aquí puedes buscarlos con el comando man y ver cuáles son los correspondientes, si estás utilizando Windows.

Aprender a utilizar la línea de comandos te ayuda a ahorrar un montón de tiempo y memoria, pues puedes hacer más sencillo tu trabajo y hacerlo más liviano sin ningún tipo de interfaz gráfica.

En la siguiente clase vamos a ver cómo navegar y conocer nuestro árbol de directorios desde la terminal.

```bash
ubuntu> sudo apt install imagemagick
# Ejecutas la aplicacion
cd /tmp/cats
find -E . -regex '.*(jpg|jpeg)' -exec convert "{}" -colorspace Gray "{}" \;
```

```bash
$ ls /usr/bin | wc -l
```

- [MineiToshio | CursosPlatzi](https://github.com/MineiToshio/CursosPlatzi/tree/master/Introducci%C3%B3n%20a%20Terminal%20y%20L%C3%ADnea%20de%20Comandos#uso-del-disco)

- [linea_de_comandos_Platzi.pdf](https://drive.google.com/file/d/14E5OjiFwT9_9GCJTQdKQNIiSd4qJw_zN/view?usp=sharing)

## Árbol de directorios y navegación

Lo principal que hacemos en la terminal es ejecutar comandos que con el tiempo iremos aprendiendo más de estos.
Con ls puedes listar un directorio, y ls tiene unas banderas que te permiten listar de ciertas formas: con l puedes listar hacia abajo y con lh listar de manera humana.

En UNIX es sencillo tener archivos que no salgan a la vista tan fácilmente. Si empezamos un archivo con un punto ls no lo va a mostrar. Para encontrar esos archivos podemos usar ls -lha, donde a quiere decir all (todos).

Para movernos podemos utilizar el comando cd, que significa change directory (cambiar directorio), que nos permitirá navegar entre archivos.

Recuerda que con … te vas al directorio padre, desde donde estés ubicado, y con ~ te vas al home.

**Tip:** Para limpiar la pantalla puedes hacer command l, o utilizar el comando clear.

### Navegar entre directorios

`ls` nos en lista normal
`ls -l` nos lista hacia abajo

```bash
ls -lt
ls -ltr
ls -lh
ls -lhS
ll -hSr
ls -lh
```
 escribe de forma que sea leible para el humano.

`pwd`: working directory
`cd`: cambiar entre directorios.
`ls -lha` listamente todo el contenido del directorio en una lista hacia abajo de una manera humana. Y si hay un archivo oculto que lo pueda ver.
`cd …` me pasa al nodo padre.
`cd ~`: regreso a mi home.

**ls – List**

listo en directorio actuales

`ls`

`ls -l `en forma de lista larga

`h` es legible humanamente
`l` listado largo

`-a` todos los archivos, incluso los que comienzan con punto (.).

`-A` Lista todos los ficheros en los directorios, excepto los que comienzan con punto . (.) y los que comienzan con doble punto (…).

`-F` indica tipo: / directorio, * ejecutable, @ enlace simbólico.

`-h` indicará el tamaño en KB, MB, etc.

`-l` listado en formato largo (o detallado).

`-S` clasifica los contenidos de los directorios por tamaños, con los ficheros más grandes en primer lugar.

`-r` invierte el orden de la salida.

`-R` Lista recursivamente los subdirectorios encontrados.

`-t` ordenar por fecha de última modificación.

`-u` ordenar por fecha de último acceso.

`-x` presenta los ficheros por columnas.

`-i` precede la salida con el número de i-node


## Manipulación y modificación del árbol de directorios

Ya vimos cómo navegar dentro del árbol de directorios. En esta clase vamos a ver cómo crearlos y modificarlos.

  - `mkdir:` crea un directorio
  - `touch:` crea un archivo. Si no existe el archivo lo va a crear, y si existe le cambia la fecha de modificación
  - `mv:` mueve un archivo, te ayuda a modificarlo
  - `rm:` elimina archivos o links, no funciona para eliminar un directorio, para esto necesitas un poco más
  - `rm -rf:` elimina un directorio recursivamente
  - `man:` es el manual de la terminal, puedes utilizarlo cuando tu quieras para entender qué hace un comando y sus banderas. Con espacio pasas una página, - con b te regresas una página y con q sales del manual.
  - `cp:` copia un archivo a otros directorios
  - `pushd y popd:` te permiten navegar entre dos directorios fácilmente.

**pushd y popd**

moverme rápido a un directorio especifico

pushd [directorio a guardar]
popd

- popd de me regresa a directorio guardado
ej.

```bash
pushd .
pushd /home/user/Downloads
popd
```

Pushd: Nos permite crear una listado con directorios, para luego poder navegar entre ellos de manera facil y rápida.

```bash
pushd Directorio1
pushd Directorio2
pushd Directorio3
```

Luego para ver la lista creada y numerada usaremos el comando `dirs -v`

Para acceder a uno de los directorios de la lista, se debe usar pushd y signo - seguido del Número de la lista. Ejemplo: `pushd -2`, en este caso nos llevará al Directorio2.

> La numeración de la lista avanza/cámbia, en cada acceso con pushd, por eso siempre debemos usar antes dirs -v para saber con exactitud al directorio al que queremos acceder).
**Popd:** Nos permite eliminar un directorio de la lista. popd -NúmeroLista ejemplo: `popd -2`. o para eliminar toda la lista podemos usar `dirs -c`.

## Herramientas básicas

En esta clase vamos a ver las herramientas que más se utilizan en la línea de comandos.

  - `more:` te da las primeras líneas de lo que hay en el archivo. Para ver la siguiente página hacemos lo mismo que con el man, utilizamos espacio para
  - `cat:` imprime todo el contenido de un archivo en pantalla.
  - `tail:` te muestra las últimas 10 líneas de un archivo. Puedes agregarle un número con el - y pedir más que 10 líneas.

Ya no solo navegamos en el árbol de nodos sino que podemos modificar y ver qué hay dentro de los archivos. En la siguiente clase veremos temas más técnicos como variables y algunas formas de utilizar de forma más cómoda la terminal.

## Variables y entorno

Cada vez que abrimos la terminal en realidad se está ejecutando un programa que se llama .bash_profile que es una serie de comandos que da de alta unas variables.

Todos los ejecutables tienen una serie de permisos. Cada vez que tengo un nuevo programa tengo que asegurarme

  - `alias:` ejecuta una serie de comandos que le pasas antes, funciona para crear variables.

## Streams

El diagrama que ves en pantalla consiste en un input y en un output. Nosotros pasamos unos datos que son procesados y que luego se devuelven de alguna forma. Cuando nosotros enviamos datos, eso es STDIN (standard input), después de eso se ejecuta un script y finalmente hay dos opciones de respuesta STDOUT (standard output) o STDERR (standard error). Es importante entender esto, sobre todo porque es fundamental saber cuándo estás teniendo un error dentro de un proceso.

En el ejercicio verás cómo corre un programa en php que identifica cuáles números son y no son múltiplos del número que ingresas. Ahí verás dos tipos de salida: STDOUT que arrojará los múltiplos y STDERR que arrojará los números que no son múltiplos del número que ingreses. Cada salida se podrá enviar a un archivo diferente y se podrá concatenar con las respuestas si ingresas un número nuevo. Además veremos cómo enviar los dos tipos de salida al mismo lugar.

Ejecutar el archivo `.php`

![](https://i.ibb.co/SvH3dHf/terminal.jpg)

Los streams son una forma de enviar datos a un comando y recibir un output de salida.

- `STDIN Standard Input.` Parametro de entrada.
- `STDOUT Standard Output.` Es la salida por defecto.
- `STDERR Standard Error.` Es la salida en caso suceda un error.

```php
<?php 
echo "número: ";
$d = trim(fread(STDIN, 100));
$i = 0;
while(true) {
  if(++$i % $d == 0) {
    fwrite(STDOUT, sprintf("El %d es múltiplo de %d.\n", $i, $d));
  } else {
    fwrite(STDERR,
    sprintf("Error, El %d NO es múltiplo de %d \n", $i, $d));
  }
  sleep(1);
}
?>
```

```bash
php 1-streams.php 1> salida 2>error
```

Se guarda la salida en un archivo salida y el error en un archivo error
Si se usa `>>` en vez de `>`, entonces el archivo se concatena en vez de sobreescribirse

```bash
php 1-streams.php 1> salida 2>&1
```

El error y el output aparecen en el mismo archivo

`ejecutable > archivo`: guarda las líneas en el archivo. En caso de existir previamente el archivo, borra todo el contenido y escribe las nuevas líneas.

`ejecutable 1> archivoA 2> archivoB` : el STDOUT se guarda en archivoA y el STDERR en archivoB

`ejecutable >> archivo` : concatena el Stream de salida con el contenido de archivo

`ejecutable > archivo 2>&1` : guarda el STDERR donde sea que esté guardando el STDOUT

`ejecutable < archivo` : envía el archivo al ejecutable.

## Procesos desde la terminal

Cada vez que ejecutamos algo en nuestra computadora es un proceso que está registrado de alguna forma. El orden en que esto se ejecuta y la cercanía del procesador son muy importantes para las prioridades que se le va a dar a dicho proceso.

En esta clase vas a aprender a revisar, manipular y matar los procesos que corren dentro de tu computadora.

```bash
top
```

Ver todos los procesos que están corriendo en la computadora de manera interactiva. Es decir, la lista de procesos se va actualizando.

```bash
ps -wA
```

Muestra todos los procesos que se están ejecutando y desde donde vienen. Este comando no es interactivo.

Matar procesos

```bash
kill -9 [proceso id]
```

Mata un proceso.

### Ejecutar en 2do plano (background)

`&` espacio y amberson para dejar un proceso en background. Esto quiere decir que el usuario va a seguir teniendo el control de la terminal.

```bash
$ npm start &
output: [1] 23954 (Id del proceso)
```

### Ejecutar varios procesos
`;` con un punto y coma puedo separar procesos para que se ejecuten en una misma linea. El segundo proceso se ejecuta cuando termine el anterior.

```shell
$ ls; echo "hola"
```

### Mostrar cantidad de procesos

```shell
ps -wA | wc -l
```

- Muestra la cantidad de procesos que se están ejecutando actualmente.

### Tiempo de prendida de la computadora

```shell
uptime
```

- Muestra cuánto tiempo lleva prendida la computadora
- Cuántos usuarios se han logueado
- La carga promedio

**Para ver los procesos podemos utilizar:**
  - top
  - ps
  - pstree

## Power Tools: Comandos poderosos de búsqueda

Hay muchas herramientas que pueden hacer cosas muy diferentes dentro de la terminal, y cada una de estas tiene también un montón de opciones. En esta clase vamos a ver algunas de las más poderosas:

`grep:` nos ayuda a encontrar cadenas de caracteres dentro de todos los archivos de la ruta que le demos, con expresiones regulares.
`find:` busca, dentro del directorio que le digamos

### Buscar cadenas de caracteres

```shell
grep -r [ruta] -e [expresion]
```

nos ayuda a encontrar cadenas de caracteres dentro de todos los archivos de la ruta que le demos, con expresiones regulares.

`-r`: que sea recursivo
`-n`: numero de linea donde se encuentra la palabra en el archivo
`-e`: expresion regular
`-i`: no importa si es mayuscula o minuscula

### Buscar archivos

`find [ruta] -name [nombre]` busca en base al nombre y la metadata dentro del directorio que le digamos.

`-name`: el nombre del archivo (*.js devuelve todos los archivos que terminan con .js)
`-type`: el tipo

### Fecha actual

```shell
date
```

Muestra la fecha actual.

Tiempo del procesador
```shell
time
```

Muestra tiempo del procesador

Tiempo de ejecución de un proceso

```shell
date; [proceso]; date
```

Con este comando se puede evaluar cuánto se demora en ejecutar un proceso

![](https://i.ibb.co/K6brkXM/power-Tools.webp)

## Power Tools: curl, zip y tar

Ya sabemos cómo buscar rápidamente desde la terminal, ahora vamos a continuar con tres comandos muy útiles que nos ayudan a trabajar en conjunto.

  - `curl:` emula un navegador. No es un browser como tal, hay uno para terminal pero este solo emula los requests (peticiones) y los trae.
  - `zip:` agrega o reemplaza las entradas de un archivo zip de la lista, que puede incluir el nombre especial para comprimir la entrada.
  - `tar:` es un comando similar a zip, junta varios archivos en uno solo sin comprimirlos. Después se le dicta un algoritmo de compresión, que es zip.

- [lista-de-comandos-mas-usados.pdf](https://drive.google.com/file/d/1-xJmv041jQmF2M97Kqa_8fdIXrwngd0i/view?usp=sharing)

### Emular un navegador

```shell
curl [url] emula un navegador.
```

- `[nombre]` descarga el archivo con el nombre que le has dado.
- `-o [nombre]` igual que el anterior
Comprimir archivos

Agrega o reemplaza las entradas de un archivo zip de la lista, que puede incluir el nombre especial para comprimir la entrada.

```shell
zip [nombre.zip] [archivo a comprimir]
```

descomprime un .zip

```bash
upzip [archivo]
``` 

`-vl` no descomprime sino que ve lo que hay adentro
tar es un comando similar a zip, junta varios archivos en uno solo sin comprimirlos. Después se le dicta un algoritmo de compresión, que es zip.

Junta y comprime

```shell
tar cfz [archivo.tar.gz] # *csv archivos a descomprimir
```

Descomprime

```shell
tar xfz [archivo .tar.gz]
``` 

## Pipe

Este operador se llama pipe y se escribe con la barra vertical |.
Ayuda a anidar operaciones.

- `Pipe:` Nos permite concatenar comandos
- `ls -l | wc -l:` cuantas lineas tiene este
- `cat [peliculas.csv] | wc -l:` nos indica cuantas lineas tiene este archivo.
- `cat [peliculas.csv] | wc -l | grep [Thriller] wc -l :` nos indica cuantas lineas tiene del parametro que estamos buscando.
- `cat movies.dat | grep Thriller | awk -F"::" '{printf("%s\n", $3)}’`: nos imprime las categorias que contenga Thriller
- `cat movies.dat | grep Thriller | awk -F"::" ‘{printf("%s\n", $3)}’ | grep -v Comedy` : `grep -v` evitamos que no nos imprima el parametro que le mandamos.

## Crontab: Una herramienta para automatizar tareas desde la terminal

Una de las herramientas más potentes de los sistemas UNIX, que nos permite programar la ejecución de diferentes scripts. Con crontab podemos agendar todo lo que necesitemos para facilitar nuestro trabajo y automatizar tareas.
`contrab -l` despliega el crontab que tenemos instalado. Cada una de las primeras 5 columnas que tenemos al correr este comando especifica en qué momento exacto queremos que se ejecute la tarea que vamos a definir en la sexta columna.

```bash
0   16  *   *   *    $Home/src/cronjobs/daily.sh
0   *   *   *   *    $Home/src/cronjobs/hourly.sh
*   *   *   *   *    $Home/src/cronjobs/minutely.sh
```

Columna 1: minuto 0-59
Columna 2: hora 0-23
Columna 3: día del mes 1-31
Columna 4: mes 1-12
Columna 5: día de la semana 0-7 (donde 0 y 7 equivalen a domingo)
Columna 6: script o comando que queremos que se ejecute

  - `1` Se ejecuta en el minuto 1
  - `1,10,18` Se ejecuta en el minuto 1, 10 y 18
  - `*/5` Se ejecuta cada 5 minutos
  - `1-10` Se ejecuta los primeros 10 minutos de cada hora
  - `*` Se ejecuta cada minuto

`crontab -e:` edita las tareas que tengo agendadas. Con la letra i podemos escribir.

Recuerda que el crontab se ejecuta si y solo si la computadora está encendida."

crontab permite programar la ejecución de scripts.

- `-l` muestra la lista de crontab
- `-e` editar la tabla crontab. Con esto se pueden agregar más scripts

**Ejemplo**

Ejecuta `script.sh`

```bash
0 3 * * 1 script.sh
```

1. En el minuto cero
2. a las 3 am
3. todos los días del mes
4. todos los meses
5. solo si es lunes
6. script y ejecutar.

![](https://i.ibb.co/THfDMXg/contrab.jpg)

## Links

Hay un problema muy común: a veces nos estamos quedando sin disco duro y no sabemos qué es lo que nos está quitando tanto espacio. Con el comando du (disk usage) vamos a saber, a partir del lugar donde estemos, cuánto espacio en disco ocupa cada nodo.
Para ahorrar disco duro podemos crear links simbólicos o alias, con `ln -s`.

`du` muestra la cantidad de espacio usado por los archivos en un directorio.

  - `-h` muestra el output de una manera que se pueda leer mejor.
  - `-d [numero]` nivel de profundidad. Cuántos niveles baja de carpeta.
Links

```bash
ln -s [ruta del directorio] [alias]
``` 
Crea un alias que apunta a un directorio.

`-s link simbolico`. Si se usa este parámetro con rm solo se elimina el acceso directo.

```bash
ls -s C:/carpeta alias_file 
cd alias_file
```

La terminal está interpretando `cd C:/carpeta`.

## Usuarios y Permisos

En esta clase vamos a entender los diferentes permisos que puede tener cada tipo de usuario dentro de una computadora. La administración de usuarios y permisos cambia mucho entre diferentes sistemas operativos, pero lo que veremos en clase es igual para todos.

whoami: te dice cuál es el usuario que está operando en ese momento.

Tipos de permisos:

  - `r–`: permiso de lectura
  - `rw-`: permiso de lectura y escritura
  - `rwx`: permiso de lectura, escritura y ejecución

Los permisos tiene valores numéricos: r = 4, w = 2, x = 1. Entonces para otorgar permisos debemos darle un número que sea la suma de cada una de estas tres letras.

Recuerda que cuando haces ls -l, cuando aparezca el listado, podrás ver al comienzo de cada línea cuáles son los permisos. En primer lugar aparecen los permisos del owner (tú), después los del grupo, y finalmente los de todo el mundo.

Permisos -> numero_de_representacióm
- `— ->` 0
- `–x ->` 1
- `-w- ->` 2
- `-wx ->` 3
- `r-- ->` 4
- `r-x ->` 5
- `rw- ->` 6
- `rwx ->` 7
- `r:` permiso de lectura
- `w:` permiso de escritura
- `x:` permiso de ejecucion

```bash
Los permisos se pueden separar de la siguiente manera:
F/---/---/---
-: dir/link/file
---: permisos del owner (yo)
---: permisos del gropo
---: permisos de todo el mundo
```

![](https://i.ibb.co/p004k3g/permision.jpg)

![](https://i.ibb.co/XZDDfyf/permision1.jpg)

Retos:
¿Cuáles son los usuarios que alguna vez han sido dados de alta en tu sistema?
Crea un usuario para ejecutar todas tus pruebas de código.

## Qué sigue después de aprender a usar la terminal

Si crees que debería existir una herramienta que automatice u optimice algún proceso dentro de tu computadora, probablemente lo puedes hacer desde la terminal. El siguiente paso es unir todos estos conceptos con bash scripting, un lenguaje de programación que permite unir todas las power tools con condicionales e iteradores para conseguir resultados mucho más potentes.

No pares de Aprender !!!