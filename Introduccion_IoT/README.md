<h1>Introducción al IoT</h1>

<h3>Karolina Ladino</h3>


<h1>Tabla de Contenido</h1>

- [1. Introducción al IoT](#1-introducción-al-iot)
  - [¿Qué es el IoT? y El IoT de consumo personal](#qué-es-el-iot-y-el-iot-de-consumo-personal)
    - [Tipo consumidor](#tipo-consumidor)
    - [Sectores comerciales.](#sectores-comerciales)
  - [IoT en industria e infraestructura](#iot-en-industria-e-infraestructura)
    - [Tipo industrial](#tipo-industrial)
    - [ROS](#ros)
  - [Lo necesario para tu proyecto IoT](#lo-necesario-para-tu-proyecto-iot)
  - [Materiales y herramientas necesarias](#materiales-y-herramientas-necesarias)
  - [El impacto de mi proyecto IoT](#el-impacto-de-mi-proyecto-iot)
- [2. Hardware a utilizar en proyectos de IoT](#2-hardware-a-utilizar-en-proyectos-de-iot)
  - [Tipos de sensores](#tipos-de-sensores)
  - [Conexión física de sensores](#conexión-física-de-sensores)
  - [Tipos de actuadores](#tipos-de-actuadores)
  - [Voltaje y corriente necesarios para el funcionamiento de un actuador](#voltaje-y-corriente-necesarios-para-el-funcionamiento-de-un-actuador)
  - [Tipos de controladores y sus características](#tipos-de-controladores-y-sus-características)
  - [Los super poderes de la Pi](#los-super-poderes-de-la-pi)
  - [Instalación del sistema operativo](#instalación-del-sistema-operativo)
  - [Configuración inicial de la Pi, comandos útiles de la consola de Linux](#configuración-inicial-de-la-pi-comandos-útiles-de-la-consola-de-linux)
  - [Conecta tu Pi a internet](#conecta-tu-pi-a-internet)
  - [Conexión por SSH](#conexión-por-ssh)
  - [Arduino o Raspberry Pi ¿Cuál escoger?](#arduino-o-raspberry-pi-cuál-escoger)
  - [La raspberry es un computador completo:](#la-raspberry-es-un-computador-completo)
  - [Con respecto a las salidas:](#con-respecto-a-las-salidas)
  - [Tipos de comunicaciones básicas entre dispositivos](#tipos-de-comunicaciones-básicas-entre-dispositivos)
- [3. Proyecto del Curso](#3-proyecto-del-curso)
  - [Contexto del problema ¿Cómo lo solucionamos?](#contexto-del-problema-cómo-lo-solucionamos)
  - [Materiales que necesitas](#materiales-que-necesitas)
  - [Resumen de Materiales](#resumen-de-materiales)
  - [Planeemos el circuito y conectemos sensores](#planeemos-el-circuito-y-conectemos-sensores)
  - [Conexión de placa Wemos](#conexión-de-placa-wemos)
  - [Conexión de placa Node](#conexión-de-placa-node)
  - [Escribamos el código](#escribamos-el-código)
  - [Subir código y asegurar comunicaciones](#subir-código-y-asegurar-comunicaciones)
  - [Inicie Arduino y abra la ventana de Preferencias.](#inicie-arduino-y-abra-la-ventana-de-preferencias)
  - [Archivos para preparar Bot.py y Upgrade.sh](#archivos-para-preparar-botpy-y-upgradesh)
  - [Trámite de ingreso a la API de Twitter y configuración de Tweetpy](#trámite-de-ingreso-a-la-api-de-twitter-y-configuración-de-tweetpy)
  - [¡Probemos!](#probemos)
- [4. Cierre](#4-cierre)
  - [Conclusiones](#conclusiones)
  - [Glosario de términos del curso](#glosario-de-términos-del-curso)

# 1. Introducción al IoT

## ¿Qué es el IoT? y El IoT de consumo personal

En este curso la profesora Karolina Ladino te mostrará los elementos principales y los asombrosos usos que le puedes dar al “IoT” (internet de las cosas).

Desde cosas básicas como tu teléfono, reloj o ropa hasta vehículos, transporte público o construcción estamos rodeados por el internet de las cosas. Por medio de actuadores (luces, sonidos, alarmas, etc) podemos tomar decisiones importantes.

Desde el año 1982 con dispensadores de Coca Cola, pasando por RFID (Radio-frequency identification) en 1999 y llegando a asistentes personales (Amazon Alexa) en los recientes años, el IoT no ha parado de evolucionar.

### Tipo consumidor

Personas usando el IoT en su vida.

En hogares y oficinas (Consumo inteligente)
Wearables (Monitoreo de adultos mayores)
Tipo comercial

### Sectores comerciales.

Cuidado médico (medición rápida y más precisa)
Transporte (parqueo inteligente)
Construcción y automatización de hogares (Control de consumo energético)

- [Que-es-el-iot-y-el-iot-de-consumo-personal.pdf](https://drive.google.com/file/d/18HdfjIImHjdQa3B_AqtcLDVue4zt-ect/view?usp=sharing)

## IoT en industria e infraestructura

### Tipo industrial

Soluciones de impacto macro, manejo de muchísimos datos.

Manufactura, Optimización en cadena de suministros
Agricultura, Predicción de cosechas
Tipo infraestructura

Soluciones en operaciones en relación directa con humanos.

Ciudades, mejora del tráfico
Manejo de energía, Smart grid
Monitoreo ambiental, predicción de desastres

- [Iot-en-industria-e-infraestructura.pdf](https://drive.google.com/file/d/1euJj0RrDRRv3vnqsdUut3Dkpiwd4SlEs/view?usp=sharing)

 ### ROS

Desde pequeños juguetes en los estantes de los supermercados hasta transportistas de materiales del tamaño de un edificio, los robots de hoy en día tienen todas las formas y tamaños. Y gracias a una variedad de avances en sus componentes y tecnologías, también se están volviendo más capaces y rentables.

Los robots pueden ser el mejor dispositivo de borde inteligente. Un robot necesita observar el mundo usando muchos sensores y razonar sobre lo que ha observado para desarrollar un plan de acción. Luego debe realizar esas acciones de forma rápida y segura, a menudo con conectividad a Internet limitada.

Uno de los marcos más populares para construir esa funcionalidad compleja es el Sistema Operativo Robot (ROS) mantenido por Open Robotics , un marco robótico maduro y de código abierto utilizado en todo el mundo para aplicaciones comerciales y de investigación. La interoperabilidad, el cuerpo de muestras y la comunidad de ROS lo hacen valioso para construir una solución automatizada.
## Lo necesario para tu proyecto IoT

  - Bases necesarias
  - Identificar las situaciones
  - Planear los materiales
  - Elegir el controlador a usar
Es crucial encontrar el mejor contexto para usar tu proyecto IoT. Si tienes que monitorear a un gato, ¿es mejor usar un rastreador o un sistema de cámaras?

Tener siempre presente: Hardware (controladores), software(código) y periféricos (Sensores y actuadores).

- [lo-necesario-para-tu-proyecto-iot.pdf](https://drive.google.com/file/d/1BCfMXogJ3_KeSP0m0TsO_F878eCYIYjQ/view?usp=sharing)

## Materiales y herramientas necesarias

- Pinzas (punta de cocodrilo, con cortafríos)
- Cortafríos
- Tercera mano
- Destornilladores
- Soldador electrónico
- Soldadura
- Crema para soldar
- Jump wire (jumper)
- Multímetro

> Me gustaria resaltar que la pasta para soldar “Flux” no se usa para limpiar superficie a soldar, se usa como una forma de distribuir el calor en el estaño “Aleacion de plomo, estaño y demas metales” Y a su vez eliminando el oxido de este, es buena idea utilizarlo en la punta del cautin de vez en cuando para eliminar la escoria de previas soldaduras, y tambien el estaño debe tener un porcentaje de flux y estaño en el cual permita su facil manejo, esto es el equivalente a en metalurgia utilizar borax al momento de unir dos piezas mediante golpe de martillo.

- [materiales-y-herramientas-necesarias.pdf](https://drive.google.com/file/d/1m_RDu-52B9tAx2ODZ6qyOMSv3wQr_C7q/view?usp=sharing)

## El impacto de mi proyecto IoT

Tu proyecto está aportando a hacer más inteligente tu hogar, oficina, ciudad, etc.

Define un objetivo `claro`. Saber qué necesitas y qué harás durante un determinado tiempo.

La data es lo` principal`. La adquisición de datos (tiempo o frecuencias), almacenamiento, visualización o tratamiento. Teniendo en cuenta esto, puedes saber el número de dispositivos(sensores o actuadores) en nuestro proyecto.


# 2. Hardware a utilizar en proyectos de IoT

## Tipos de sensores

En esta clase la profesora Karolina Ladino nos explica que es un sensor y sus clasificaciones para usarlos perfectamente en tus proyectos.

Un sensor es un dispositivo electrónico que puede tomar una entrada física y después de un fenómeno de conversión nos va a entregar una salida eléctrica.

El internet de las cosas nos rodea a todos. Desde un reloj hasta un sistema de transporte, el IoT será cada vez más relevante para nuestras vidas. No seas solo un espectador, usa el internet de las cosas a tu favor, ¡transforma tu entorno y crea proyectos asombrosos!

+ Clasificación 1

  - Activo
    
    - Necesita ser energizado

  + Pasivo
    
    + No necesita ser alimentado

  - Clasificación 2

    - Detección eléctrica
    - Detección Biológica
    - Detección química
    - Detección de radioactividad
    - Conversión fotoeléctrica
    - Conversión termoeléctrica
    - Conversión electroquímica
    - Conversión termo-óptica ,etc
  
  - Clasificación 3

    - Analógica
    
      - Antes pensaba que lo analógico era lo viejito , ahora podría definir que lo analógico tiene muchos valores y no se pude saber con exactitud cuantos datos tienen que ser y si llegaron bien o no. Son señálales infinitas en el tiempo.

    - Digital
    
      - Son paquetes de datos 0 y 1 y estos paquetes si están contados y el sistema sabe que faltan datos y por eso el reproductor de video se para.

- [Tipos-de-sensores.pdf](https://drive.google.com/file/d/11eRPaA8GHSeykTb_fEyyMULxSfhtZ0xn/view?usp=sharing)

## Conexión física de sensores

Al comprar un sensor ten presente siempre su referencia.

Pines:
  - VSS/ 5V/ PWR (power)
  - GND (tierra)
  - Out / Output
Busca la especificación técnica de cada sensor para poder comparar sus requerimientos. La idea del datasheet es que acompañe siempre el desarrollo de tu proyecto (desde antes de comprar los sensores)


- [conexion-fisica-de-sensores.pdf](https://drive.google.com/file/d/1KY4TX012jEBqx2vYTCR5WBTp8Swri0yS/view?usp=sharing)
- [DHT22](https://www.sparkfun.com/datasheets/Sensors/Temperature/DHT22.pdf)
- [SEenso](https://www.olimex.com/Products/Components/Sensors/Gas/SNS-MQ135/resources/SNS-MQ135.pdf)

## Tipos de actuadores

Los actuadores toman órdenes que el hardware ya procesó por medio de los sensores.
En otras palabras después de que nosotros decidamos que hacer con los datos recopilados y procesados, los actuadores empiezan su trabajo.

Depende de la acción que necesitemos realizar. Puede ser una bombilla, una sirena, un motor, etc.

**Clasificación**

  - Alimentación

  - AC (corriente alterna) / DC (corriente directa) => IoT

**Tipo**

  - Inductivo (electromagnetismo)
  - Rotativo (motores)
  - Sonido/luz (generadores de sonido y luz)

Para escoger tus actuadores piensa en el verbo a ejecutar (girar, brillar, sonar, cerrar, etc).

- [tipos-de-actuadores.pdf](https://drive.google.com/file/d/1QerBfpBfMtoDf75R19Mp7IQNg9BDdTDL/view?usp=sharing)

## Voltaje y corriente necesarios para el funcionamiento de un actuador

Para medir el **voltaje**, hazlo en paralelo a tu fuente. Y empieza desde el voltaje más pequeño, gradualmente.

Para medir la **corriente**, hazlo en serie. Debes romper el circuito y luego unir tu multímetro al circuito.

Recuerda que si no hay referencia (datasheet), realizamos la prueba de alimentación de nuestro actuador.

> Los marranitos se llaman “adaptadores de voltaje”

- [voltaje-y-corriente-necesarios-para-el-funcionamiento-de-un-actuador.pdf](https://drive.google.com/file/d/1uzG_7cBfLPUVqZdmhD54yDT7PeGvAaDw/view?usp=sharing)

## Tipos de controladores y sus características

Los PLC´s por lo general se usan en la industria, ya que el coste es algo elevado, un promedio de 500USD mas/menos. hay PLC´s escalables, quiere decir que puedes aumentar las entradas y salidas, ponerle módulos de comunicación rs232, rs485, tarjetas para comunicación ethernet, puedes crear una red conectando varios PLC´s, una red `Ethernet TC/IP, Profinet, RS-link`, dependiendo de la marca, los más comerciales, creo, son siemens, Allen-Bradley, Mitsubishi, omron, aunque hay muchos más.

Con un `PLC` (Programmable Logic Controller) podemos programar todas las tareas que realiza la máquina.

Características:

  - Robusto
  - SCL
  - Usado en grandes máquinas y procesos"

Los `RTU` (Remote Terminal Unit):

  - Cuentan con microcontroladores
  - Son conectados directamente con los PLC de control

El concepto maestro - esclavo habla de esta interacción entre un PLC y un RTU. Entonces los RTU son nuestros esclavos que son controlados por un PLC maestro.

`SBC` (Single Board Computer) es un computador que está en una board pequeña con características limitadas pero poderosas.

  - Cuenta con I/O listas para conexión
  - Memoria
  - Procesador
  - Comunicaciones

- [tipos-de-controladores-y-sus-caracteristicas.pdf](https://drive.google.com/file/d/1QfKzVO68uyIbjI1iaJXyLcy9FttEbVwk/view?usp=sharing)
- [Raspberry Pi — Teach, Learn, and Make with Raspberry Pi](https://www.raspberrypi.org/)
- [electronica.asi](https://www.facebook.com/electronica.asi/)

## Los super poderes de la Pi

- Es importante que nuestra Raspberry Pi tenga un disipador.
- Ten cuidado con la estática, manipúlala desde la parte plástica.
- Tiene varias entradas para nuestro periféricos más comunes.

Tips:

  - Compra una Raspberry Pi de 16 GB de memoria.
  - Revisa muy bien los puertos.
  - Agrega un base de acrílico.

- [Raspberry Pi — Teach, Learn, and Make with Raspberry Pi](https://www.raspberrypi.org/)
- [Raspberry Pi 3 Model B - Raspberry Pi](https://www.raspberrypi.org/products/raspberry-pi-3-model-b/)
- [Raspberry Pi GPIO Pinout](https://pinout.xyz/)

## Instalación del sistema operativo

Vamos a instalar el sistema operativo (SO) de nuestra Raspberry Pi, por favor sigue estos pasos para asegurar su correcto funcionamiento.

Nota: Algunos proveedores te permiten comprar tu Pi con una SD pre-instalada, si este es el caso solo debes insertar la SD en el puerto alojado a un extremo de la Pi (apóyate de la imagen), luego debes conectarle un monitor HDMI, mouse, teclado y por último conectarla a energía. Ahí podrás saltar al paso 6 para continuar con el setup.

Si compraste tu SD (Clase 10) y tu Pi por aparte, vamos a hacer lo siguiente:

1. Descargar el NOOBS.zip desde la siguiente página, clic en Download ZIP: https://www.raspberrypi.org/downloads/noobs/


![](https://i.ibb.co/Syj1r3t/1pi.jpg)

2. Descomprime la carpeta en una nueva carpeta, donde puedas ver todos los archivos que este contiene

3. Formatear tu SD en formato FAT32, vamos a ver la manera recomendada para cada formato:

  - Windows: Te recomiendo usar la herramienta sdcard.org, que descargas, instalas, das permisos y abres con la SD dentro, le das un nombre ‘BOOT’ y click en Format.

  - Mac OS: Esta herramienta sdcard.org, también está disponible para este SO, así que la descargas, instalas y abres con la SD dentro, le das un nombre ‘BOOT’ y click en Format.

  - Linux: Las instrucciones detalladas fueron desarrolladas por Norman Dunbar y puedes consultarlas en el siguiente link: http://qdosmsq.dunbar-it.co.uk/blog/2013/06/noobs-for-raspberry-pi

4. Ya con la SD limpia y lista en su formato, podemos copiar los contenidos de la carpeta del paso 2 dentro de la SD, recuerda que debes copiar el contenido (todos los archivos) y no la carpeta. Todos los archivos deben estar en la raíz de la SD.

5. Cuando termine de copiar, podremos expulsar correctamente la SD de nuestro computador e insertarla en la Pi, recuerda hacer esto con la Pi sin energía, totalmente apagada y desconectada de la fuente principal, luego de insertarla podremos prender/conectar la fuente de energía de nuevo.

6. Al iniciar nuestra Pi nos encontraremos con la siguiente pantalla, aquí contamos con todas estas opciones:

  - Raspbian: SO basado en Debian y optimizado para el hardware de la Pi

  - LibreELEC: Basado en Kodi, optimizado para el stream de vídeo

  - OSMC: Basado en Linux y Kodi, te permite estar conectado y ser tu media center

  - Recalbox: Te permite jugar varios tipos videojuegos y plataformas en tu Pi

  - Lakka: Distribución de bajo peso para correr todos los juegos que quieras, es una retro consola muy poderosa

  - RISC OS: Es un SO britanico, diseñado para procesadores ARM

  - Screenly OSE: Liviano e ideal para planeación

  - Windows 10 IoT Core: Windows en tus manos

  - TLXOS: Es un SO Australiano, diseñado, tiene licencia de pago luego de 30 días de periodo de prueba

Cada uno tiene un objetivo y puedes escoger el que necesites, pero para nuestro proyecto seleccionaremos Raspbian , luego damos click en Install (i) y esperamos un buen rato.

![](https://i.ibb.co/0tPspqM/2pi.jpg)

7. Cuando termine la instalación te pedirá que la reinicies y le darás OK, luego iniciará el sistema operativo.

8. Cuando inicie veremos el escritorio de la Pi, se abrirá una pestaña de configuración, que completamos con la información de tu localización y tipo de teclado.

Ahora contamos con nuestra Pi lista para trabajar. En la siguiente clase vamos a configurar la BIOS de nuestra Pi.


## Configuración inicial de la Pi, comandos útiles de la consola de Linux

| Comando |	Función |       |
| -------| :------: | ----- |
| sudo |  shutdown -h now	| Apaga |
| sudo |  reboot -h now	| Reinicia |
| sudo |  raspi-config	| Abre la configuración |
| ls | 	Muestra una lista del directorio donde estoy |
| cd | 	Cambiar de directorio |
| cd .. | 	Cambiar de directorio (ir al anterior) |
| cat | 	Muestra lo que hay adentro del archivo |
| nano | 	Abre un director de texto directamente en la consola |

- [Essencial-command-pi.pdf](https://drive.google.com/file/d/16ZbPJXhTZWeea7A-s7hEWMXPV1EABOQq/view?usp=sharing)

## Conecta tu Pi a internet

| Comando |	Función |
|-------|-------|
| Sudo apt-get update	| Actualiza los paquetes y versiones |
| Sudo apt-get upgrade |	Instala los nuevas nuevas versiones de los paquetes.|

```bash
sudo nano /etc/wpa_supplicant/wpa_supplicant.conf

sudo nano /etc/wpa_supplicant/wpa_supplicant.config

# dentro del editor creamos el siguiente scrip

network ={
ssid = "nombre de la red"
psk = "clave de acceso"
key_mgmt = WPA-PSK
}
```

## Conexión por SSH

```bash
sudo raspbeyrypi-config
# Configurar ssh
# yes activade / enable
# local tzdata
# hostname =>  raspberrypi
# password 
# finalizar 
sudo reboot now
```

Conectase a la ip

```bash
hostname

# direccion ip
iconfig

# conecion ssh
ssh pi@192.168.10.52
```

## Arduino o Raspberry Pi ¿Cuál escoger?

Los Microcontroladores poseen entradas y salidas pero no tanta capacidad de procesamiento. Lo que se hace normalmente es que tengan acceso a internet para usar su capacidad de conectividad y no tanto su memoria.

Por otro lado, la `Raspberry Pi` tiene más capacidad de procesamiento y memoria. Su funcionamiento es más complejo. Depende de tu proyecto puedes usar arquitecturas maestro - esclavo o solamente tu Raspberry Pi.

La raspberry es un computador completo:
--
puede tener diferentes sistemas operacionales (linux en distintas versiones, windows 10 iot, unix, chromiun y android)

- Memoria RAM tiene entre 512MB y 1 GB

- Almacenamiento depebde de la micro SD 32GB, 64GB…

- tiene de por si comunicaciones como wifi, bluetooth, ethernet y serial.

- puede manejar directamente teclado, mouse, sonido y pantalla.

- puede manejar cualquier dispositivo usb.

- puede ser programable en cualquier lenguaje: c++, java, python…

- Los sensores de entrada deben ser digitales one_wire, I2C, SPI o serial.

- Los sensores de entrada no pueden ser analogos

Con respecto a las salidas:
--
El manejo de PWM no es tan preciso, el manejo de servomotores es limitado.
De otro lado, los arduinos

- Son microcontroladores sin sistema operativo
- Tienen muy poca memoria maximo 512kB
- “El almacenamiento es con EEPROM” de maximo 8kB
- se programan en assembler o una version de C++
- tienen entradas analogas
- el manejo de PWM en varias salidas es muy aceptable


En conclusion: depende del proyecto, depende de los sensores a utilizar, de los dispositivos a controlar y la forma de comunicacion.

La opcion maestro-esclavo me parece que en muchos casos es la mejor.

## Tipos de comunicaciones básicas entre dispositivos

- Wifi
- Bluetooth/BLE
- I2C: SDA/SLC
- SPI: SCLK, MOSI (Master Output Slave Input), MISO, SSTE
- USB/Serial
- Ethernet
- UART
- CAN

> El I2c permite conectar multiples sensores con solo dos puertos siempre y cuando sean compatibles con este protocolo.

![](https://i.ibb.co/S64sPGd/protocolos.png)

- [tipos-de-comunicaciones-basicas-entre-dispositivos.pdf](https://drive.google.com/file/d/1jJkWA93Oldxpy_PlIkcO-j4FW-tRShZC/view?usp=sharing)

# 3. Proyecto del Curso

## Contexto del problema ¿Cómo lo solucionamos?

Vas a crear un medidor de calidad de aire, temperatura y además ¡usarás un bot para que te informe por Twitter!

Nuestro objetivo es evidenciar la situación de la contaminación.
Vamos a actuar haciendo un Tweet.

> Proyecto de este curso es un “Medidor de calidad de aire, temperatura y humedad”, que a través de un bot manda tweets de cada lectura.

- [contexto-del-problema-como-lo-solucionamos.pdf](https://drive.google.com/file/d/1eDbOVS_LQSAVZbggaf97MegW1RjrT7qn/view?usp=sharing)

## Materiales que necesitas

- ESP8266/Wemos D1/NodeMCU Raspberry Pi
- Sensores
- Adaptadores de energía
- Material de encapsulado(puede ser acrílico) y herramientas de proyecto

Resumen de Materiales
--
  - ESP8266/Wemos D1/NodeMCU
  - Raspberry Pi
  - Sensores
    - dht22
    - mq135
  - Adaptadores de energía
  - Material de encapsulado(puede ser acrílico)
  - herramientas de proyecto

## Planeemos el circuito y conectemos sensores

Ten presente que la Pi es el maestro y los Wemos son nuestros esclavos(en donde nuestros periféricos estarán conectados y enviarán la información a la Pi).

Conexión de placa Wemos
--

[![Wemos-Done.jpg](https://i.postimg.cc/6Qg6z4km/Wemos-Done.jpg)](https://postimg.cc/xkGS18Tv)

Conexión de placa Node
--

[![Node-Done-Schematic.jpg](https://i.postimg.cc/MGMqcKnb/Node-Done-Schematic.jpg)](https://postimg.cc/HJgfRm4V)

## Escribamos el código

La librería DHT viene preparada para entregar el dato de temperatura en Grados Fahrenheit, el siguiente código lo hace:
```c
f = dht.readTemperature(true);
```
si no se envian parámetros, como lo comentó la profe se entregan datos en grados centígrados.

- [Arduino - Software](https://www.arduino.cc/en/Main/Software)

## Subir código y asegurar comunicaciones

Debes de ir el IDE de Arduino a tools -> Board -> Boards Manager y ahí buscar 8266, se te agregan las placas que usamos en el curso y además la librería. Si no te funciona por ese lado ve a Sketch -> Include Library -> Manege Libraries y buscar `“ESP8266WiFi.h”` y las librerías que te hagan falta.

Inicie Arduino y abra la ventana de Preferencias.
--
Ingrese https://arduino.esp8266.com/stable/package_esp8266com_index.jsonen el campo URL de Board Manager adicional. Puede agregar varias URL, separándolas con comas.

Instale en Herramientas>Administrador de librerias> ESP8266, tambien DHT libreria.

Abra Boards Manager desde Herramientas> Menú de placa e instale la plataforma esp8266 generic(y no olvide seleccionar su placa WeMos desde Herramientas> Menú de placa después de la instalación).

## Archivos para preparar Bot.py y Upgrade.sh

En la clase anterior encontraste un archivo llamado Code.zip que incluye una carpeta llamada /Code/, la cual contiene dos códigos importantes:

1. `Bot .py:` Este es el script de nuestro bot que revisaremos en la siguiente clase, lo estudiaremos línea por línea para entender nuestras conexiones y el manejo de nuestra API, el texto que enviamos y cómo adquirimos la información de los dos esclavos.

2. `Python Upgrade .sh:` En este script encontrarás lo necesario para actualizar tu versión de Python a 3.7.2, se demora un buen tiempo porque debe ejecutar todos los test de la versión

Esta carpeta contiene 1 archivo adicional que contiene las sentencias de nuestras llaves a la API de Twitter. Solo necesitas copiar y pegar una vez en la creación de nuestro bot con Tweepy, esto lo verás en la clase Trámite de ingreso a la API de Twitter y configuración de Tweetpy.

## Trámite de ingreso a la API de Twitter y configuración de Tweetpy

```bash
nano .profile
# pegamos laskeys de twiteter nos genero
cat .profil

# Instalar paquetes
pip install tweepy
sudo apt-get install python-requests

# Comprobamos que tenemos las dependencias
cd Code/
ls
python3
sh Python\ Upgrade.sh
nano bot.py
```

## ¡Probemos!

Comandos importantes:

```bash
chmod +x bot.py
./bot.py
```

Línea de código agregada al inicio del `bot.py`


```bash
#!/usr/bin/env python3

Comandos importantes:
sudo crontab -e

Líneas de código agregadas al crontab:
SHELL = “/bin/bash”

53 22 * * * source /home/pi/.profile && /usr/bin/python3 /home/pi/bot.py
```

- [crontab.guru - the cron schedule expression editor](https://crontab.guru/)
- [marcoschwartz | aREST](https://github.com/marcoschwartz/aREST)

# 4. Cierre

## Conclusiones

En este curso aprendiste desde qué es el internet de las cosas a nivel micro hasta una implementación de un sensor de aire que se comunica por Twitter.

Te recomiendo muchísimo un libro: https://enchantedobjects.com/#/enchanted-objects/

Ahora es tu turno de crear proyectos asombrosos ¡Experimenta y crea ese proyecto con IoT que siempre quisiste hacer!

## Glosario de términos del curso

**`Torque:`** Momento de fuerza o capacidad de aplicar una fuerza a un punto rígido o cuerpo pesado.

**`RPM:`** Revoluciones por minuto, número de vueltas por minuto que puede dar un motor.

**`Voltaje:`** Cantidad de voltios que necesita un dispositivo para funcionar. Diferencia de potencial es la presión necesaria para provocar el flujo de corriente o electrones, se mide en Voltios (V).

**`Corriente:`** Cantidad de electricidad, es el flujo de electrones en un material conductor, se mide en amperios (A).

**`Amperaje:`** Valor de la corriente en algún dispositivo.

**`Resistencia:`** Oposición al flujo eléctrico en un conductor.

**`PLC:`** Programmable Logic Controller, dispositivo electrónico o computadora digital de tipo industrial para automatización de procesos en la industria.

**`RTU:`** Remote Terminal Unit, dispositivo basado en microprocesador, obtiene señales independientes y envía la misma a salas de control o PLC.

**`SBC:`** Single Board Computer, es una computadora completa en un solo circuito, tiene un microprocesador, RAM, I/O, conexión a pantalla, puertos USB y todo lo demás necesario para ser un computador funcional.

**`I/O:`** Inputs/Outputs, también conocido como E/S Entradas/Salidas, son los puertos usados para actuar o adquirir información en boards de desarrollo de hardware.

**`PCB:`** Printed Circuit Board, o Placa de circuito impreso, es una superficie diseñada y construida con caminos, pistas o buses de algún material conductor que permite comunicar dispositivos y minimizar el espacio de uso de los controladores en diseños específicos. Se pueden construir manualmente o tercerizar su desarrollo.

**`SoC:`** System on a Chip, desarrollo de controladores/procesadores que integren todo lo necesario para construir y acceder a un sistema completo en su board.

**`Bus de datos:`** Es un sistema que se encarga de transferir datos entre componentes digitales.

**`BIOS:`** Basic Input/Output System, es un software que es capaz de localizar y reconocer todos los dispositivos necesarios y conectados a un computador para el inicio de su sistema operativo.

**`WiFi:`** Tecnología de comunicación inalámbrica que permite conectar dispositivos a internet.

**`Bluetooth:`** Es una especificación en redes inalámbricas que permite transmisión de voz y datos entre diferentes dispositivos, mediante la radiofrecuencia segura de 2.4 GHz.

**`I2C:`** Es un puerto y protocolo de comunicación serial que define la trama de datos y conexiones físicas para transferir con dos conexiones, SDA y SCL.

**`SDA:`** Serial Data, puerto del protocolo de comunicación I2C.

**`SCL:`** Serial Clock, puerto del protocolo de comunicación I2C.

**`SPI:`** Serial Peripheral Interface, es un estandar de comunicaciones entre circuitos integrados. Cuenta con los puertos SCLK (Clock), MOSI (Master Output, Slave Input), MISO (Master Input, Slave Output), SS/Select (Selection).

**`RX:`** Receptor de señal.

**`TX:`** Transmisor de señal.


