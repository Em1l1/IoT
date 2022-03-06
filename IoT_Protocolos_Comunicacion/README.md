<h1>IoT: Protocolos de Comunicación</h1>

<h3>Eduardo Contreras</h3>


<h1>Tabla de Contenido</h1>

- [1. Conceptos Básicos](#1-Conceptos-Básicos)
  - [Bienvenida al curso](#Bienvenida-al-curso)
  - [Espectro electromagnético y qué es radiofrecuencia](#Espectro-electromagnético-y-qué-es-radiofrecuencia)
  - [Clasificacion de radiofrecuencia](#Clasificacion-de-radiofrecuencia)
  - [Regulación de la radiofrecuencia](#Regulación-de-la-radiofrecuencia)
  - [¿Qué son las Telecomunicaciones?](#¿Qué-son-las-Telecomunicaciones?)
  - [Halfduplex y Fullduplex](#Halfduplex-y-Fullduplex)
  - [Clasificación de transmisiones: Upstream y Downstream](#Clasificación-de-transmisiones-Upstream-y-Downstream)
  - [Link budget](#Link-budget)
  - [Con ciertas características, ¿Habría conexión en el sistema?](#Con-ciertas-características-¿Habría-conexión-en-el-sistema?)
- [2. Alto data rate](#2-Alto-data-rate)
  - [Wi-fi](#Wi-fi)
  - [Bluetooth](#Bluetooth)
  - [Redes celulares](#Redes-celulares)
- [3. LPWANs](#3-LPWANs)
  - [NB-IoT](#NB-IoT)
  - [Consideraciones para implementación de NB-IoT](#Consideraciones-para-implementación-de-NB-IoT)
  - [LoRaWAN](#LoRaWAN)
- [4. Reto 2](#4-Reto-2)
   [¿Qué usarías para monitorear la posición GPS de un vehículo? y ¿Qué - usarías para monitorear datos en campo?](#¿Qué-usarías-para-monitorear-la-posición-GPS-de-un-vehículo?-y-¿Qué-usarías-para-monitorear-datos-en-campo?)
- [5. Diseño](#5-Diseño)
  - [Arquitectura de nodos](#Arquitectura-de-nodos)
- [6. Introducción a la práctica](#6-Introducción-a-la-práctica)
  - [Instalación de framework ESP32 e instalación de framework SAMD21](#Instalación-de-framework-ESP32-e-instalación-de-framework-SAMD21)
  - [Qué es una interrupción](#Qué-es-una-interrupción)
- [7. Práctica de WiFi](#7-Práctica-de-WiFi)
  - [Prueba de señal Wi-fi](#Prueba-de-señal-Wi-fi)  
  - [Protocolo HTTP desde un microcontrolador](#Protocolo-HTTP-desde-un-microcontrolador)
  - [Conectando sensores y actuadores al microcontrolador](#Conectando-sensores-y-actuadores-al-microcontrolador)
  - [Preparación de aplicación para recibir datos](#Preparación-de-aplicación-para-recibir-datos)
  - [Programación por eventos de un microcontrolador](#Programación-por-eventos-de-un-microcontrolador)
  - [Configuración de eventos del microcontrolador](#Configuración-de-eventos-del-microcontrolador)
  - [Conexión de aplicación](#Conexión-de-aplicación)
- [8. Práctica con LoRa](#8-Práctica-con-LoRa)
  - [¿Cuál es el stack de LoRaWAN?](#¿Cuál-es-el-stack-de-LoRaWAN?)
  - [Creando tu propio gateway](#Creando-tu-propio-gateway)
  - [Ensamblado de gateway](#Ensamblado-de-gateway)
  - [Pon a andar tu gateway de LoRa](#Pon-a-andar-tu-gateway-de-LoRa)
  - [Creando tu Stack de LoRa](#Creando-tu-Stack-de-LoRa)
  - [Conecta tu nodo a internet](#Conecta-tu-nodo-a-internet)
  - [Integrando datos a un dashboard](#Integrando-datos-a-un-dashboard)
  - [Terminando de implementar nuestro stack de LoRa](#Terminando-de-implementar-nuestro-stack-de-LoRa)
  - [BugFixing nuestro stack de LoRa](#BugFixing-nuestro-stack-de-LoRa)
  - [Ensamblando el nodo de LoRa](#Ensamblando-el-nodo-de-LoRa)
  - [Probando LoRa en nuestro Dashboard](#Probando-LoRa-en-nuestro-Dashboard)
  - [Prácticas con tarjetas MKR](#Prácticas-con-tarjetas-MKR)
- [9. Cierre del curso](#9-Cierre-del-curso)
  - [Cierre del curso](#Cierre-del-curso)

# 1. Conceptos Básicos
## Bienvenida al curso

Bienvenido al Curso

## Espectro electromagnético y qué es radiofrecuencia

Espectro Electromagnético: La fuerza electromagnética es una de las 4 fuerzas fundamentales del universo. Los humanos hemos aprendido a modificarla para comunicarnos a través de ella y hemos clasificado desde la onda que tiene menos energía a la que tiene más, conformando así el espectro.

**Radiofrecuencia**: Porción del espectro con menos energía.

![img](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b3/EM_Spectrum_Properties_es.svg/1280px-EM_Spectrum_Properties_es.svg.png)

## Clasificacion de radiofrecuencia

Los hertz son la cantidad o frecuencia de perturbaciones en una onda electromagnética. Hay que tener cuidado de no saturar un canal de ondas electromagnéticas ya que tenderán a anularse.

**3 KHz - 3000 KHz**

VLF o very low frequency (3-30 KHz). Muy utilizado en submarinos y aviones.
LF o low frequency (30-300 KHz). Utilizado por militares y radioaficionados.
MF o medium frequency (300-3000 KHz). Asignado a las ondas de radio AM.

**3 MHz - 3000 MHz**

HF o high frequency (3-30 MHz). Usado en sistemas mundiales de ayuda y seguridad militar.
VHF o very high frequency (30-300 MHz). Sirve para radio FM y televisión analógica.
UHF o ultra high frequency (300-3000 MHz). Aquí se ubican GPS, red celular y WiFi.

**3 - 300 GHz**

SHF o super high frequency. (3-30 GHz). Utilizado en los satélites y WiFi.
EHF o extremely high frequency (30-300 GHz). Utilizado en radiotelescopios y astronomía.

Las clasificaciones nos sirven para definir un uso en específico, regular de manera sencilla y establecer estándares para tener un espectro libre.

![img](https://4.bp.blogspot.com/-uLjbj46U9KA/T7bY_cBhUwI/AAAAAAAAAAM/g8F47EbkWiY/s00-r/bandas-y-frecuencias-para-radioaficionados.png)

![img](https://upload.wikimedia.org/wikipedia/commons/a/a4/Amfm3-en-de.gif)

Radiofrecuencia: Porción del espectro electromagnético
Hertz: Unidad de medida de la frecuencia.(La cantidad de veces en la que se propaga tu perturbación en un segundo,
frecuencia = #número de oscilaciones / tiempo
Ondas electromagnéticas con mucha energía significa mucha frecuencia.
Si saturas un canal con ondas electromagnéticas o mecánicas, las perturbaciones se anularan entre si.
Clasificación de la radiofrecuencia: (Se hace distinción por nombre de frecuencia del espectro)
kHz Kilo Hertz
-VLF [Very low frequency] 3-30 kHz
Usado en los submarinos y aviones
-LF [Low Frequency] 30-300 kHz
Usado en el rango militar y en los radio aficionados.
-MF [Medium Frequency] 300-3000 KHz
Radio AM.
MHz Mega Hertz
-HF [High Frequency] 3-30 MHz
Sistemas mundiales de ayuda y seguridad militar
-VHF [Very High Frequency] 30-300 MHz
Radio FM y televisión analógica.
-UHF [Ultra High Frequency] 300-3000 MHz
GPS, red celular y WiFi
GHz GHz Hertz
-SHF [Super High Frequency] 3-30 GHz
Satélites y WiFi.
-EHF [Extremely High Frequency] 30-300 GHz
Radiotelescopios y astronomía.
IMPORTANCIA DE CLASIFICAR LA RADIOFRECUENCIA:
-Definir un uso específico
-Establecer una regulación más sencilla
-Establecer estándares

![img](https://upload.wikimedia.org/wikipedia/commons/1/10/Espectro_Electromagn%C3%A9tico.JPG)

> frecuencia es la cantidad de perturbaciones de las ondas en un segundo, dichas perturbaciones se modifican en cantidad o forma segun la fuerza que tenga y dicha fuercza es medida en hertz.

## Regulación de la radiofrecuencia

Una banda es un conjunto de frecuencias. Pueden ser muy específicas abarcando rangos muy pequeños o muy grandes. Un ejemplo es el very low frequency que es una banda que va de 3 a 30 KHz.

El ITU o Unión Internacional de Telecomunicaciones es el organismo a nivel mundial encargado de regular las radiofrecuencias.
Bandas licenciadas: Pagas al gobierno por usarlas y son ellos quienes tienen que asegurar una exclusividad. Se buscan comunicaciones más precisas como las redes celulares.

Bandas libres: Cualquiera puede usarlas pero pueden no ser tan precisas. El WiFi es un ejemplo.

El ancho de banda es un rango de frecuencias definido para la transmisión de datos, estas frecuencias viajan por de un medio para el envío de la información.
El ITU es el organismo encargado de regular las radiofrecuencias y establece los usos específicos para cada banda.

> Las bandas licenciadas son pagadas al gobierno para su uso exclusivo como por ejemplo las redes celulares.

>  Las bandas libres están disponibles para que cualquiera las pueda usar como el Wifi.

Extra: No solo las radiofrecuencias utilizan el ancho de banda, las conexiones cableadas también requieren de un ancho de banda, por ejemplo los cables UTP en sus diferentes categorías utilizan diferentes anchos de banda, el cable de teléfono tradicional tiene un ancho de banda de 0.4 mhz  o 400 khz, las frecuencias presentes en la voz van de 100hz a 6khz y para que el dialogo sea entendible estas frecuencias están entre 200hz y 4khz por lo que el ancho de banda disponible en el cable de teléfono tradicional es mas que suficiente para la transmisión de la información.

## ¿Qué son las Telecomunicaciones?

Una telecomunicación es la transmisión y recepción de datos por medio de perturbaciones en el campo electromagnético. Esta puede darse de forma alámbrica o inalámbrica.
Elementos:

Líneas de transmisión

- Emisor / Receptor
- Modulación / Demodulación
- Ruido

> ELEMENTOS:
>
> Analogía con la comunicación humana.
>
> - **Linea de transmisión:** El habla, son ondas mecánicas que se transportan por medio del aire.
> - **Emisor/Receptor:** Los humanos
>   Modulación/Demodulación: El lenguaje. Ejm: FSK, AM, FM,LORA.

**Ruido de disparo:**

El ruido de disparo es un ruido electromagnético no correlacionado, también llamado ruido de transistor, producido por la llegada aleatoria de componentes portadores (electrones y huecos) en el elemento de salida de un dispositivo.

**Ruido de Johnson-Nyquist**

También conocido como ruido termal es el ruido generado por el equilibrio de las fluctuaciones de la corriente eléctrica dentro de un conductor eléctrico, el cual tiene lugar bajo cualquier voltaje, debido al movimiento térmico aleatorio de los electrones.

**Ruido de parpadeo:**

Es una señal o proceso con una frecuencia de espectro que cae constantemente a altas frecuencias con un espectro rosa.

## Halfduplex y Fullduplex

Todos los sistemas de telecomunicaciones son Half-duplex o Full-duplex.

**Half-duplex:** Es una comunicación bidireccional que sólo puede darse una vez en el tiempo. Un ejemplo son los Walkie Talkies con los que sólo una persona puede hablar a la vez. Suele haber una banda con un canal.

**Full-duplex:** Trabaja como las redes celulares y puede recibirse y enviar información todo al mismo tiempo. Suele haber una banda con dos canales.

Para hacer lo anterior posible es necesario el uso de distintos canales que son las frecuencias que están dentro de las bandas que se usan en las conexiones.

- **Frecuencia:** Número de repeticiones por  segundo de una señal.

- **Banda**: Agrupación de frecuencias

- **Canal**: Frecuencias dentro de las bandas  que se emplean durante las conexiones.

- **Sistema HalfDuplex:** Comunicación bidireccional que  puede darse una sola vez en el tiempo, una  persona a la vez. Una sola banda en el canal  que estas empleando. Ejemplo WookiToki.

- **Sistema FullDuplex:** Puedes escuchar algo, pero  también puedes estar mandando algo. Hace  uso de diversos canales. Tienes una  transmisión en cualquier momento en  cualquier dirección.

## Clasificación de transmisiones: Upstream y Downstream

Cuando estamos en sistemas avanzados de telecomunicaciones como WiFi, Bluetooth o las redes celulares, es necesario tener definiciones para saber cuándo estamos transmitiendo información al servidor y cuándo estamos bajando información desde el servidor.

**Upstream y Downstream** clasifican un nodo o una conexión como la compuerta de enlace a internet. El que recibe la perturbación electromagnética la va a decodificar y la subirá a un protocolo de internet conocido.

Las conexiones que van del nodo a internet son upstream y las que van del servidor al nodo son downstream.

**Downstream**
Estos clasifican un nodo o una conexión como la compuerta de enlace a internet, el cual va recibir la información física, la perturbación electromagnética , la va ah decodificar y la va a subir sobre un protocolo de internet.
**Upstream**: Las conexiones que van del nodo a internet
**Downstream**: Las conexiones que bajan de la nube. [La nube genera un comando, llega a nuestra compuerta y genera una transmisión a nuestro nodo]

> Un gateway (puerta de enlace) es un dispositivo que permite interconectar redes con protocolos y arquitecturas diferentes a todos los niveles de comunicación. Su propósito es traducir la información del protocolo utilizado en una red al protocolo usado en la red de destino.

## Link budget

the potency de transmisión normalmente se mide en **Watts** pero en radiofrecuencia se mide en decibeles. Un decibel es una unidad de medida adimensional en escala logarítmica.

Las antenas de transmisión pueden ser resumidas en dos tipos:

- Omnidireccionales: Transmite en todas las direcciones
- Direccionales: Muy común en antenas antiguas de televisión analógica.

Todos los cables tienen pérdidas en decibeles already que no son conductores perfectos y ponen a resistor al paso electrical.

Una onda de radio en el vacío tiene pérdidas muy grandes.

Potencia de transmisión en electromagnetismo [Se mide en W, Watt]
Potencia de transmisión en radiofrecuencia [Se mide en db, decibel]
Como el decibelio es adimensional y relativo, para medir valores absolutos se necesita especificar a qué unidades está referida la medida:
dBm: Cuando el valor expresado en vatios es muy pequeño, se usa el milivatio (mW). Así, a 1 mW (0.001W) le corresponden 0 dBm.
20dBm  -> 0.1W
30dBm  -> 1W
40dBm  ->10W
50dBm  -> 100W
Para los dBm aumenta de 10 en 10, mientras que para los W va multiplicándose por 10. [Decibeles de milli watts]

Tipos de antenas:

- Onmidireccionales: Que transmite hacia todas las direcciones
- Direccionales: Ejm Antena Yagi

**Representación de un sistema de telecomunicación:**

Si los decibeles que llegan son más negativos que los del receptor [Rx] entonces se perdera el mensaje.

Ya que  lo que llega [-109dBm] es mayor que el receptor [-148dBm] se puede recibir correctamente y se va ha decodificar.

> Link Budget es el calculo de las ganancias y perdidas del transmisor a través del medio (cable, antena, espacio, etc) al receptor en un sistema de telecomunicaciones.

## Con ciertas características, ¿Habría conexión en el sistema?

![linkBudget.PNG](https://static.platzi.com/media/user_upload/linkBudget-78cd8b25-7869-46d7-9b0a-cd8b328b2722.jpg)

la comunicación, la ecuación es la siguiente:
30 - 0,5 + 10 - 182,2 - 0,5 = -129,2 dBM
Ya que  -129,2 > -144 entonces la comunicación es posible.
Yo no tengo Android y para hacer la conversión utilicé un sitio web… pero suponiendo que no tenemos internet.
P[W] = (1W 10^(-129,2/10)) / 1000 = 1,202210^-16
La potencia en Watts es: 1,2022*10^-16 W

# 2. Alto data rate
## Wi-fi

La cantidad de bits al transmitir un mensaje depende de la modulación. El ancho de banda es la cantidad de frecuencias que ocupa la perturbación para transmitir un mensaje completo.
WiFi es una de las tecnologías más usadas en todo el mundo y trabaja sobre una frecuencia ISM la cual no está licenciada. Es muy seguro porque las claves están encriptadas.

Su nombre es **IEEE 802.11** y trabaja sobre dos bandas: **2.4 GHz y 5 GHz**.

**Características:**

- Alto ancho de banda
- Uso industrial y doméstico
- Universalidad
- Acceso directo a internet
- CI ya integrados con WiFi
- Buena seguridad
- Banda ISM
- Alto consumo energético
- Stack de red complejo de implementar
- Poca penetración de señal
- Poca sensibilidad

**Modulación:**
En Telecomunicaciones el término modulación engloba el conjunto de técnicas para trasportar información sobre una onda portadora, típicamente una onda senoidal. Estas técnicas permiten un mejor aprovechamiento del canal de comunicación lo que permitirá trasmitir más información simultáneamente o proteger la información de posibles interferencias y ruidos.

Básicamente, la modulación consiste en hacer que un parámetro de la onda portadora cambie de valor de acuerdo con las variaciones de la señal moduladora, que es la información que queremos transmitir. Es decir, se encarga de transportar la señal digital que sale de la computadora, en analógica, que es en la forma que viaja a través de las líneas de teléfono comunes (modula la señal); y a sus vez, el receptor se encarga de “demodular” la señal.

**¿Por qué se modula una señal?**


Para controlar dicha señal y así facilitar la propagación de la señal de información por cable o por el aire, ordenar el espacio radioeléctrico, distribuir canales a cada información distinta.


Para disminuir las dimensiones de las antenas, optimizar el ancho de banda de cada canal evitando interferencias entre canales, proteger a la información de las degradaciones por ruido y definir la calidad de la información trasmitida.


Para modular una señal son utilizados dispositivos electrónicos semiconductores con características no lineales (diodos, transistores, bulbos), resistencias, inductores, capacitores y también combinaciones entre ellos.

## Bluetooth

Bluetooth es bastante conocido y se usa en computadores y celulares conectando teclados, mouse, audífonos, entre otros. Es un conjunto de tecnologías que van desde la 1.0 hasta la 5.0. Trabaja sobre la misma banda ISM de WiFi 2.4 GHz.

Comenzó siendo un protocolo de la IEEE pero ahora el encargado de mantenerlo es Bluetooth Special Interest Group.

**Características:**

- Alto ancho de banda

- Uso industrial y doméstico

- Universalidad

- Versión BLE de bajo consumo

- Red tipo malla

- Distintas versiones

- Banda ISM

- Stack de red complejo de implementar

- No hay acceso directo a internet

- Hay que agregar seguridad

- Compatibilidad obsoleta en ciertos SO

> La potencia de transmisión de la tecnología Bluetooth esta comprendida entre 0 dBm y 20 dBm.

## Redes celulares

Las redes celulares son un conjunto de tecnologías que han evolucionado gracias a una organización llamada **TGPP** que se encarga de establecer los estándares para las tecnologías **1G, 2G, 2.5G, 3G y 4G**.

Las empresas proveedoras deben pagar a los gobiernos un licenciamiento por las redes que van a estar usando ya que se trabaja sobre frecuencias licenciadas para establecer conexiones estables y controlables.

**Características:**

- Conectividad mundial
- Conectividad a internet directa
- Seguridad incorporada
- Implementación sencilla
- Gran disponibilidad
- Bandas licenciadas
- Uso alto de energía
- Módulos que pueden ser grandes y caros
- Cargos mensuales
- La cobertura puede variar
- Rangos de frecuencias que cambian en diferentes países

>  El 3GPP (3rd Generation Partnership Project: Proyecto Asociación de Tercera Generación) es una colaboración de grupos de asociaciones de telecomunicaciones, conocidos como miembros organizativos

# 3. LPWANs
## NB-IoT

Las **LPWAN’s** son redes de largo alcance, gran cobertura y un consumo bajo de energía. Esto se logra haciendo una transmisión de datos pequeña con un ancho de banda pequeño, ahorrando energía para más penetración.

**NB-IoT** es un conjunto de tecnologías como las redes celulares y está igualmente sobre una banda licenciada, se ofrecen junto a servicios de 5G. Las frecuencias varían dependiendo de la región y hay un pago mensual menor que el de redes celulares.

**Características:**

- Bajo consumo energético

- Conectividad a internet directa

- Seguridad incorporada

- Gran disponibilidad

- Bandas licenciadas

- Ancho de banda limitado

- Cargos mensuales

- La cobertura puede variar

- Velocidades de transmisión lentas

- Rangos de frecuencias que cambian en diferentes países

**Narrowband Internet of Things (NB-IoT)**, Internet de cosas de banda estrecha (NB-IoT).
**Narrowband**, es el proceso de mover una banda “ancha” a una banda alta, produciendo sobre esta una banda angosta. Por ejemplo: Banda de voz aproximado 3K (3 000), banda alta de 6.78Ghz (6780 000 000), al sumar la voz sobre esta (6780 003 000), el  efecto es es mucho menor. Generando un efecto de banda estrecha.

## Consideraciones para implementación de NB-IoT

Si bien las tecnologías NB-IoT o LTE-MTC están siendo implementadas por empresas transnacionales como lo es AT&T, Verizon, T-mobile su implementación no está aún cerca de las redes 3G, 4G ya instaladas las cuales ofrecen una cobertura prácticamente mundial.

Esta tecnología es aún muy reciente y por lo mismo tenemos que asegurarnos de tomar las precauciones necesarias.

![Curso-platzi-iot.png](https://static.platzi.com/media/user_upload/Curso-platzi-iot-27c51051-42fe-41c2-81dd-2230d4fa02d7.jpg)

Este es un mapa mundial que puedes encontrar [aquí](https://www.gsma.com/iot/deployment-map/) el cual es actualizado por la GSMA quien es mantenida por la 3GPP (3rd Generation Partnership Project).

Con esto podemos concluir que esta tecnología es funcional para el internet de las cosas y es muy probable que al momento de estar totalmente implementada sea una gran diferencia para este mundo, trayendo consigo muchísimos proyectos a un bajo coste de renta para la conexión a internet, pero por el momento no es viable generar dispositivos completamente compatibles para usar solo esta tecnología. Por eso hay que estar listos para el cambio y prever que nuestros dispositivos con estas necesidades estén listos para esta evolución.

Una de las recomendaciones que te damos es que uses módulos que sean fáciles de implementar y que tengan una buena documentación.

Esto es fundamental,  pues sin una fácil implementación una producción en serie de tus dispositivos será más costosa de llevar a cabo y estará más propensa a tener errores, entre más simple mantengas el ensamble y el diseño, tu producto será menos propenso a errores. La buena documentación es una parte fundamental al momento de crear tu dispositivo, pues de esta manera podrás tener una curva de aprendizaje mucho más reducida sobre el uso del mismo módulo.

Uno de los módulos que te recomendamos aquí en Platzi es el UBLOX SARA-R410M-02B, lo puedes encontrar en la tarjeta de desarrollo MKR NB 1500 en la página oficial de Arduino, este Arduino es compatible con LTE-MTC y NB-IoT.

![curso-iot-protocolos-platzi.png](https://static.platzi.com/media/user_upload/curso-iot-protocolos-platzi-dba9ce44-c67c-46c6-b316-5a499ee04b90.jpg)

También si estás buscando una implementación más económica puedes optar por el SIM7020 en páginas como Aliexpress, este módulo es compatible con los mismos comandos usados por el módulo SIM800, también es compatible con sus pines, por tanto si creas un dispositivo que incluya el módulo SIM800 es posible que tu dispositivo evolucione a un SIM7020, este módulo es compatible también con la red 3G, por tanto si en tu región aún no hay implementación puedes hacer uso de otras redes celulares y tener listo tu dispositivo para la evolución a LTE-MTC o NB-IoT.

![curso-protocolos-platzi.png](https://static.platzi.com/media/user_upload/curso-protocolos-platzi-f28c5d34-1263-47cd-bb2b-18c3f5104159.jpg)

Como el SIM7020 es compatible con el SIM800 puedes hacer diseños y dispositivos con el SIM800 para que sea más económico, y cuando tengas la red NB-IoT o bien LTE-MTC estés listo para migrar al SIM7020.

![curso-iot-protocolos-comunicacion-platzi.png](https://static.platzi.com/media/user_upload/curso-iot-protocolos-comunicacion-platzi-f8c00d5b-40a8-4042-9c4b-1d839db489cd.jpg)

> Modulo ESP8266 cumple los requerimientos para abordar didacticamente el IoT

## LoRaWAN

> **LoRaWAN** = trabaja sobre banda no licenciada. Permite que muchos proyectos se hagan realidad por sus bajo costo.
>
> - La frecuencia aprobada por las entidades regulatorias para despliegues industriales de redes LoRa es AU915-928.
> - Siempre y cuando sean pruebas a baja escala se pueden usar otras frecuencias como US902-928
>
> Proveedores de red LoraWAN: LORIOT, everynet

# 4. Reto 2
## ¿Qué usarías para monitorear la posición GPS de un vehículo? y ¿Qué usarías para monitorear datos en campo?

### ¿Qué usarías para monitorear la posición GPS de un vehículo?

Imagina que quieres monitorear un camión que surte de dinero los cajeros automáticos, por lo tanto debes saber siempre la ubicación del camión.
¿Qué tecnología usarías para monitorear su ubicación GPS y reportarla a una plataforma en internet?
Las principales necesidades que debes tener en cuenta son:


Alta disponibilidad en la red para no perder ninguna posición.


Gran cobertura en la ciudad donde el camión surte a los cajeros.


La posibilidad de hacer reportes de posición cada 5 segundos.

**¿Qué usarías para monitorear datos en campo?**

Imagina ahora que quieres monitorear la humedad de un huerto en el campo, la humedad como es bien sabido no cambia instantáneamente si no hasta después de cierto tiempo según el ambiente, por lo tanto tienes que tener un nodo que monitoree por largos periodos de tiempo hablando de semanas.

**¿Qué usarías para monitorear datos en campo?**

- Las principales necesidades que debes tener en cuenta son:

- Largo alcance.

- Larga duración de batería.

- Alrededor de 4 reportes al día.

**Ejemplo:**

Para el primer caso propuesto usaría una red CELULAR LTE de 3G/4G debido a que son las mas rápidas, de ++largo alcance ++y ademas tiene una alta disponibilidad y gran cantidad de puntos de acceso. Para monitorear la ubicación usaría un modulo GPS como el propuesto en el anterior documento, SIM7020, reconozco la existencia de el SIM800, sin embargo no lo recomiendo ya que este tiene acceso a las redes 2G las cuales son lentas y obsoletas para este tipo de trabajos(del tipo seguridad).

Para el segundo caso usaría sensores de humedad ambientales y ademas de suelo. Ya que las plantas son susceptibles a la humedad que se encuentra depositada en el aire y en la tierra del cultivo. Para esto puedo usar una red de sensores ubicados a lo largo del campo con un espaciado de 100 metros entre cada sensor.(para los de humedad en el aire).

Y una red de sensores ubicada a lo largo del campo cada 50m para tener una mayor presión y un riego mas controlado y modulado.(sensores de humedad de tierra).
2 ejemplos de sensores son:


Aéreo: La linea de DHT (Se recomienda el **DHT11 **y DHT13)


Terrestre: HW103

# 5. Diseño
## Arquitectura de nodos

Los nodos son los dispositivos que se conectan a una red que puede ir conectada a internet o intranet. Son las cosas del internet de las cosas porque interactúan con el mundo real llevando una variable física a la parte digital.

**Arquitectura:**

- **Microcontrolador:** Es el cerebro del nodo y sin él no se podrían procesar datos. Es importante elegir uno a la medida. Cada controlador tendrá por lo menos un procesador, periféricos, conversores de señales y manejo de energía.
- **Sensores:** Es la manera en la que se convierten las variables físicas a digitales. Gracias a ellos puede ser enviada la información a internet o intranet. Existen digitales y analógicos.
- **Actuadores:** Son la forma de interacción desde lo digital hasta una forma física como motores, servomotores, luces, entre otros.
- **Radiofrecuencia:** Es la segunda parte más importante del nodo y nos permite transmitir los mensajes.

# 6. Introducción a la práctica
## Instalación de framework ESP32 e instalación de framework SAMD21

clonar confi

```sh
git clone https://github.com/espressif/arduino-esp32.git
```

[![img](https://www.google.com/s2/favicons?domain=https://static.platzi.com/media/favicons/platzi_favicon.png)dl.espressif.com](https://dl.espressif.com/dl/package_esp32_index.json)

## Qué es una interrupción



# 7. Práctica de WiFi
## Prueba de señal Wi-fi
## Protocolo HTTP desde un microcontrolador
## Conectando sensores y actuadores al microcontrolador
## Preparación de aplicación para recibir datos
## Programación por eventos de un microcontrolador
## Configuración de eventos del microcontrolador
## Conexión de aplicación

# 8. Práctica con LoRa
## ¿Cuál es el stack de LoRaWAN?
## Creando tu propio gateway
## Ensamblado de gateway
## Pon a andar tu gateway de LoRa
## Creando tu Stack de LoRa
## Conecta tu nodo a internet
## Integrando datos a un dashboard
## Terminando de implementar nuestro stack de LoRa
## BugFixing nuestro stack de LoRa
## Ensamblando el nodo de LoRa
## Probando LoRa en nuestro Dashboard
## Prácticas con tarjetas MKR

# 9. Cierre del curso
## Cierre del curso
