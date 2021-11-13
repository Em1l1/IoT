<h1>Fundamentos de Desarrollo de Hardware con Arduino</h1>

<h3>Ricardo Celis</h3>


<h1>Tabla de Contenido</h1>

- [1. Bienvenida al curso](#1-bienvenida-al-curso)
  - [Enlaces del taller IoT](#enlaces-del-taller-iot)
  - [Bienvenidos al curso](#bienvenidos-al-curso)
- [2. Introducción al hardware libre](#2-introducción-al-hardware-libre)
  - [¿Qué es Arduino y qué placas hay?](#qué-es-arduino-y-qué-placas-hay)
  - [¿Cómo se desarrolla el Hardware?](#cómo-se-desarrolla-el-hardware)
  - [¿Cuál es el software para diseño mecánico?](#cuál-es-el-software-para-diseño-mecánico)
  - [Elección del software a utilizar](#elección-del-software-a-utilizar)
  - [Limitaciones de Arduino y qué es el hardware libre](#limitaciones-de-arduino-y-qué-es-el-hardware-libre)
  - [Reto 1: Para un proyecto de IoT, ¿Cuál tarjeta Arduino utilizarías?](#reto-1-para-un-proyecto-de-iot-cuál-tarjeta-arduino-utilizarías)
  - [¿Cómo funciona el Curso de Desarrollo de Hardware con Arduino?](#cómo-funciona-el-curso-de-desarrollo-de-hardware-con-arduino)
  - [Lista de Materiales o Componentes a Utilizar](#lista-de-materiales-o-componentes-a-utilizar)
- [3. Sensores, Actuadores y Procesadores](#3-sensores-actuadores-y-procesadores)
  - [Sensores, actuadores y procesadores](#sensores-actuadores-y-procesadores)
  - [Diferentes tipos de sensores según la salida](#diferentes-tipos-de-sensores-según-la-salida)
  - [Diferentes tipos de sensores según la aplicación](#diferentes-tipos-de-sensores-según-la-aplicación)
  - [Diferentes tipos de actuadores](#diferentes-tipos-de-actuadores)
- [4. Introducción a la electrónica](#4-introducción-a-la-electrónica)
  - [Diferencias entre electricidad y electrónica](#diferencias-entre-electricidad-y-electrónica)
  - [Tipo componentes electrónicos](#tipo-componentes-electrónicos)
  - [Más tipos de componentes electrónicos](#más-tipos-de-componentes-electrónicos)
  - [Limitando la corriente para evitar quemar un led](#limitando-la-corriente-para-evitar-quemar-un-led)
- [5. Manos a la obra](#5-manos-a-la-obra)
  - [Puertos de un arduino y sus funciones](#puertos-de-un-arduino-y-sus-funciones)
  - [Qué es un protoboard](#qué-es-un-protoboard)
  - [Estructura general de un programa en Arduino y hello world con un LED](#estructura-general-de-un-programa-en-arduino-y-hello-world-con-un-led)
  - [Variables y Constantes Globales](#variables-y-constantes-globales)
  - [Manejo de librerías y funciones](#manejo-de-librerías-y-funciones)
  - [Manejo de valores analógicos: uso del potenciómetro](#manejo-de-valores-analógicos-uso-del-potenciómetro)
  - [Uso del monitor serial](#uso-del-monitor-serial)
  - [PWM y señales analógicas](#pwm-y-señales-analógicas)
- [Un control de color RGB e intensidad lumínica para una lampara de mesa](#un-control-de-color-rgb-e-intensidad-lumínica-para-una-lampara-de-mesa)
  - [Uso de push buttons](#uso-de-push-buttons)
  - [Monitor de temperatura con Arduino (uso de LM35 y un lcd 16x2)](#monitor-de-temperatura-con-arduino-uso-de-lm35-y-un-lcd-16x2)
  - [Continuando con el monitor de temperatura con Arduino](#continuando-con-el-monitor-de-temperatura-con-arduino)
  - [Finalizando con el monitor de temperatura con Arduino](#finalizando-con-el-monitor-de-temperatura-con-arduino)
  - [Reto: Crea tu semáforo con Arduino](#reto-crea-tu-semáforo-con-arduino)
- [6. Automatización de procesos](#6-automatización-de-procesos)
  - [Cómo generar movimiento y uso de motores](#cómo-generar-movimiento-y-uso-de-motores)
  - [Cómo generar movimiento y servomotores](#cómo-generar-movimiento-y-servomotores)
  - [Agregando un potenciométro para controlar la posición del Servomotor](#agregando-un-potenciométro-para-controlar-la-posición-del-servomotor)
  - [Robot evasor de obstáculos](#robot-evasor-de-obstáculos)
  - [Continuando con el Robot evasor de obstáculos](#continuando-con-el-robot-evasor-de-obstáculos)
  - [Terminando con el Robot evasor de obstáculos](#terminando-con-el-robot-evasor-de-obstáculos)

# 1. Bienvenida al curso
## Enlaces del taller IoT

https://github.com/me-no-dev/ESPAsyncWebServer/archive/master.zip

https://github.com/me-no-dev/ESPAsyncTCP

http://arduino.esp8266.com/stable/package_esp8266com_index.json

## Bienvenidos al curso

Este curso está enfocado en aprender las bases para construir tus propios proyectos.

Además, vamos a aprender cómo ejecutar proyectos que nos permitan aprender las bases del desarrollo de hardware, lo que nos permitirá aprender cómo desarrollar con IOT o Internet of Things. Recuerda que debes haber tomado el curso de Algoritmos con C para que puedas entender este curso.

# 2. Introducción al hardware libre
## ¿Qué es Arduino y qué placas hay?

Arduino es una tarjeta donde podemos realizar prototipos o proyectos interactivos. Funciona con un **micro-controlador** *Atmel* y sus objetivos son hacer lo más fácil posible el manejo de entrada y salida de datos con **pines**, estandarizar el **Layout** *(la disposición de todos los elementos de la tarjeta)* y extender sus funcionalidades con el uso de **expansiones** (Ethernet, WIFI, conexión a motores, etc).

Arduino también cuenta con su propio **IDE** adaptado a *wiring* (un framework para el manejo de micro-controladores).

Un **micro-controlador** es una especie de computadora con objetivos mucho más específicos, se encargan de procesar toda la información que ingresa a Arduino.

Cuenta con CPU, Memoria *(EEPROM y SRAM)* reloj de sistema y periféricos *(entrada y salida de datos a través de pines)*.

Los micro-controladores están en todas partes, se utilizan en lavadoras, pantallas inteligentes, maquinas de correr, cámaras, neveras, etc.

Existen otras placas como: *Arduino Leonardo*, *Arduino 101*, *Arduino Mega*, *Arduino 0*, entre otros.

rduino: Es la tarjeta mas utilizada en el desarrollo de prototipos. Es una tarjeta que nos permite llevar nuestras ideas a proyectos interactivos de hardware.
Micro controlador: Es una especia de computadora.
Características :
***Procesamiento Central o CPU:** Se encargar de resolver las instrucciones que le llegan mediante lenguaje ensanblandor por ejemplo sumar.
**MEMORIA:** EEPROM es un tipo de memoria permanente pero es un lenta. SRAM es la memoria ram que ocupa los microcontroladores
**RELOJ DEL SISTEMA:** es la frecuencia con la que el CPU resuelve [instrucciones.De](http://instrucciones.de/) igual forma el microcontrolador tiene un reloj que le da la orden de cada cuanto tiempo tiene que volver a leer una nueva instrucciones , resolverla y dar la salida.
**PERIFÉRICOS** Pines que funcionan como entradas y salidas.

## ¿Cómo se desarrolla el Hardware?

Antes de construir nuestros prototipos, vamos a estudiar todo el proceso que hay detrás de la fabricación y distribución de hardware.

1. **Objetivos**: En el caso del Arduino, nuestro objetivo es claro: una tarjeta con la cual podamos crear prototipos de forma muy fácil y rápida.
2. **Diseño**: No solo nos ocupamos de dibujar, debemos preparar todos los elementos electrónicos y mecánicos para funcionar en conjunto. No queremos tener ningún error en la etapa de fabricación.
3. **Pruebas y Manufactura**: Una vez tenemos nuestro diseño, podemos hacer un prototipo. Este es una versión física de nuestros diseños con el fin de encontrar nuevos errores que no consideramos en la etapa de diseño.

En la etapa de manufactura debes tener en cuenta los siguientes elementos:

- **Elección de Componentes y MSRP** *(precio sugerido para fabricantes)*
- **Proveedores** *(DigiKey, Newark o element14 y Mouser Electronics)*
- **Diseño Electrónico y Mecánico**: Tus componentes deben funcionar correctamente entre sí para conseguir un desarrollo optimo. Para la etapa de diseño puedes usar **Kicad** una herramienta desarrollada y utilizada por el CERN.

## ¿Cuál es el software para diseño mecánico?

El diseño mecánico es la parte del desarrollo de hardware donde, ademas de diseñar las dimensiones del producto, vamos a definir las características y materiales que debemos utilizar en nuestros dispositivos.

Un celular por ejemplo, ademas de caber en nuestras manos, también debe ser liviano, resistente y ergonómico. El diseño mecánico también se encarga de los *actuadores* de nuestros dispositivos: sistemas con motores, alarmas, sonidos, soportes, estructuras, etc.

**Solid Works** es una de las herramientas más populares en la industria, pero existen otras alternativas con enfoques diferentes como **AutoDesk Inventor** o **AutoCat**.

En este punto tenemos claras las dimensiones de nuestro circuito electrónico.
Para realizar el diseño mecánico se implementa software como SolidWorks.

**Software para el diseño mecánico: SolidWorks**

- Uno de los Software más importantes del mundo en cuanto a la preparación del diseño mecánico de proyectos electrónicos.
- Desarrollado por una compañía francesa llamada Dassault Systemes. Los cuales comenzaron desarrollando software para el diseño de aviones.
- Katia es otro proyecto de Dassault Systemes que permite llevar el flujo de todo el proceso como la logistica de fabricacion, componentes y materiales.

**Diseño mecánico**

- Esta parte es realizada por un ingeniero mecánico que diseñará y preparará las dimensiones y usabilidad del producto.

- Tambien toma en consideración el diseño de actuadores, combinacion de actuadores, diseño de estructuras e inclusión de sensores en posiciones correctas.

- El diseño mecánico debe llevar medidas precisas de las dimensiones de cada parte. Esto permite parametrizar el diseño haciendolo más preciso que el diseño artesanal.

- El diseño mecánico debe realizarse tomando en consideración dos aspectos fundamentales:

– Los requisitos de funcionamiento. Es decir, todo lo que necesita el dispositivo para funcionar y cumplir con todos los requisitos determinados en la definición de los objetivos del producto.

– El UX del producto. Al final deben cumplirse los objetivos del producto, pero es primordial que la experiencia del usuario sea óptima con el mismo. Para esto es necesario permitirle al dispositivo hacer todo lo que se espera que haga de una manera que le permita al usuario utilizarlo sin mayores complicaciones, de forma intuitiva y práctica. Esto es todo un reto.

**Opciones de Software**

- SolidWorks

- FreeCad

- Maya

- 3D Max

- Auto Desk Inventor

[![img](https://www.google.com/s2/favicons?domain=https://www.freecadweb.org/images/favicon.ico)FreeCAD: An open-source parametric 3D CAD modeler](https://www.freecadweb.org/)

[SOLIDWORKS Products - Google AdWords | SOLIDWORKS](http://www.solidworks.es/sw/products/solidworks-products-adwords.htm?mktid=8113&gclid=EAIaIQobChMI1I72jeeS2gIVB4RpCh1ywA5gEAAYAiAAEgIXbPD_BwE)

[![img](https://www.google.com/s2/favicons?domain=https://s3-us-west-1.amazonaws.com/123d-circuits-assets/favicon.ico)Bring ideas to life with free online Arduino simulator and PCB apps | Autodesk Circuits](https://circuits.io/)

## Elección del software a utilizar

Ahora hablemos de el software que podemos utilizar. Si trabajas creando celulares, solo tenemos dos opciones Apple o Android. Sin embargo, para cualquier otro dispositivo existen diversas opciones como Qt, quienes están enfocados en generar interfaces. La manufactura, por otro lado es el desarrollo del montaje del dispositivo que queremos crear.

**Eleccion del software a utilizar**

- En el mundo de los sistemas embebidos existen multiples opciones de Software para operar el Hardware.
  	

**Por ejemplo:**
– Los iPhone usan iOS
– Los telefonos no Apple utilizan Android
– En algún momento existieron Nokia con Symbian

**Sistemas embebidos**

- Se refiere al software que permite operar los dispositivos electrónicos y viene incluido con los dispositivos.

- Un ejemplo de esto es el CMOS, que ya viene incluido en la placa base de los computadores.

- Algunos sistemas de Hardware menos complejos tambien funcionan gracias al software embebido que les permite hacer uso de una manera particular del Hardware que poseen.

**Sistemas embebidos en Arduino**

- En Arduino por ejemplo, podemos hacer encender un led cada segundo.

- Para lograr esto debemos realizar el diseño de la electrónica que necesitamos para conseguir el objetivo.

- Luego debemos conseguir los componentes.

- Después es necesario realizar el montaje del circuito en un prototipo.

- Pero para lograr encenderlo a través del Arduino es necesario crear un programa que le permita al procesador de la placa enviar los impulsos electricos necesarios para completar la tarea.

- Esta programación se puede desarrollar en un software llamado Sketch, que finalmente permite instalar el software desarrollado en la placa Arduino, quedando este instalado de manera embebida.

**Frameworks para el diseño y desarrollo de interfaces para software embebido**

– QT por The QT Company.
– Permite crear interfaces con C++.
– Tiene una fuerte curva de aprendizaje.
– Es altamente útil aprender a utilizar este framework
– Las iterfaces son gráficas y llamativas.

**La manofactura**

- Es el proceso de montaje del prototipo basado en los diseños electronico y mecánico.

[![img](https://www.google.com/s2/favicons?domain=https://www.qt.io/hubfs/2016_Qt_Logo/qt_logo_green_rgb_16x16.png?t=1522307701468)Qt | Cross-platform software development for embedded & desktop](https://www.qt.io/)

## Limitaciones de Arduino y qué es el hardware libre

Arduino es un proyecto que funciona como hardware libre, lo podemos usar siempre y cuando no copiemos la marca, ni el color. Debemos siempre respetar las patentes que tenemos en nuestro desarrollo del hardware.

**El hardware Libre**

- Aquellos dispositivos en los que sus esquematicos (Diseños electrónicos y mecánicos) son de acceso libre, abierto y en los que se permite su uso para la creación de nuevos dispositivos usando estos como base.

- El caso Arduino: Pueden desarrollarse placas usando las esquemáticas de Arduino siempre que no se utilice el nombre Arduino para su comercialización.

**Las limitaciones de las Arduino**

- Su tamaño. Esta es una limitación evidente para la comercialización de proyectos a gran escala. Debido a que los proyectos de tecnología electrónica buscan ser lo más eficientes posibles y las tarjetas Arduino tienen un uso desmedido del espacio, esto con fines claros, por ejemplo facilitar el prototipado.

**La finalidad de Arduino**

- Debido a su tamaño es especial para realizar prototipos.

- Permite trabajar con agilidad y facilidad.

- Es útil para la experimentación y el estudio de la electrónica.

## Reto 1: Para un proyecto de IoT, ¿Cuál tarjeta Arduino utilizarías?

arjetas Arduino, imagínate que vas a implementar un dispositivo que deben enviar la información a un servidor desde un sistema con sensores de movimiento que instalarás en tu departamento, casa u oficina.

¿Qué tarjeta de Arduino utilizarías para este proyecto y porqué?

## ¿Cómo funciona el Curso de Desarrollo de Hardware con Arduino?

¡Bienvenido al primer curso de Hardware en Platzi! En este curso aprenderás de forma enfocada y práctica todo lo necesario para poder **darle vida a tus ideas** comenzando con los fundamentos necesarios, no importa si nunca has utilizado un arduino, a lo largo del curso aprenderás cómo utilizar sensores, procesar la información y generar movimiento, comprendiendo con esto el ciclo completo para comenzar a crear tus sistemas autónomos.

Ya has aprendido sobre el proceso de desarrollo de Hardware, ahora prepárate para continuar aprendiendo el proceso completo de automatización, y preparate para lograr crear el proyecto que más busques.

## Cómo funciona el curso de Fundamentos de Desarrollo de Hardware con Arduino

Los siguientes conceptos de este curso son prácticos, desde crear tu primer hola mundo con Arduino hasta crear tu primer robot móvil, aprenderemos los fundamentos divididos en 4 áreas principales:

1.- Sensores, Actuadores y Procesadores, los componentes claves de cualquier sistema mecatrónico.
2.- Introducción a la electrónica.
3.- Manos a la obra.
4.- Bienvenido a la automatización de procesos.

## ¡MAKE!

Queremos que Platzi se convierta en una comunidad de #Makers, creadores de soluciones a problemas reales utilizando el hardware, aprendiendo, compartiendo y creciendo juntos, quizás de aquí saldrá la siguiente StartUp de Hardware como BlueSmart, ¿por qué no lo intentas?

Para los proyectos propios del curso vas a necesitar utilizar materiales como led’s, botones, buzzers, y más, algunos puedes ver cómo son creados en video y otros los encontrarás a través de guías en texto, perfectas para que puedas seguir paso a paso la creación de tu sistema, además, constantemente estaré subiendo nuevos materiales escritos con los que crearemos nuevos y emocionantes proyectos, y quizás te preguntes ¿por qué no están aún? Bueno, porque la comunidad manda, veamos qué otros sensores quiéres aprender, qué te está faltando para tu siguiente proyecto, y hagámoslo juntos, yo hago la guía y tu continúas con tu proyecto, el punto aquí es que nada te detenga.

**¿Qué esperas? ¡Sigue aprendiendo!**

## Lista de Materiales o Componentes a Utilizar

En este curso realizamos diversos proyectos, de estos, tú debes elegir cuál te interesa armar idealmente debes armar todos incluídos los desafíos, pero no necesariamente debes adquirir todos los componentes al tiempo, en este material de texto te dejo la lista de materiales por proyecto y la lista de materiales general del curso.

Piezas generales:

- Protoboard o tablilla de prototipos
- Arduino UNO o equivalente open hardware con BootLoader.
- Juego de cables con terminales macho - macho y macho - hembra o cable de red “UTP”
- Leds 10 pzs. (El color o colores que tú prefieras, pueden ser RGB )
- Push Buttons o botón pulsador 2 piezas, en el curso utilizamos normalmente abiertos (que al presionar permiten el flujo porque cierran el circuito)
- 2 Potenciometros de 10 Kilo Ohms
- Set de resistencias surtidas (que no cueste más de 10 USD o serán demasiadas o muy caras)
  en caso de que no encuentres compra 20 de 10 Kilo Ohms y 20 de 330 Ohms.
- LCD 16x2 con backlight o retroiluminación
- LM35
- DHT11
- Servomotor analógico, depende de tu proyecto comprar uno mini o uno normal, el mini tiene muy poca fuerza.
- Leds para el proyecto del semáforo: 5 Rojos, 5 amarillos, 5 verdes.

Materiales para el proyecto final:
Caja de engranes doble tamiya: https://www.pololu.com/product/114
llantas tamiya https://www.pololu.com/product/62
(esta es la que yo utilizo, la puedes cambiar por motorreductores plásticos como los que te muestro a continuación)

**Motorreductor de corriente directa**

![Motorreductor con llanta popular](https://http2.mlstatic.com/D_NQ_NP_577201-MLM20290282107_042015-F.jpg)

Para la potencia utilizamos el Puente H "L293D"
Para el sensado utilizamos un [Pololu Carrier with Sharp GP2Y0D810Z0F Digital Distance Sensor 10cm](https://www.pololu.com/product/1134)
En caso que lo desees, lo puedes cambiar por un sensor ultrasónico HC-SR04

Quedo pendiente para resolver cualquier duda al momento de comprar tus componentes, ¡no dejes de aprender!

# 3. Sensores, Actuadores y Procesadores
## Sensores, actuadores y procesadores

En esta clase vamos a aprender sobre los sensores, los actuadores y los procesadores. Un sensor es un módulo o subsistema que tiene un propósito principal, es decir, identificar eventos en el ambiente.

A través de estos vamos a nutrir con información los procesadores, lo que tomarán la información y la procesaran. Ahora bien, los actuadores son los que complementan el flujo de automatización, los que pueden ser motores que generen distintos tipos de movimiento.

**Sensores**: Un sensor es un dispositivo, módulo o subsistema cuyo propósito principal es detectar eventos o cambios en el ambiente y enviar información a otros electrónicos, usualmente a una computadora o un procesador.
**Actuadores**: Complementan el flujo de automatización, pueden ser motores que generen distintos tipos de movimiento.
**Procesadores**: Tomarán la información de los sensores y realizaran los procesos necesarios para el correcto funcionamiento de nuestro sistema.

- Los sensores detectan cambios en el ambiente y los envían a otros electrónicos(procesador)
- Los actuadores son los elementos que utilizaremos para dar movimiento a nuestro sistema

## Diferentes tipos de sensores según la salida

Vamos a familiarizarnos con los sensores que están disponibles para que utilicemos los que son más adecuados para nuestros proyectos. Los sensores son dispositivos que traducen la información que reciben a través de pulsos eléctricos. Para tus proyectos podrás necesitar sensores de nivel, de temperatura, etc.

Hay sensores de tres tipos:

- Analógicos
- Digitales
- Inteligentes

![sensores.jpg](https://static.platzi.com/media/public/uploads/sensores_e9fa3e50-b1ba-4091-b2a4-9527de90db99.jpg)

**Sensores**
Dispositivos que traducen los eventos del mundo real en impulsos electricos que pueden ser interpretados por un sistema electrónico a manera de entrada.

**Flujo de automatización**

- Van en función del tipo de variable a nivel.

- Existen muchas variaciones de sensores.

- Las entradas ingresan a partir del puerto ADC Analogic Digital Conversor. Es este puerto donde se conectan los sensores permitiendo al micro controlador transformar la entrada analógica a digital para ser procesada por nuestro programa.

**Sensores según su tipo de señal**

- Analógicos

- Digitales

- Inteligentes

**Analógicos**

- Detectan un fenómeno del mundo real y lo interpreta a través de una señal analógica.

- Los ambios son graduales, el voltaje va variando según la percepción del sensor ante el comportamiento del fenómeno.

**Digitales**

- Tienen una percepción binaria.

**Inteligentes**

- Pueden procesar la señal que puede ser usada directamente.

- Son populares para IoT.

- Tienen capacidad de conexion directa.

## Diferentes tipos de sensores según la aplicación

De acuerdo con el uso que queremos darle a un sensor específico, vamos a tener que tomar una decisión sobre cuál es el más apropiado. Algunos de estos son los sensores de velocidad, sonido, luz, flujo, temperatura, electricidad, magnetismo, aceleración, fuerza, posición, visión, humedad, químico.

![sensores5.jpg](https://static.platzi.com/media/public/uploads/sensores5_d0bd1d79-9981-4d0b-8785-67e1d40b2f30.jpg)

**Sensores**
Existen distintas aplicaciones para los sensores.
El mundo real tiene muchos eventos o fenómenos que pueden ser medidos
Existen sensores que contienen componentes químicos que reaccionan ante fenómenos específicos
Tambien existen sensores con características magnéticas y mecánicas.

**Existen sensores de**

- Velocidad

- Sonido

- Luz

- Flujo

- Temperatura

- Electricidad

- Magnetismo

- Aceleración

- Fuerza
- Posición

- Visión

- Humedad

- Químicos

**Químicos**
Se encuentran tratados para reaccionar electricamente como respuesta a estímulos químicos el medio ambiente.

**Velocidad**
Son sensores puramente magnéticos o mecánicos.
Detectan las vueltas que va a dar un eje.

**Sonido**
Pueden ser simples, para detectar el volumen.
Pueden ser complejos, cómo los micrófonos.
Existen sensores inteligentes de sonido como los que reaccionan ante comandos de voz. Estos incluyen el módulo de procesamiento de lenguaje más el micrófono.

**Luz y color**

**Flujo**
Que permiten medir cantidades de líquidos, utilizados regularmente en la medición de ciclos de industria alimentaria y química.
Por ejemplo para llenado de tanques. También puede hacerse esto midiendo peso y nivel.

**Temperatura**
Pretenden medir la temperatura de un entorno.
Se utilizan para tomar decisiones, como mantener límites permisibles de ejecución en entornos delicados.
También se utilizan para conseguir temperaturas específicas como en hornos.
Son los más utilizados

**Electricidad**
Saber si algo tiene corriente o no.
Existen aquellos no invasivos, que no necesitan tocar cables.
Multímetros.

**Magnetismo.**
Por ejemplo los contadores de revoluciones por minuto. Puede usarse para medir velocidad.

**Aceleración y movimiento**
Existe el sensor IMU para medir movimiento, aceleración y posicionamiento.
Permiten la orientación de un sistema.

**Fuerza**
Miden el esfuerzo que requiere algo para moverse.
Puede usarse para pesar

**Vision**
Lidars para detectar el entorno

**Humedad**
Muy utilizados en la agro industria
Tambien para medir la humedad en espacios que deben mantenerse secos.

**Sensores de oxigeno disuelto**
Muy utilizados para proyectos de acuicultura.

**Sensores de distancia y presencia**

- Sensores Sharp: Permiten medir la distancia de un objeto.

- Pir: Sensor que detecta presencia (Movimiento)

- Sensores ultra sónicos. Permiten medir el tiempo en el que vuelve el sonido para determinar distancias. Este tipo de sensores se pueden utilizar para crear radares.

**Sensores de temperatura y humedad**

- Se utilizan para aplicaciones de agricultura
- Existen sensores de temperatura medio ambiental

- Sensores de temperatura en agua

**Existen sensores para**

- Visión artificial

- Oxigeno disuelto

- Fuerza

- Flujo

- Posicion

- Gases

- Particulas en el ambiente

- Presión
- Sensores laser

Una aplicación muy interesante para los sensores ultrasónicos es su aplicacion en radares. Esto combinado con Lidars permiten generar radares de corto alcance con vision por computador tridimensionales de alta tecnología.

## Diferentes tipos de actuadores

En esta clase vamos a familiarizarnos con los distintos tipos de actuadores que existen. Para esto, te muestro un mapa conceptual en el que puedes observar el tipo de movimiento y el medio en el que operan.

Tenemos dos tipos principales de movimiento:

- Lineal
- Rotativo

Los medios en los que operan son:

- Hidráulico
- Neumático
- Eléctrico

Recuerda que el desafió de esta clase es investigar las principales aplicaciones de estos 3 medios y nos cuentes 3 ejemplos en la sección de comentarios.

Tipos de actuadores segun su clasificación

**Clasificados por tipo de movimiento**

- Lineales -> tienen un punto de inicio y uno de fin, un ejemplo de estos son los pistones

- Rotativos -> Básicamente todos comienzan con un motor que genera el movimiento que puede llegar a llantas, puertas…

**Clasificados por el medio en el que operan**

- Hidráulicos -> son Actuadores muy fuertes,Aunque lentos. Comúnmente usados en procesos de compactación
- Neumáticos -> estos se mueven mediante la presión del aire. al contrario de los actuadores hidráulicos estos son mucho mas rápidos, pero carecen de la fuerza de los anteriores
- Eléctricos -> Son los actuadores mas comunes, estos pueden ser motores

# 4. Introducción a la electrónica
## Diferencias entre electricidad y electrónica

Ya estamos a punto de comenzar a trabajar con nuestro Arduino. Sin embargo, antes debemos
discutir sobre un tema muy importante: la diferencia entre la electricidad y la electrónica.

**La electricidad y la electrónica no son nombre diferentes para una misma cosa.**

La principal diferencia entre circuitos electrónicos y eléctricos es que **los circuitos eléctricos no toman decisiones** y manejan **voltajes mucho mayores** a los de sus contrapartes electrónicas.

La electronica funciona por **corriente directa**, esta corriente se mueve en **una sola dirección** y por lo general se utilizan entre **5, 3 y 12 volts**. Esta energía se genera con **fuentes de poder** o por medio de **baterías**, todas las baterías funcionan generando corriente directa.

Por otra parte, la electricidad funciona por **corriente alterna**, puede alcanzar **voltajes altísimos** y recibe su nombre porque el flujo de electrones varia de un punto a otro y luego regresa.

Para que trabajen juntas necesitas una **fuente de poder**. Funciona convirtiendo la corriente eléctrica a una corriente de voltaje directo para alimentar todos los circuitos electrónicos. Todos nuestros aparatos electrónicos *(celulares, laptops, cámaras, tv, etc)* tienen una fuente de poder.

Diferencias entre electricidad y electrónica

**Electricidad o circuito eléctrico**

- Estos trabajan con altos voltajes, y son los encargados de alimentar con electricidad un determinado lugar como casas, calles etc…
- Estos tienen dos estados (alimentando y no alimentando)
- Funcionan con corriente alterna (el flujo de electrones varia de un punto a otro y regresan)

**Electrónica o circuito electrónico**

- Estos trabajan con voltajes muy bajos
- Estos trabajan con voltajes variables
- Estos toman son capases de tomar decisiones
- Funcionan con corriente directa (5v, 3.3v , o 12v) esta corriente es obtenida de fuentes de poder o baterías

## Tipo componentes electrónicos

En esta sección vamos a hablar sobre los componentes electrónicos que vamos a utilizar durante nuestro proyecto:

- **Resistencias**: Su función es *resistir* la corriente. Se representan con la letra **R** y el número de resistencia que se esta manejando. Su símbolo para unidades de medida *(ohmios)* se representa con la letra griega *““omega””*: **Ω**.
- **Capacitor**: Nos permiten almacenar cargas eléctricas por muy poco tiempo. Funcionan similar a una batería, pero los ciclos de carga y descarga son mucho más frecuentes en el capacitor. Su unidad de medida es el *faradio* y por lo general las cantidades son microfaradios.

![colorcoderesistor.png](https://static.platzi.com/media/public/uploads/colorcoderesistor_12e15995-0d55-4038-a2e3-8846dec04433.png)

![http://img.directindustry.es/images_di/photo-g/34786-8730775.jpg](http://img.directindustry.es/images_di/photo-g/34786-8730775.jpg)

![ohm.png](https://static.platzi.com/media/user_upload/ohm-e18abb0d-b515-40c2-ac0e-1711b952fd44.jpg)

> *La ley de ohm establece que la diferencia de potencial **V** que aplicamos entre los extremos de un conductor determinado es proporcional a la intensidad de la corriente **I** que circula por el citado conductor.*

Una regla memotecnica para aprender el codigo de colores es con esta frase “NO ME ROBE NADA AMIGO VENGO A VENDER GALLINAS BLANCAS”, asi la inicial de cada letra es el color definido en el codigo de colores

Negro…NO…0
Marron…ME…1
Rojo…ROBE…2
Naranja…NADA…3
Amarillo…AMIGO…4
Verde… VENGO…5
Azul…A…6
Violeta…VENDER…7
Gris…GALLINA1S…8
Blanco…BLANCAS…9

## Más tipos de componentes electrónicos

- **Led** *(diodo emisor de luz)*: Ademas de fines estéticos, también se utilizan para indicar el estado de otros componentes. El color de la luz puede generarse por el color del plástico que lo envuelve o por componentes químicos que reaccionan a la electricidad.
- **Transistores**: Funcionan como interruptores que se accionan accionado mediante un voltaje pequeño, que cierra el circuito y permite el paso de electricidad. Se compone de tres elementos: *colector*, *base* y *emisor* *(siendo la base la encargada de cerrar el circuito)*.
- **Circuitos Integrados**: Son todos los componentes de un circuito *(con resistencias, capacitores, etc)* integrados en un solo circuito completo.

![img](http://www.theremino.com/wp-content/uploads/2012/02/Actuators_Led1.png)



## Limitando la corriente para evitar quemar un led

El uso principal de una resistencia al conectar una luz led es, evitar que esta se queme. Los leds no funcionan con 5 sino con 1, 2 o 3 volts *(los modelos más brillantes)*.

Para esta practica vamos a utilizar un regulador de voltaje L7805 que nos permite bajar desde 17 hasta 5 volts

Para calcular la intensidad máxima:

**Si es una fuente DC:**
1- Busca la potencia de la fuente. Probablemente en la etiqueta en la que te dice la potencia también te dirá la corriente máxima. Si no lo dice sigue al punto 2.
2 - Si no sabes qué voltaje de salida tiene, mídelo con un multímetro.
3 - P = V*I, y como tenemos P y V, Imax = P/V.

**Si es una fuente AC:**
En caso de que la fuente NO sea DC hay que tener en cuenta las definiciones de Corriente eficaz y Corriente de pico. El multímetro mide los valores eficaces (es decir, si la señal fuese DC, qué valor tendría) y el valor de pico es el valor máximo que alcanza en un periodo. Para pasar de valor eficaz a valor de pico hay que multiplicar por √2 (Para señales sinusoidales)

[![img](https://www.google.com/s2/favicons?domain=https://hetpro-store.com/TUTORIALES/wp-content/uploads/2018/05/4b272156-hetpro-favicon.ico?x18372)Resistencia de LED, Como calcularla en función a la corriente - HeTPro](https://hetpro-store.com/TUTORIALES/resistencia-de-led/)

# 5. Manos a la obra
## Puertos de un arduino y sus funciones

![capture.png](https://static.platzi.com/media/public/uploads/capture_a2f94373-5d2d-46f1-91b2-eab514cc15eb.PNG)

![capture.png](https://static.platzi.com/media/public/uploads/capture_a3f4186c-a2e0-4bf6-9950-d68d8e6cb521.PNG)

![arduino_pines.jpg](https://static.platzi.com/media/user_upload/arduino_pines-eb65faaa-d203-46d3-90e1-8378a1b4b686.jpg)

**Partes del Arduino UNO**

![partes arduino.png](https://static.platzi.com/media/user_upload/partes%20arduino-ad6c2284-6c94-466e-845a-8654f4ac5314.jpg)



## Qué es un protoboard

La protoboard es una placa con orificios conectados eléctricamente entre sí siguiendo un patrón horizontal o vertical. Tiene 3 partes principales: las partes laterales, la parte central y la parte superior.

La protoboard usa filas y columnas para transmitir el voltaje a través de la misma

siendo las columnas las representadas por los colores rojo y negro, y las filas las representadas por el color azul

![img](http://1.bp.blogspot.com/-v6PZKXGJVuo/VAuAkCOF3YI/AAAAAAAAAYE/P-QqRps84ds/s320/funcionamento%2Bbreadboard.png)

## Estructura general de un programa en Arduino y hello world con un LED

En esta clase aprendemos la estructura general de un programa en Arduino, además de hacer un Hello World con Arduino que será hacer parpadear un LED. Recuerda que debes saber programar con C que es el lenguaje de programación de Arduino.

Cuando hacemos una relación entre la programación con un dispositivo de hardware, debemos siempre ser muy claros con las instrucciones que le damos al Arduino.

![capture.png](https://static.platzi.com/media/public/uploads/capture_2509b86b-121f-43cf-a207-90555bf9df46.PNG)

![capture.png](https://static.platzi.com/media/public/uploads/capture_510da15c-0afd-4c95-8ff4-930c994cd3ff.PNG)

Un scketch o programa en arduino consta de dos partes principales setup y loop

- **setup** -> acá configuramos los pines que usaremos durante nuestro proyecto ya sean pines de entrada o salida (INPUT, OUTPUT)
- **loop** -> esta parte incluye la lógica, y se itera de forma indefinida

## Variables y Constantes Globales

Sigamos hablando sobre la programación en Arduino. En esta clase te enseño cómo podemos hacer modificaciones de los datos que tenemos en el código para programar nuestro Arduino.

```c
//Variable **global** 
int ledRosa1 = 2 //donde  **int** indica que es **una** variable de tipo entero, ledRosa1 es **el** nombre de **la** variable **y** 2 **el** valor //constante **global**  
const byte ledRosa2 = 3 //de esta forma declaramos constantes 
```

## Manejo de librerías y funciones

Como sabes la comunidad de Arduino es una comunidad bastante activa, debido a que se comenzaron a crear nuevas tarjetas que dan nuevas funciones y librerías que permiten hacer millones de cosas.

Arduino de ser un producto hardware-software libre, su IDE es totalmente personalizable. En mi caso, solo personalize los colores del texto:
![tema.png](https://static.platzi.com/media/user_upload/tema-50a844d0-d54d-460b-a11c-09be163e2bed.jpg)
Pero es posible cambiar cualquier cosa, como reemplazar el botón del sistema de ventanas con el icono de Platzi 😃
![Captura de pantalla 2018-07-07 a la(s) 02.06.42.png](https://static.platzi.com/media/user_upload/Captura%20de%20pantalla%202018-07-07%20a%20la%28s%29%2002.06.42-6d01bfb5-9bf8-4840-a993-0c0e3b43951f.jpg)
Tan solo se reemplaza el archivo con el mismo nombre y extensión
![Captura de pantalla 2018-07-07 a la(s) 02.06.30.png](https://static.platzi.com/media/user_upload/Captura%20de%20pantalla%202018-07-07%20a%20la%28s%29%2002.06.30-ff669452-2a71-4ffb-9c34-4d6d59870b39.jpg)
Para jugar con los colores del texto del tema, buscan en los archivos raíz de la app el archivo theme.txt y ahí pueden ir configurando a su gusto, les dejo el mio (solo lo reemplazan por este):

```c
#FUNCTIONS COLOR 			#52DDED - ORANGE			KEYWORD1
#FUNCTIONS COLOR			#52DDED - ORANGE			KEYWORD2
#STRUCTURE COLORS 			#DDED52 - GREEN			KEYWORD3
#VARIABLES COLOR 				#ED5252 - BLUE				LITERAL1

#ERROR COLOR					#A61717 - RED
#COMMENTS // COLOR			#95A5A6 - LIGHT GREY
#COMMENTS /**/ COLOR		#FFFFFF	- DARK GREY


# GUI - STATUS
status.notice.fgcolor = #002325
status.notice.bgcolor = #17A1A5
status.error.fgcolor = #FFFFFF
status.error.bgcolor = #E34C00
status.edit.fgcolor = #000000
status.edit.bgcolor = #F1B500
status.font = SansSerif,plain,12

# GUI - TABS
# settings for the tabs at the top
# (tab images are stored in the lib/theme folder)
header.bgcolor = #17A1A5
header.text.selected.color = #005B5B
header.text.unselected.color = #007e82
header.text.font = SansSerif,plain,12

# GUI - CONSOLE
console.font = Monospaced,plain,11
console.font.macosx = Monaco,plain,10
console.color = #EEEEEE
console.output.color = #0C0D0D
console.error.color = #E34C00

# GUI - BUTTONS
buttons.bgcolor = #006468
buttons.status.font = SansSerif,plain,12
buttons.status.color = #ffffff

# GUI - PLOTTING
# color cycle created via colorbrewer2.org
plotting.bgcolor = #ffffff
plotting.color = #ffffff
plotting.graphcolor.size = 4
plotting.graphcolor.00 = #2c7bb6
plotting.graphcolor.01 = #fdae61
plotting.graphcolor.02 = #d7191c
plotting.graphcolor.03 = #abd9e9

# GUI - LINESTATUS   
linestatus.color = #006468
linestatus.bgcolor = #006468

# EDITOR - DETAILS

# foreground and background colors
editor.fgcolor = #OOOOOO
editor.bgcolor = #FFFFFF

# highlight for the current line
editor.linehighlight.color=#c8d2dc
# highlight for the current line
editor.linehighlight=false

#CURSOR!!!!
editor.caret.color = #7074F5

# color to be used for background when 'external editor' enabled
editor.external.bgcolor = #c8d2dc

# selection color
editor.selection.color = #D1F5DA

# area that's not in use by the text (replaced with tildes)
editor.invalid.style = #FCBA04,bold

# little pooties at the end of lines that show where they finish
editor.eolmarkers = false
editor.eolmarkers.color = #FBFBFA

# bracket/brace highlighting
editor.brackethighlight = true
editor.brackethighlight.color = #3D7591


# TEXT - KEYWORDS

# FUNCTIONS
editor.keyword1.style = #02C4BD,bold
editor.data_type.style = #02C4BD,bold

# METHODS
editor.keyword2.style = #F22F73,plain
editor.function.style = #F22F73,plain

# STRUCTURES
editor.keyword3.style = #FFA600,plain
editor.reserved_word.style = #FFA600,plain


# TEXT - LITERALS

# constants & datatypes
editor.literal1.style = #60BEEE,plain

# p5 built in variables: e.g. mouseX, width, pixels
editor.literal2.style = #D0FFE0,plain

editor.variable.style = #000000,plain

#PALABRAS RESERVADAS
editor.reserved_word_2.style = #9C54B7,plain

editor.literal_boolean.style = #9C54B7,plain

editor.literal_char.style = #9C54B7,plain

#TEXTP ENTRE COMILLAS
editor.literal_string_double_quote.style = #FC0101,plain

#EL INCLUDE
editor.preprocessor.style = #69C56C,plain

# http://www.arduino.cc/
editor.url.style = #383897,underlined

# e.g. + - = /
editor.operator.style = #C13E39,plain


# ?? maybe this is for words followed by a colon
# like in case statements or goto
editor.label.style = #F7F7F7,bold


# TEXT - COMMENTS
editor.comment1.style = #D1CE1B,plain
editor.comment2.style = #D1CE1B,plain


# LINE STATUS - editor line number status bar at the bottom of the screen
linestatus.font	   = SansSerif,plain,10
linestatus.height  = 20
```

 [instalar librerías:](https://www.arduino.cc/en/Guide/Libraries)

[![img](https://www.google.com/s2/favicons?domain=https://www.arduino.cc/en/Guide/Libraries/favicon.ico)Arduino - Libraries](https://www.arduino.cc/en/Guide/Libraries)

[![img](https://www.google.com/s2/favicons?domain=https://www.arduino.cc/en/Guide/Libraries/favicon.ico)Arduino - Libraries](https://www.arduino.cc/en/Guide/Libraries)

## Manejo de valores analógicos: uso del potenciómetro

Un potenciométro es una resistencia variable. Estos pueden simular la información que recibimos de un sensor específico. Lo más interesante de estos dispositivos es la posibilidad de controlar el tipo de resistencia que le vamos a dar.

**ENTRADAS ANALÓGICAS Y DIGITALES**

- **digitales** ->Las entradas digitales del arduino uno son las correspondientes a los pines que van del 1 al 13. Se diferencian de las analógicas porque éstas son capaces de “entender” sólo dos niveles de señal, LOW o valores cercanos a 0 V y HIGH o valores cercanos a 5 V.
- **analógicas** -> Las entradas analógicas del arduino Uno son las correspondientes a los pines de A0 a A5. Se caracterizan por leer valores de tensión de 0 a 5 Voltios con una resolución de 1024 (10 bits). Si dividimos 5 entre 1024 tenemos que ser capaz de detectar variaciones en el nivel de la señal de entrada de casi 5 mV.

**Código del ejercicio**

```c
int led = 3;
int potPin = A0;//declaracion de pin analogico 
int potValue = 0;//declaramos una variable para guardar el valor del potenciometro
voidsetup() {

pinMode(led, OUTPUT);//declaramos el led como salida
}

voidloop() {

potValue = analogRead(potPin);//almacenamos el valor del pin analogico de nuestro potenciometro


digitalWrite(led, HIGH);//encendemos el led
delay(potValue);//damos un delay igual al valor recibido por nuestro potenciometro
digitalWrite(led, LOW);//apagamos el led
delay(potValue);//asingamos un delay igual alvalor recibido por nuestro potenciometro
}
```

Quede más visible como se conectan los pines del potenciometro.

![img](https://2.bp.blogspot.com/-DkV12RrhY_c/VnBxJc4zLeI/AAAAAAAAAhc/g979nr8Wbcc/s1600/Potenciometro.jpg)

En el pin 1 va la tierra GND
En el pin 2 es la entrada de voltaje
En el pin 3 es la salida de voltaje modificado que va a nuestra entrada análoga del Arduino

## Uso del monitor serial

El monitor serial nos permite comunicar al Arduino con nuestra computadora.

La comunicación en paralelo transmite múltiples dígitos binarios *(bits)* de manera simultánea mientras que la comunicación serial solo transmite de a un bit.

```c
int ledAmarillo = 3;
int potPin = A0;
int potValue = 0;

void setup() {
pinMode (ledAmarillo, OUTPUT);
Serial.begin(9600);
}

void loop() {
potValue = analogRead(potPin);
Serial.println(potValue);
if(potValue < 341)
{Serial.println(“Parpadea muy rápido”);}
else if(potValue > 682)
{Serial.println(“Parpadea muy lento”);}
else
{Serial.println(“Parpadea Normal”);}
digitalWrite(ledAmarillo, HIGH);
delay(potValue);
digitalWrite(ledAmarillo, LOW);
delay(potValue);
}
```



## PWM y señales analógicas

El Arduino no es capaz de generar una salida analógica, sin embargo vamos a emular este tipo de señal con el principio del PWM.

![img](https://upload.wikimedia.org/wikipedia/commons/0/02/PWM_duty_cycle_with_label.gif)

El Arduino al igual que otros microcontroladores en sus pines de entradas analogicas lee es **voltaje**, este voltaje va determinado en un rango, ejemplo: de (0 a 5 Voltios), dependiendo del microcontolador que estes utilizando. A partir de ese voltaje que le llega a la entraga analogica del MCU, por medio de una electrónica que tiene dentro el MCU puede leer con cierta precisión el valor del voltaje (bits de resolución). En la siguiente imagen puedes encontrar una grafica de (**Bits de resolución** VS **Voltaje**).

![imagen](https://www.digikey.com/-/media/Images/Article%20Library/TechZone%20Articles/2017/September/ADC%20DAC%20Tutorial/article-2017september-adc-dac-tutorial-fig1.jpg?ts=525e92b5-2f8e-4ce8-8262-30c93b9457a3&la=es-US)

Cada voltaje corresponde con un Bit de Resolución, esos bits de resolución para que sean más entendibles los leemos en **decimal** y luego por medio de una expresión matemática los pasamos a la unidad que queremos leer (voltaje, temperatura, presión, corriente etc.)

Aqui te dejo un [articulo ](https://www.digikey.com/es/articles/techzone/2017/sep/adc-dac-tutorial)donde describe con un lenguaje mas técnico como funciona el ADC del MCU.

## Un control de color RGB e intensidad lumínica para una lampara de mesa

Cual es la diferencia entre

```c
brightValue = map(potValue, 0, 1023, 0, 255);

brightValue = potValue / 4;
```

Ambos nos entregan valores entre 0 y 255. existe alguna razón para preferir una sobre otra?

```c
int led = 3;
int potPin = A0;//declaracion de pin analogico 
int potValue = 0;//declaramos una variable para guardar el valor del potenciometro
int brightValue = 0;
void setup() {
}



void loop() {

potValue = analogRead(potPin);//almacenamos el valor del pin analogico de nuestro potenciometro

brightValue = potValue / 4;


analogWrite(led, potValue);//encendemos el led

}
```

eto cumplido convinar colores usando dos pots

```c
int ledRed = 3;
int ledGreen = 5;
int ledBlue = 9;

int potPin1 = A0;
int potPin2 = A1;
int potValue1 = 0;
int potValue2 = 0;


void setup() {

  Serial.begin(9600);
 
}

void loop() {
  
  potValue1 = analogRead(potPin1);
  potValue1 = map(potValue1, 0, 1023, 0, 255);
  Serial.print("potValue1: ");
  Serial.print(potValue1);
  delay(100);
  
  potValue2 = analogRead(potPin2);
  potValue2 = map(potValue2, 0, 1023, 0, 255);
  Serial.print(" potValue2: ");
  Serial.println(potValue2);
  delay(100);
 
if(potValue1 < 63 && potValue2 > 250)
{
    analogWrite(ledRed, 36); //color violeta
    analogWrite(ledGreen, 0);
    analogWrite(ledBlue, 54);
   
}
 else 
 {
    analogWrite(ledRed, 255);
    analogWrite(ledGreen, 255);
    analogWrite(ledBlue, 255);
   
 }

 if(potValue1 >= 63 && potValue1 < 126 && potValue2 < 63) 
 {
    analogWrite(ledRed, 255); //color turquesa
    analogWrite(ledGreen, 0);
    analogWrite(ledBlue, 20);
 }
  else if(potValue1 >= 126 && potValue2 >=63 && potValue2 <=250)
  {
    analogWrite(ledRed, 255); // color naranja
    analogWrite(ledGreen, 18);
    analogWrite(ledBlue, 0);
  }
}
```

**Codigo**

```c
int led1 = 3;
int led2 = 5;
int led3 = 6;
int led4 = 10;
int potpin = A0;
int potvalue = 0;
int brightvalue = 0;
void setup() {
// put your setup code here, to run once:
// =P
}

void loop() {
// put your main code here, to run repeatedly:
potvalue = analogRead(potpin);
brightvalue = map(potvalue, 0, 1023, 0, 255);
analogWrite(led1, brightvalue);
analogWrite(led2, brightvalue);
analogWrite(led3, brightvalue);
analogWrite(led4, brightvalue);
delay(10);
//Resulicion PWM 8bits osea 2^8=256
}
```

## Uso de push buttons

En este momento conocemos cómo manejar entradas analógicas como la de un potenciométros. Ahora, vamos a conocer cómo funcionan las entradas digitales.

![arduinouno.png](https://static.platzi.com/media/public/uploads/arduinouno_b45e775e-4f81-4b18-a926-8462c2bab90b.png)

```c
const int led1 = 13;
const int boton1 = 12;
int a = 0;


void setup() {
  pinMode(boton1, INPUT_PULLUP);
  pinMode(led1, HIGH);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(boton1) == LOW) {
    digitalWrite(led1, HIGH);
    a = a +1;
    delay(400);
    Serial.println(a);
  }
    
  else {
    digitalWrite(led1, LOW);
  }
}
```

[![img](https://www.google.com/s2/favicons?domain=https://www.arduino.cc/en/Tutorial/DigitalPins/favicon.ico)Arduino - DigitalPins](https://www.arduino.cc/en/Tutorial/DigitalPins)

http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega48A-PA-88A-PA-168A-PA-328-P-DS-DS40002061A.pdf

## Monitor de temperatura con Arduino (uso de LM35 y un lcd 16x2)

En esta clase vas a aprender cómo utilizar Arduino para crear un monitor de temperatura. Lo primero que haremos serán las conexiones de nuestro sensor. Vamos a tomar nuestro sensor de temperatura, lo conectamos y verificamos que tenga las características.

Adjunto el código para los que tienen el sensor DHT11. usando la librería para este sensor

```c
#include <DHT11.h>

int pin=2;
DHT11 dht11(pin);

void setup()
   {
       Serial.begin(9600);
   }

void loop()
   {
       int err;
       float temp, hum;
       if((err = dht11.read(hum, temp)) == 0)    // Si devuelve 0 es que ha leido bien
          {
             Serial.print("Temperatura: ");
             Serial.print(temp);
             Serial.print(" Humedad: ");
             Serial.print(hum);
             Serial.println();
          }
       else
          {
             Serial.println();
             Serial.print("Error Num :");
             Serial.print(err);
             Serial.println();
          }
       delay(1000);            //Recordad que solo lee una vez por segundo
   }
```

Agregar librerias:

1. Programa > Agregar librerias > Gestionar librerias
2. En esta parte se muestran varias librerias “oficiales para el arduino”, Asi que buscas DHT y le das a instalar.
3. disfrutar de la nueva libreria.

Cómo codear el DHT:

```c
#include <DHT.h>

int SENSOR = 2;
int temp, hum;

DHT dht(SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  hum = dht.readHumidity();
  temp = dht.readTemperature();
  Serial.println("Humedad");
  Serial.println(hum);
  Serial.println("Temperatura");
  Serial.println(temp);

  delay(500);
}
```

Pruebas con sensor **DHT11**

Sketch con librería “**DHT sensor library**” de **Adafruit**

es necesario instalar tambien “**adafruit unified sensor**”

```c
#include "DHT.h" //libreria DHT sensor library Adafruit

#define DHTPIN 2     // pin usado para recibir la medición
#define DHTTYPE DHT11   // impirtante verificar que sea el sensor que estamos usando
 
// Inicializamos el sensor DHT11
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // Inicializamos comunicación serie
  Serial.begin(9600);
 
  // Inicializamos el sensor DHT
  dht.begin();
}

void loop() {

  // Esperamos 2 segundos entre medidas
  delay(2000);
 
  // Leemos la humedad relativa
  float h = dht.readHumidity();
  // Leemos la temperatura en grados centígrados (por defecto)
  float t = dht.readTemperature();
  // Leemos la temperatura en grados Fahrenheit
  float f = dht.readTemperature(true);
 
  // Comprobamos si ha habido algún error en la lectura
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Error obteniendo los datos del sensor DHT11");
    return;
  }
 
  // Calcular el índice de calor o sensación térmica en Fahrenheit
  float hif = dht.computeHeatIndex(f, h);
  // Calcular el índice de calor o sensación térmica en grados centígrados
  float hic = dht.computeHeatIndex(t, h, false);
 
  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Sensación Térmica: ");
  Serial.print(hic);
  Serial.print(" *C ");
  Serial.print(hif);
  Serial.println(" *F");
 
}
```

## Continuando con el monitor de temperatura con Arduino

DHT11 y esto fue lo que aprendí:

Agregar librerias:

1. Programa > Agregar librerias > Gestionar librerias
2. En esta parte se muestran varias librerias “oficiales para el arduino”, Asi que buscas DHT y le das a instalar.
3. disfrutar de la nueva libreria.

Cómo codear el DHT:

```c
#include <DHT.h>

int SENSOR = 2;
int temp, hum;

DHT dht(SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  hum = dht.readHumidity();
  temp = dht.readTemperature();
  Serial.println("Humedad");
  Serial.println(hum);
  Serial.println("Temperatura");
  Serial.println(temp);

  delay(500);
}
```

## Finalizando con el monitor de temperatura con Arduino

Ahora que tenemos la lectura de la temperatura, vamos a mostrarla sin necesidad de tener conectado el Arduino a nuestra Computadora.

![https://i.imgur.com/v6Kuhee.png](https://i.imgur.com/v6Kuhee.png)

**display con modulo I2C:**

![img](https://farm8.staticflickr.com/7810/32821889588_09c85b5537_c.jpg)

**conexión SDA y SCL:**
![img](https://c1.staticflickr.com/5/4875/39731648693_41ffa1e7b9_b.jpg)

**Sketch**

```c
// librería para LCD1602 (LCD 16 caracteres 2 líneas) con módulo I2C
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


// definimos el objeto lcd
// en la dirección 0x27, le especificamos que son 16 caracteres y 2 líneas
LiquidCrystal_I2C lcd(0x27, 16, 2);


//libreria DHT sensor library Adafruit
#include "DHT.h" 

#define DHTPIN 2     // pin usado para recibir la medición
#define DHTTYPE DHT11   // impirtante verificar que sea el sensor que estamos usando
 
// Inicializamos el sensor DHT11
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // Inicializamos comunicación serie
  Serial.begin(9600);
 
  // Inicializamos el sensor DHT
  dht.begin();

  // Inicializamos el LCD,
  lcd.begin();
  
}

void loop() {

  // Esperamos 2 segundos entre cada medida del sensor
  delay(2000);

 
  // Leemos la humedad relativa
  float h = dht.readHumidity();
  // Leemos la temperatura en grados centígrados (por defecto)
  float t = dht.readTemperature();
  // Leemos la temperatura en grados Fahrenheit
  float f = dht.readTemperature(true);
 
  // Comprobamos si ha habido algún error en la lectura
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Error obteniendo los datos del sensor DHT11");
    return;
  }
 
  // Calcular el índice de calor o sensación térmica en Fahrenheit
  float hif = dht.computeHeatIndex(f, h);
  // Calcular el índice de calor o sensación térmica en grados centígrados
  float hic = dht.computeHeatIndex(t, h, false);


  //mensajes LCD
  lcd.clear(); // limpiamos LCD
  
  lcd.setCursor (0, 0); // vamos al inicio de la linea 1
  lcd.print("Humedad: ");
  lcd.print(h);
  
  lcd.setCursor (0, 1); // vamos al inicio de la linea 2
  lcd.print("Temp: ");
  lcd.print(t);
  

  //mensajes Serial 
  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Sensación Térmica: ");
  Serial.print(hic);
  Serial.print(" *C ");
  Serial.print(hif);
  Serial.println(" *F");
 
}
```

**Circuito**
![img](https://farm8.staticflickr.com/7828/31755309387_b145de3521_b.jpg)

## Reto: Crea tu semáforo con Arduino

Ya sabemos manejar entradas y salidas, el PWM de Arduino, a leer sensores analógicos.

Tu reto es escribir un programa de semáforos con Arduino, este par de semáforos son los encargados de manejar un crucero.

- Cada crucero tiene un flujo de autos hacia los dos sentidos con la posibilidad de incorporarse a las vías principales.
- Debes incorporar botones que permitan avisar que hay personas esperando a cruzar la calle.

Reto cumplido!
![semaforo_bb.jpg](https://static.platzi.com/media/user_upload/semaforo_bb-c1d4ca4e-f81f-42a3-9693-6c7fc172ae0a.jpg)

El código del programa.

```c
/*****************************************************
	Desafio#1 - Platzi
	Semáforo para dos Avenidas (Principal y Secundaria)
	ambas tienen una luz azul para indicar el giro a la
	izquierda y un pulsador peatonal para cambiar el 
	estado de la luz verde y darle paso a los peatones.

	Configuración:
		Entradas: botones peatonales {13(P),2(S)} 
		Salidas: 
			luces verde, amarilla, roja y azul 
						{11,10,9,8}Princial ; {7,6,5,4}Secundaria
*****************************************************/
// Avenida Principal
const int vp = 11;
const int ap = 10;
const int rp = 9;
const int zp = 8;
const int butP = 13;	//Pulsador Peatonal
const int semP[4] = {vp, ap, rp, zp};	// arreglo para semáforo Principal
// Avenida Secundaria
const int vs = 7;
const int as = 6;
const int rs = 5;
const int zs = 4;
const int butS = 2;	//Pulsador Peatonal
const int semS[4] = {vs, as, rs, zs}; // arreglo para semáforo Secundario
// Tiempos para cada luz en milisegundos (tr = tz)
int ta = 2000;
int tv = 6000;
int tz = 3000;
// Variables Globales
unsigned long tiempoActual;
int tiempo;
int estadoSem;	// el semáforo tiene 6 estados
bool flagButton = false;

void setup()
{
	// Configuración de Salidas para los semáforos
	for(int i=0; i<4; i++){
		pinMode(semP[i], OUTPUT);    
		pinMode(semS[i], OUTPUT);    
	}
	// Configuración de Entradas para los pulsadores
	pinMode(butP, INPUT_PULLUP);
	pinMode(butS, INPUT_PULLUP);

	iniciar();
}

void loop()
{
	if((millis() - tiempoActual) > tiempo) {
		cambio();
		tiempoActual = millis();
	}
	if((digitalRead(butP) == LOW) || (digitalRead(butS) == LOW)) {		
		delay(200);
		//esperamos hasta que los botones no esten pulsados
		while((digitalRead(butP) == LOW) && (digitalRead(butS) == LOW));		
		flagButton = true;
		estadoSem--;	// el estado actual apunta al siguiente
		if(estadoSem <= 0)	estadoSem = 6;
		if((estadoSem == 1) || (estadoSem == 4))	estadoSem++, cambio();
		else flagButton = false;
		tiempoActual = millis();		
	}
}

void iniciar() {	
	estadoSem = 1;
	cambio();
}

void cambio() {
	for(int i=0; i<4; i++) {
		digitalWrite(semP[i], LOW);    
		digitalWrite(semS[i], LOW);    
	}
	switch (estadoSem) {
	    case 1:
	      digitalWrite(vp, HIGH);
	      digitalWrite(rs, HIGH);
	      tiempo = tv;
	      break;
	    case 2:
	      digitalWrite(ap, HIGH);
	      digitalWrite(rs, HIGH);
	      tiempo = ta;
	      break;
	    case 3:
	      digitalWrite(rp, HIGH);
	      digitalWrite(zp, HIGH);
	      digitalWrite(rs, HIGH);
	      tiempo = tz;
	      break;
	    case 4:
	      digitalWrite(rp, HIGH);
	      digitalWrite(vs, HIGH);
	      tiempo = tv;
	      break;
	    case 5:
	      digitalWrite(rp, HIGH);
	      digitalWrite(as, HIGH);
	      tiempo = ta;
	      break;
	    case 6:
	      digitalWrite(rp, HIGH);
	      digitalWrite(rs, HIGH);
	      digitalWrite(zs, HIGH);
	      tiempo = tz;
	      break;
	    default:
	      break;
	}
	if(flagButton)	estadoSem += 2, flagButton = false;
	else estadoSem++;
	if(estadoSem > 6)	estadoSem = 1;
}
```

# 6. Automatización de procesos
## Cómo generar movimiento y uso de motores

Los motores no tiene la suficiente energía para moverse usando únicamente el arduino.

Los motores eléctricos de corriente directa se rigen por dos condiciones el voltaje y el amperaje.

El voltaje le da la velocidad al motor, es decir que a mayor voltaje mayor velocidad.

El Amperaje tiene que ver con qué tanta corriente eléctrica puede consumir el motor y está relacionado con la potencia del motor.

![motor.jpg](https://static.platzi.com/media/public/uploads/motores-5b4869fc-7e4a-472e-affe-7bfe81dae979_32718998-a1ec-4049-a06b-bd39a669afd9.jpg)

```c
const int motor1A = 4; // A entrada 1
const int motor1B = 2; // A entrada 2
const int velocidad = 5; // PWM para regular velocidad
const int btn = 11; // Botón para cambiar sentido de giro

int potPin = A0; // Entrada análoga para cambiar manualmente la velocidad
int potValue = 0; // Valor de lectura del potenciómetro, inicializado en 0
int speed; // Velocidad del motor
int estado = 1; // Sentido de giro

void setup()
{
  //Definimos nuestros pines
	pinMode(motor1A, OUTPUT);
	pinMode(motor1B, OUTPUT);
	pinMode(btn, INPUT_PULLUP);
 
}

void loop()
{
    // Leemos el valor del A0, podemos variarlo con el potenciómetro
  	potValue = analogRead(potPin); 
  	/* Usamos la función map, que es básicamente una regla de 3 simple,
  	para transformar los valores analógico a valores PWM */
  	speed = map(potValue,0,1023,0,255); 
  	
   	/* Dependiendo del "estado" el motor girara para una lado
       o para el otro*/
  	if ( estado == 0)
    {
    	digitalWrite(motor1A, HIGH);
  		digitalWrite(motor1B, LOW);
    }
  	else // Sería estado = 1
    {
      	digitalWrite(motor1A, LOW);
  		digitalWrite(motor1B, HIGH);
    }
  	analogWrite(velocidad, speed); //Le indicamos la velocidad al motor

  
  	/* Aqui es donde podemos cambiar el sentido de giro del motor.
    Según el estado en el que está el motor, cuando oprimamos el 
    botón, el motor se detendrá por 2 segundos y comenzará a girar
    en sentido contrario.*/
  	if (estado == 0 && digitalRead(btn) == LOW)
    {
      	digitalWrite(motor1A, LOW);
 		digitalWrite(motor1B, LOW);
  		delay(2000);
      	estado = 1;
    }
  	else if (estado == 1 && digitalRead(btn) == LOW)
    {
      	digitalWrite(motor1A, LOW);
 		digitalWrite(motor1B, LOW);
  		delay(2000);
      	estado = 0;
    }
}
```

![motorVariable.PNG](https://static.platzi.com/media/user_upload/motorVariable-805d9e81-7d95-47ca-b775-7293f35f7a33.jpg)

>  Nota: para el caso de la energía adicional, en vez de una batería usen un cable USB viejo de smartphone corten la entrada microUSB, verán varios cables, pero los que importan son el rojo(+) y el negro (-).

**Código**:

```c
const int motor1A = 2;
const int motor1B = 4;
int velocidad = 0;
const int pinMotor = 3;

void setup() {
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);

}

void loop() {
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  velocidad = 255;
  analogWrite(pinMotor, velocidad);
  delay(5000);
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  velocidad = 140;
  analogWrite(pinMotor, velocidad);
  delay(5000);
 digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  velocidad = 255;
  analogWrite(pinMotor, velocidad);
  delay(5000);
  
}
```

## Cómo generar movimiento y servomotores

Los servos son muy útiles cuando debemos controlar la posición de nuestros motores, se pueden alimentar de entre 6 y 12 volts.

código que se explicó

```c
#include <Servo.h>

int servo1 = 9; //pwm

Servo servo;
int  angulo = 0;

void  setup (){
   servo.attach(servo1);
}

void loop () {

  for angle (angulo  = 0; angulo <180; angulo++){
      servo.write(angulo);
      delay(30);
  }

  for angle (angulo  = 180; angulo >0; angulo--){
      servo.write(angulo);
      delay(30);
  }

}
```

## Agregando un potenciométro para controlar la posición del Servomotor

Sketch:

```
#include <Servo.h>

int pin_servo = 2;
int pin_pot = A0;
int potVal = 0;

Servo servMotor;
int angulo;

void setup() {
servMotor.attach(pin_servo);
Serial.begin(9600);
}

void loop() {
  potVal = analogRead(pin_pot);

  angulo = map(potVal,0,1023,0,180);
  servMotor.write(angulo);
  
  
  Serial.print("Potenciómetro: ");
  Serial.print(potVal);
  Serial.print(" Ángulo: ");
  Serial.println(angulo); 
  
  delay(300);
}
```

Diagrama:
![img](https://www.arduino.cc/en/uploads/Tutorial/knob_schem.png)

Circuito:
![img](https://c1.staticflickr.com/8/7830/45792529155_f21e70e5ae_b.jpg)

[Artículo | Como funcionan los motores:](https://aprendiendoarduino.wordpress.com/tag/motor-dc/)

## Robot evasor de obstáculos

Empezamos con el proyecto final del curso, vamos a construir un robot que detecte objetos y cambie su trayectoria para evadir los obstáculo.



## Continuando con el Robot evasor de obstáculos

**Codigo | Robot Evasor de Obstaculos**

```c
robot evasor de obstaculos

#include <SoftwareSerial.h>

SoftwareSerial BT(0, 1); // RX | TX

long Distancia, Duracion;
int Direccion = 2;
int DistanciaMinima = 10;
int i = 1;
int Velocidad = 150;

int MotorD1I = 6;
int MotorD2I = 9;
int MotorD1D = 10;
int MotorD2D = 11;

int MotorT1I = 5;
int MotorT2I = 4;
int MotorT1D = 3;
int MotorT2D = 2;

void setup() {
  // put your setup code here, to run once:
#define TriggerCentro 8 //Salida
#define TriggerDerecho 13 //Salida
#define TriggerIzquierdo A3 //Salida

#define EcoCentro 7 //Entrada
#define EcoDerecho 12 //Entrada
#define EcoIzquierdo A2 //Entrada

  pinMode(TriggerCentro, OUTPUT);
  pinMode (EcoCentro, INPUT);
  pinMode(TriggerDerecho, OUTPUT);
  pinMode (EcoDerecho, INPUT);
  pinMode(TriggerIzquierdo, OUTPUT);
  pinMode (EcoIzquierdo, INPUT);
  Serial.begin(9600);

  pinMode(MotorD1D, OUTPUT);
  pinMode(MotorD2D, OUTPUT);
  pinMode(MotorD1I, OUTPUT);
  pinMode(MotorD2I, OUTPUT);
  pinMode(MotorT1I, OUTPUT);
  pinMode(MotorT2I, OUTPUT);
  pinMode(MotorT1D, OUTPUT);
  pinMode(MotorT2D, OUTPUT);
  pinMode(9, HIGH);

  Serial.begin(9600);
  Serial.println("Listo");
  BT.begin(38400);
}
void loop() {
  if (BT.available())
    Serial.write(BT.read());

  if (Serial.available())
    BT.write(Serial.read());
  // put your main code here, to run repeatedly:
  Serial.println(MedirDistacia(Direccion));
  for (i = 1; i < 4; i++)
  {
    if (MedirDistacia(i) < DistanciaMinima)
    {
      Girar(i);
      delay(50);
      Atras();
    }
    else
    {
      Adelante(Velocidad);
    }
  }
}

float MedirDistacia (int Direccion)
{
  switch (Direccion)
  {
    case 1: //Derecho
      delay(10); //limpiar canal
      digitalWrite(TriggerDerecho, HIGH);
      delayMicroseconds(10);
      digitalWrite(TriggerDerecho, LOW);
      Duracion = pulseIn(EcoDerecho, HIGH);
      break;
    case 2: //Centro
      delay(10); //limpiar canal
      digitalWrite(TriggerCentro, HIGH);
      delayMicroseconds(10);
      digitalWrite(TriggerCentro, LOW);
      Duracion = pulseIn(EcoCentro, HIGH);
      break;
    case 3: //Izquierdo
      delay(10); //limpiar canal
      digitalWrite(TriggerIzquierdo, HIGH);
      delayMicroseconds(10);
      digitalWrite(TriggerIzquierdo, LOW);
      Duracion = pulseIn(EcoIzquierdo, HIGH);
      break;
  }
  Distancia = (Duracion / 2) / 29;
  return Distancia;
}

void Parada() {
  analogWrite(MotorD1D, 0);
  digitalWrite(MotorD2D, LOW);
  analogWrite(MotorD1I, 0);
  digitalWrite(MotorD2I, LOW);
  analogWrite(MotorT1I, 0);
  analogWrite(MotorT2I, 0);
  analogWrite(MotorT1D, 0);
  analogWrite(MotorT2D, 0);
}
void Adelante(int Velocidad) {
  int Vel = Velocidad;

  analogWrite(MotorD1D, Vel);
  digitalWrite(MotorD2D, LOW);
  analogWrite(MotorD1I, Vel - 30);
  digitalWrite(MotorD2I, LOW);
  analogWrite(MotorT1I, Vel - 30);
  analogWrite(MotorT2I, 0);
  analogWrite(MotorT1D, Vel);
  analogWrite(MotorT2D, 0);
}
void Atras() {
  digitalWrite(MotorD1D, LOW);
  digitalWrite(MotorD2D, HIGH);
  digitalWrite(MotorD1I, LOW);
  digitalWrite(MotorD2I, HIGH);
  digitalWrite(MotorT1I, LOW);
  digitalWrite(MotorT2I, HIGH);
  digitalWrite(MotorT1D, LOW);
  digitalWrite(MotorT2D, HIGH);
}
void Izquierda(int Velocidad) {
  int Vel = Velocidad;

  analogWrite(MotorD1D, Vel);
  digitalWrite(MotorD2D, LOW);
  analogWrite(MotorD1I, 0);
  digitalWrite(MotorD2I, LOW);
  analogWrite(MotorT1I, 0);
  analogWrite(MotorT2I, 0);
  analogWrite(MotorT1D, Vel);
  analogWrite(MotorT2D, 0);
}
void Derecha(int Velocidad) {
  int Vel = Velocidad;

  analogWrite(MotorD1D, 0);
  digitalWrite(MotorD2D, LOW);
  analogWrite(MotorD1I, Vel);
  digitalWrite(MotorD2I, LOW);
  analogWrite(MotorT1I, Vel);
  analogWrite(MotorT2I, 0);
  analogWrite(MotorT1D, 0);
  analogWrite(MotorT2D, 0);
}

void Girar(int i) {
  if (i == 1)
  {

    Izquierda(Velocidad);
  }
  if (i == 2)
  {

    Derecha(Velocidad);
  }
  if (i == 3)
  {

    Derecha(Velocidad);
  }
}
```

## Terminando con el Robot evasor de obstáculos

Durante el curso aprendimos los fundamentos necesarios para desarrollar en Arduino.

El reto de esta clase es terminar de programar tu robot para que gire y evite todos los obstáculos que tenga en frente usando toda clase de sensores.
