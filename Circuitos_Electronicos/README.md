<h1>Básico de Circuitos Electrónicos</h1>

<h3>Ricardo Celis</h3>


<h1>Tabla de Contenido</h1>

- [1. Leer Diagramas Electrónicos o Esquemáticos](#1-leer-diagramas-electrónicos-o-esquemáticos)
  - [Bienvenida al curso](#bienvenida-al-curso)
  - [Esquemático](#esquemático)
  - [Simbología básica](#simbología-básica)
  - [Flujo de trabajo profesional para dominar la electrónica](#flujo-de-trabajo-profesional-para-dominar-la-electrónica)
  - [Hojas de datos o data sheets: conociendo un regulador de voltaje](#hojas-de-datos-o-data-sheets-conociendo-un-regulador-de-voltaje)
- [2. Crear un divisor de voltaje](#2-crear-un-divisor-de-voltaje)
  - [¿Qué es un divisor de voltaje y su importancia?](#qué-es-un-divisor-de-voltaje-y-su-importancia)
  - [Práctica: Creando nuestro divisor de voltaje](#práctica-creando-nuestro-divisor-de-voltaje)
  - [Esquemático y análisis de nuestro divisor de voltaje](#esquemático-y-análisis-de-nuestro-divisor-de-voltaje)
    - [2.1 Circuito](#21-circuito)
    - [2.2 Ecuación](#22-ecuación)
      - [Simplificaciones](#simplificaciones)
- [3. Utilizar Capacitores para filtrar, generar carga](#3-utilizar-capacitores-para-filtrar-generar-carga)
  - [Tipos de capacitores y sus aplicaciones](#tipos-de-capacitores-y-sus-aplicaciones)
  - [Capacitores a detalle](#capacitores-a-detalle)
  - [Cálculo de capacitancio](#cálculo-de-capacitancio)
- [4. Uso de Diodos y bobinas](#4-uso-de-diodos-y-bobinas)
  - [Qué son los diodos](#qué-son-los-diodos)
    - [Símbolo de diodo](#símbolo-de-diodo)
  - [Qué son las bobinas](#qué-son-las-bobinas)
  - [Uso práctico de un relevador](#uso-práctico-de-un-relevador)
  - [¿Qué es el electromagnetismo?](#qué-es-el-electromagnetismo)
    - [Los origenes:](#los-origenes)
- [5. Entender las Señales eléctricas](#5-entender-las-señales-eléctricas)
  - [Tipos de señales eléctricas](#tipos-de-señales-eléctricas)
    - [Edison y Tesla](#edison-y-tesla)
  - [Definiendo una frecuencia](#definiendo-una-frecuencia)
    - [SEÑALES ELÉCTRICAS](#señales-eléctricas)
    - [FRECUENCIA DE LA ONDA ELÉCTRICA:](#frecuencia-de-la-onda-eléctrica)
  - [Práctica: Creando un flash](#práctica-creando-un-flash)
- [6. Entender qué es un transistor](#6-entender-qué-es-un-transistor)
  - [¿Qué es un transistor?](#qué-es-un-transistor)
- [7. Aplica todos tus conocimientos juntos](#7-aplica-todos-tus-conocimientos-juntos)
  - [Proyecto final ¿qué haremos?](#proyecto-final-qué-haremos)
  - [Proyecto final: Chasis y componentes](#proyecto-final-chasis-y-componentes)
  - [Proyecto final: Esquemático y data sheets](#proyecto-final-esquemático-y-data-sheets)
  - [Proyecto final: Circuitos básicos del sistema](#proyecto-final-circuitos-básicos-del-sistema)
  - [Proyecto final: Conexión de componentes](#proyecto-final-conexión-de-componentes)
  - [Proyecto final: Terminando las conexiones y ensamble](#proyecto-final-terminando-las-conexiones-y-ensamble)
    - [¿Qué haremos aquí?](#qué-haremos-aquí)
  - [Proyecto final: Demo y desafío con fotoresistencias](#proyecto-final-demo-y-desafío-con-fotoresistencias)
  - [Cierre del curso y ¿qué sigue?](#cierre-del-curso-y-qué-sigue)
  

# 1. Leer Diagramas Electrónicos o Esquemáticos

## Bienvenida al curso

En este curso aprenderás las bases de los circuitos electrónicos, sus componentes más utilizados y cómo leer y entender un esquemático. Aplicarás todo esto y más en un proyecto 100% real.

## Esquemático

Es un diagrama electrónico que define los componentes a usar y sus conexiones entre sí en determinado circuito.

Toma en cuenta que es una abstracción de los componentes físicos y sus interconexiones, ya que las líneas no definen la forma del circuito ni el largo de las conexiones.

Puedes pensar en el esquemático como una receta de cocina para crear nuestros circuitos electrónicos. Y al ser una receta existen muchas ya creadas que puedes hacer con simplemente seguir los pasos, por ejemplo:

  - Pequeños vehículos autónomos con el uso de motores.
  - Alarmas que se activan con algún tipo de sensor.
  - Bajar las cortinas de la casa con un comando de voz.

Te recomendamos usar software especializado del tipo **EDA (Electronic Design Automation)** para crear tus propios esquemáticos. Uno de los más populares es *KiCad* y puedes encontrar el enlace en la sección de Archivos y Enlaces.

- [KiCad EDA](http://kicad-pcb.org/)

Para entender el tema de circuitos y dispositivos electrónicos debes dominar muy bien el tema de analisis de circuitos eléctricos.
- Les recomiendo el libro: “principios de circuitos electricos - floyd, 8va edición” va desde lo mas básico hasta lo mas avanzado
- Para el caso de circuitos y dispositivos electrónicos les recomiendo ¨Dispositivos electrónicos - Thomas L. Floyd¨ tambien va desde lo básico hasta lo mas avanzado, busquenlo en PDF

## Simbología básica

Para que tengas un proceso de aprendizaje más fluido, te recomiendo tener estas tablas de simbología a la mano. ¿conoces algún símbolo adicional? compartelo en la sección de comentarios.

![](https://i.ibb.co/2YzqwCQ/sm1.webp)

![](https://i.ibb.co/k3KRm5S/sm1.jpg)

![](https://i.ibb.co/8x3mxh3/sm2.jpg)

## Flujo de trabajo profesional para dominar la electrónica

- [Farnell | Electronic Component Distributors](https://www.farnell.com/)

- [mouser electronic](https://co.mouser.com/Electronic-Components/?InStock=True)

## Hojas de datos o data sheets: conociendo un regulador de voltaje

Todo componente tiene un Data Sheet con información muy detallada entre la que podemos encontrar:

  - Cómo se compone internamente.
  - Rangos de temperatura de operación.
  - Qué voltaje y corriente usa.
  - Diagramas de casos de uso típicos.

Recuerda siempre buscar el Data Sheet **específico del fabricante** que compraste, ya que pueden variar entre ellos.

El **“Data sheets”** es como la documentación en un lenguaje de programación o tecnología. Data Sheets o tambien llamado como hojas de datos te da a conocer toda la información referente a funciones, caracteristicas y tanto de V max como V min para un componente al igual que brinda la funcionalidad.

Te muestra:

  - Como usarlo
  - Representación y símbolos para identificar
  - Especificaciones
  - Requisitos o recomendaciones
  - Limites o máximo que se puede hacer

# 2. Crear un divisor de voltaje

## ¿Qué es un divisor de voltaje y su importancia?


Es un circuito que permite tomar un voltaje (tensión) que se le suministra a dos resistencias en serie y dividirlo para obtener una fracción del mismo.

> Nunca uses un divisor de tensión como regulador de voltaje.

  **Voltaje:** es la potencia de la carga al fluir la diferencia de potencia que existe en un circuito

  **Potenciometro:** es un tipo de resitencia que equilibra cuanto se manejara la resistencia, tiene como tres dientes, 1.- resistividad una terminal 2.- salida de la variable cambia valor a resistir 3.- maximo de resistividad

  **Fotoresistencia:** son resistencias que reaccionan a luz que reciben, mayor luz menor valor resistivo.
 
## Práctica: Creando nuestro divisor de voltaje

![](https://i.ibb.co/zN0BWTT/divisor.jpg)

- Simulador llamado “proteus”

## Esquemático y análisis de nuestro divisor de voltaje

Un divisor de voltaje es un circuito simple que reparte la tensión de una fuente entre una o más impedancias conectadas. Con sólo dos resistencias en serie y un voltaje de entrada, se puede obtener un voltaje de salida equivalente a una fracción del de entrada. Los divisores de voltaje son uno de los circuitos más fundamentales en la electrónica.

A continuación, se presentarán dos temas importantes de un divisor de voltaje: el circuito y la ecuación.

### 2.1 Circuito

Un divisor de voltaje requiere que se conecte una fuente de voltaje a través de dos resistencias en serie. Es posible que el divisor de voltaje sea dibujado de distintas maneras, pero siempre debe ser esencialmente el mismo circuito.

![](https://i.ibb.co/PcQyWHp/1.jpg)

Ejemplos esquemáticos de divisores de voltaje.

Llamamos a la resistencia más cercana al voltaje de entrada (Vin) R1 y a la resistencia más cercana a tierra R2. La caída de voltaje en R2 es nuestro voltaje de salida (Vout), este es el voltaje resultante de nuestro circuito, que como ya se mencionó es una fracción de nuestro voltaje de entrada.

### 2.2 Ecuación

La ecuación del divisor de voltaje supone que se conocen tres valores del circuito anterior: el voltaje de entrada (Vin), y ambos valores de resistencia (R1 y R2). Teniendo en cuenta estos valores, podemos usar esta ecuación para encontrar el voltaje de salida (Vout):

![](https://i.ibb.co/zJw5q6X/2.jpg)

Esta ecuación establece que el voltaje de salida es directamente proporcional al voltaje de entrada conforme a la relación de R1 y R2.

#### Simplificaciones

Hay algunas generalidades que se deben tener en cuenta al utilizar los divisores de voltaje. Estas son simplificaciones que hacen que la evaluación de un circuito divisor de voltaje sea un poco más fácil.

En primer lugar, si R2 y R1 son iguales, entonces el voltaje de salida es la mitad del de la entrada. Esto es así independientemente de los valores de las resistencias.

![](https://i.ibb.co/RYZnhRm/3.jpg)

Si R2 es mucho mayor que R1, entonces el voltaje de salida será muy cercano al de la entrada. Habrá muy poco voltaje a través de R1.

![](https://i.ibb.co/xjQjFcM/4.jpg)

Por otro lado, si R2 es mucho más pequeño que R1, el voltaje de salida será muy pequeño en comparación con el de la entrada. La mayor parte del voltaje de entrada estará a través de R1.

![](https://i.ibb.co/hZmG6sF/5.jpg)

# 3. Utilizar Capacitores para filtrar, generar carga

## Tipos de capacitores y sus aplicaciones

Existen tres elementos básicos encontrados en la mayoría de circuitos, y son:

  - Resistor
  - Inductor
  - Capacitor
   
El capacitor, o también conocido como condensador, permite almacenar una carga eléctrica dada y sirven para recuperarnos de las caídas de tensión manteniendo un voltaje estable en nuestros circuitos.

La unidad de medida que usan es el faradio, el cual se define como la capacidad de un capacitor entre cuyas placas existe una diferencia de potencial eléctrico de 1 voltio (1V) cuando está cargado de una cantidad de electricidad igual a un culombio (1C).

Tipos de capacitores:

  - **Capacitor Electrolítico.** Es de los más comunes y se mide en microfaradios.
  - **Capacitor Cerámico.** Almacenan una menor carga y se miden en picofaradios.
  - **Super Capacitores.** Se usa en circuitos de alto consumo como en los sistemas de sonido profesionales de un coche. Se miden en faradios.

Unidades de los faradios:

![](https://i.ibb.co/sF9wMcD/simbolos.jpg)

> La diferencia entre una batería y un Capacitor, es que la batería puede almacenar la energía por mucho tiempo, en cambio el capacitor se descarga en cuestión de segundos o milisegundos, según sea la carga que puede almacenar.

## Capacitores a detalle

Los capacitores electrolíticos necesitan que el flujo de corriente lleve una dirección, es decir tiene polaridad. En cambio, los capacitores cerámicos no la tienen.

Toma esto siempre en consideración ya que si conectas mal un capacitor puede dañarte el circuito entero. Otro aspecto a considerar es que con el tiempo los capacitores mueren, es importante verificar el “endurance” en su data sheet.

- [data-sheet-capacitor.pdf](https://drive.google.com/file/d/1VTGKZ-RhjCqQP0D_PaqytXDjTzmHoFJM/view?usp=sharing)

> RoHS quiere decir Restriction of Hazardous Substances y es una marca de conformidad de estándares Europeos. Básicamente, si tus componentes tienen esta marca, se supone que están libres de plomo y mercurio, principalmente

Un capacitor electrolítico se puede estallar por dos razones
1. Por exceder el voltaje aplicado que recomienda el fabricante.
2. Por inversión de la polaridad de la tensión aplicada al mismo.

- [QUÉ ES UN CAPACITOR O CONDENSADOR](http://www.asifunciona.com/electrotecnia/ke_capacitor/ke_capacitor_2.htm)

## Cálculo de capacitancio

Un capacitor de gran tamaño puede almacenar más carga que un capacitor de menor tamaño.

Sobre la base de estas observaciones se puede predecir que la capacidad de un condensador será directamente proporcional al área de las placas e inversamente proporcional a su separación.

La relación exacta puede determinarse considerando la intensidad del campo eléctrico entre las placas del condensador.

La intensidad del campo eléctrico entre las placas del condensador cargado que aparece en la figura puede determinarse con base en la ecuación

![](https://i.ibb.co/BK3YSZF/1.jpg)

![](https://i.ibb.co/HqdXnss/2.jpg)


# 4. Uso de Diodos y bobinas

## Qué son los diodos

Los diodos son un filtro que nos sirve para mantener nuestras señales limpias ya que solo permite el flujo de corriente en una dirección.

- [Entrevista a Holonyak, Inventor del LED Sub. Español - YouTube](https://www.youtube.com/watch?v=qjZqLM61pP0)

![](https://i.ibb.co/3hdsQvW/diodos.png)

Un rectificador de onda completa que menciona en el video para pasar de la corriente alterna a directa, aunque aún después de esto faltan más pasos y componentes para electrónicos para tener una salida constante y continua de volts.

### Símbolo de diodo

![](https://i.ibb.co/cYcwZQq/diodo.webp)

## Qué son las bobinas

Son muy comunes en circuitos que requieren transformaciones de voltaje o componentes que generan un campo electromagnético.

Una bobina se compone por dos elementos:

Un núcleo metálico.
Vueltas de hilo de cobre alrededor del núcleo.
Estás vueltas generan el campo electromagnético que sirve para transformar un voltaje alto a un voltaje bajo de cierto valor.

Otro uso es en los relés. Un relé sirve para abrir o cerrar el paso de corriente de un camino hacia otro. Puedes pensar que es cómo la palanca que sirve para cambiar la dirección de las vías de un tren.

- [Limitando la corriente para evitar quemar un led en Fundamentos de Desarrollo de Hardware con Arduino](https://platzi.com/clases/1252-fundamentos-arduino/10580-limitando-la-corriente-para-evitar-quemar-un-led/)

## Uso práctico de un relevador

![](https://i.ibb.co/zbs7wQ9/relevador1.png)

## ¿Qué es el electromagnetismo?

Cuando te adentras en el mundo de la creación de circuitos eléctricos es importante que conozcas un concepto fundamental. El electromagnetismo.

La enciclopedia británica define al electromagnetismo como la ciencia de la carga y de todos los campos y fuerzas asociados a esta. La electricidad y el magnetismo son las dos claves para entenderlo.

En palabras más simples el electromagnetismo es una rama de la física que estudia los fenómenos de las relaciones entre la electricidad y el magnetismo. Es decir, el campo magnético que es creado por la corriente eléctrica y el efecto de un campo magnético sobre una corriente eléctrica.

Cada campo tiene sus propias ecuaciones y se produce de formas diferentes: las fuerzas eléctricas son producidas por cargas eléctricas tanto en reposo como en movimiento. Por su parte, las fuerzas magnéticas, son producidas por cargas en movimientos y actúan únicamente con cargas en movimiento.

### Los origenes:

Los primeros estudiosos de la electricidad creían que la electricidad y el magnetismo eran dos fuerzas sin relación. Sin embargo fue en 1865 cuando James Clerk Maxwell con la publicación de la Teoría Dinámica del campo electromagnético https://royalsocietypublishing.org/doi/pdf/10.1098/rstl.1865.0008 , plantó las bases teóricas para las principales ecuaciones que definen el estudio del electromagnetismo. Este trabajo estuvo basado en los primeros estudios de Michael Faraday.

En la Teoría Dinámica del campo electromagnético, Maxwell predijo la existencia de las ondas electromagnéticas propagándose a la velocidad de la luz y además concluyó que la luz era una onda electromagnética. Piénsalo así, el trabajo de Maxwell es considerado de igual impacto al de científicos como Albert einstein o Isaac Newton.

La semilla de Maxwell permitió el desarrollo de un sin número de aparatos eléctricos que como humanidad hemos usado para mejorar en nuestra vida diaria, desde la brújula, hasta el timbre de tu casa, así es, si presionas un timbre, la corriente eléctrica crea un campo magnético que atrae un timbre que toca la campana o los relés, que son electroimanes especiales que funcionan como interruptores eléctricos automáticos. Los puedes encontrar en televisores, computadores, carros y hasta ascensores.

Observa tu vida diaria y cuéntame ¿en qué otros artefactos ves que usamos el electromagnetismo?

# 5. Entender las Señales eléctricas

## Tipos de señales eléctricas

Tenemos dos tipos de señales:

  - **Señal digital.** Es representada con una onda cuadrada que va de cero a su voltaje máximo positivo y de vuelta a cero. Nunca da valores negativos, la corriente se mantiene constante.

  - **Señal analógica.** Es representada por una onda senoidal que va de cero a su máximo positivo y de ahí a su minino negativo pasando por el cero. Repitiendo este ciclo.

### Edison y Tesla

  - **Corriente continua:** como vemos es un flujo continuo de corriente.

  - **Corriente Alterna:** alterna entre positivo y negativo el flujo de corriente.

Nuestras casas les llega corriente alterna y es convertida y se trabaja con corriente continua. Por ejemplo en cargadores, lamparas, etc…

voltaje negativo y positivo se refiere a la dirección en que circula la corriente, imagina que tienes un cable y que la corriente eléctrica cirucla de izquiera a derecha, entonces decimos que en esa dirección el voltaje es (+) y si la corriente circulara en dirección contraria entonces el voltaje es negativo(-)

En la corriente diecta no existe voltaje negativo, porque la corriente siempre circula en la misma dirección

En cambio en la corriente alterna (se llama alterna porque cambia constantemente la dirección de la corriente), por ejemplo en un foco cualquiera de tu casa, en realidad la corriente va de un lado para otro, solo que lo hace tantas veces en 1 segundo que el ojo no alcanza a percibir esos cambios de dirección. En este caso si existen voltajes positivo y negativo.

## Definiendo una frecuencia

La frecuencia es las veces que se repite un evento en un tiempo determinado. En este caso las veces que se repite el ciclo de nuestra onda.

- [esquema-relay.pdf](https://drive.google.com/file/d/1o8DE-vaxPpVplQWXzKBiiRUNMvCYC5Z1/view?usp=sharing)

  - **Periodo:** representa cada que tanto se completa un flujo en una señal eléctrica.
  - **Frecuencia:** Las veces que un evento se repite en un periodo de tiempo dado.
  - **Hertz:** Unidad de medida que mide la fercuencia.

### SEÑALES ELÉCTRICAS

  - **Digital:** Tenemos 1 o 0, pasa o no pasa corriente. (Corriente Continua)
  - **Análoga:** Tenemos una corriente positiva, 0 y negativa. (Corriente Alterna)

### FRECUENCIA DE LA ONDA ELÉCTRICA:

El tiempo en cumplir un flujo entero en una señal eléctrica.

Ejemplo:

0 → + → 0 → - → 0 (4 segundos)

Un ciclo por segundo se mide en Hertz

## Práctica: Creando un flash

![](https://i.ibb.co/FWPbsG7/Relay.jpg)

- [esquema-relay.pdf](https://drive.google.com/file/d/1o8DE-vaxPpVplQWXzKBiiRUNMvCYC5Z1/view?usp=sharing)

# 6. Entender qué es un transistor

## ¿Qué es un transistor?

El transistor es un dispositivo electrónico semiconductor utilizado para entregar una señal de salida en respuesta a una señal de entrada. Cumple funciones de amplificador, oscilador, conmutador o rectificador. El término «transistor» es la contracción en inglés de transfer resistor («resistor de transferencia»).

Actualmente se encuentra prácticamente en todos los aparatos electrónicos de uso diario tales como radios, televisores, reproductores de audio y vídeo, relojes de cuarzo, computadoras, lámparas fluorescentes, tomógrafos, teléfonos celulares, aunque casi siempre dentro de los llamados circuitos integrados.

![](https://i.ibb.co/fqm1DKT/transistor.jpg)

# 7. Aplica todos tus conocimientos juntos

## Proyecto final ¿qué haremos?

El proyecto final consiste en construir un pequeño automata que detecte un obstáculo al chocar con él y de reversa.

- chip el cinco cinco cinco

## Proyecto final: Chasis y componentes

En esta clase te comparto la lista de componentes a utilizar y tips para que desarrolles el mejor chasis para este y futuros proyectos.

  - 1 Regulador de 5v LM7805
  - 1 Resistencia de 100k Ohms, 1 de 50k y un potenciómetro de 100k
  - 1 Capacitor electrolítico de 47uF, 1 Capacitor cerámico de 0.01uF
  - 1 Relevador de 2 polos y 2 tiros (8 pines, 5 volts)
  - 2 Botones o limit switches
  - 1 interruptor de encendido
  - 2 motor de 5 a 9 volts con motorreductores (en caso de que consigas uno de mayor voltaje igual lo adaptamos)
  
1.  Chasis para hasta 4 motores open source, de thingverse:

![](https://i.ibb.co/5RW6cYM/caja.jpg)

2. Chasis imprimible en 3D: https://www.thingiverse.com/thing:1843364 (también lo puedes hacer en madera como triplay)

![](https://i.ibb.co/vVC6qFC/caja1.jpg)

3. Arduino Car: https://www.thingiverse.com/thing:2450012

![](https://i.ibb.co/gZGLMKf/caj2.jpg)
## Proyecto final: Esquemático y data sheets

![](https://i.ibb.co/vY5RsVd/reto1.png)

## Proyecto final: Circuitos básicos del sistema

En esta clase el profesor Ricardo Celis te enseña como usar un circuito integrado muy popular llamado Timer 555 que forma parte del proyecto final del curso.

En este video vemos desde como fluye la corriente en un circuito electrónico hasta cómo saber el orden de los pines de un circuito integrado y mucho más.

Ya aprendiste lo básico para leer un diagrama electrónico con componentes muy usados como: potenciometros, resistencias y pulsadores. ¿Qué esperas? aprende más en el Curso de Fundamentos de Circuitos Electrónicos disponible para ti.

## Proyecto final: Conexión de componentes

![](https://i.ibb.co/Gp26X8H/conexion.jpg)

![](https://i.ibb.co/rQ67vZF/conexion1.jpg)

- [IM555.pdf](https://drive.google.com/file/d/127cTBXzkMS_8yImMxgVJ1pcSfLtkP7zC/view?usp=sharing)

## Proyecto final: Terminando las conexiones y ensamble

### ¿Qué haremos aquí?

En este curso vamos a desarrollar un proyecto súper simple en el cual utilizaremos un timer 555 para generar pulsos una vez nuestros limit switches se activan y detectan algún obstáculo, este pulso generado por el 555 se encargará de cambiar el sentido de giro de nuestros motores utilizando nuestro relavador de 2 polos y 2 tiros con 8 terminales (puedes ver este componente como 2 relevadores en 1 y te dejo una imágen de cómo está conectado internamente a continuación.

![](https://i.ibb.co/g70XMMC/1.png)

Lo primero que necesitas tener claro es la fuente de alimentación que utilizarás, él relevador que te solicité se activa con 5 volts y ese es un buen voltaje para trabajar el 555 también, aquí encuentras el diagrama o esquemático a seguir:

![](https://i.ibb.co/XVH4mYD/2.jpg)

Una vez termines de ensamblar los componentes móntalos en el chasis que hayas elegido y comienza a probar, lo más probable es que la conecciones del motor te quedarán invertidas (lo sabrás por que el carro no avanzará hacia una dirección con los dos llantas al mismo tiempo que es lo que necesitamos) y aquí viene otro aprendizaje, en motores de corriente directa como el que tienes en tus manos sólo necesitas invertir la polaridad del componente (sí el cable que tengas en el polo negativo del motor lo mandas al positivo y viceversa) una vez hagas esto verás cómo tu motor comienza a girar en dirección opuesta, ¿por qué?

Por que los motores de corriente directa no tienen una polaridad predefinida y el flujo de la corriente es la que le define el sentido de giro.

![](https://i.ibb.co/jhBhKVF/3.png)

Con esto listo, ya sólo queda que nos compartas tus pruebas, graba tú circuito en funcionamiento, prégúntame cualquier duda y sobre todo no te rindas en ningún momento
a continuación puedes ver un video de mi circuito en funcionamiento así como fotos de referencia de cómo me quedó.


## Proyecto final: Demo y desafío con fotoresistencias

![](https://i.ibb.co/LR4CndM/proyecto-Final.jpg)

## Cierre del curso y ¿qué sigue?

No pares de Aprender