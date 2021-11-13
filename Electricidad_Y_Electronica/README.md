<h1>Fundamentos de Electricidad y Electrónica</h1>

<h3>Ricardo Celis</h3>


<h1>Tabla de Contenido</h1>

- [1. Entender los fundamentos de la electricidad](#1-entender-los-fundamentos-de-la-electricidad)
  - [Bienvenida al curso](#bienvenida-al-curso)
  - [Lista de componentes para el curso](#lista-de-componentes-para-el-curso)
  - [¿Qué es la electricidad? Carga Eléctrica, conductores y aislantes](#qué-es-la-electricidad-carga-eléctrica-conductores-y-aislantes)
  - [¿Qué es el voltaje y la corriente?](#qué-es-el-voltaje-y-la-corriente)
  - [Potencia eléctrica](#potencia-eléctrica)
  - [Campos de aplicación de la electricidad](#campos-de-aplicación-de-la-electricidad)
  - [Resistencia y la ley de Ohm](#resistencia-y-la-ley-de-ohm)
- [2. Usar el multímetro para medir Voltaje, Corriente y Resistencia](#2-usar-el-multímetro-para-medir-voltaje-corriente-y-resistencia)
  - [¿Qué es un multímetro?](#qué-es-un-multímetro)
  - [¿Qué es un circuito? Conceptos básicos de circuitos eléctricos](#qué-es-un-circuito-conceptos-básicos-de-circuitos-eléctricos)
- [3. Entender las distintas fuentes de poder y saber elegir la mejor según tu proyecto](#3-entender-las-distintas-fuentes-de-poder-y-saber-elegir-la-mejor-según-tu-proyecto)
  - [Fuentes de alimentación](#fuentes-de-alimentación)
  - [¿Qué es la tierra eléctrica?](#qué-es-la-tierra-eléctrica)
- [4. Construír circuitos básicos](#4-construír-circuitos-básicos)
  - [Práctica: muerte a un led, por la ciencia.](#práctica-muerte-a-un-led-por-la-ciencia)
  - [Protoboard](#protoboard)
  - [Creación de un circuito básico](#creación-de-un-circuito-básico)
- [5. Resistencia: concepto y teoría](#5-resistencia-concepto-y-teoría)
  - [Resistencias](#resistencias)
  - [Potenciometros](#potenciometros)
  - [Fotoresistencias](#fotoresistencias)
  - [Demostrando el uso de una fotoresistencia](#demostrando-el-uso-de-una-fotoresistencia)
  - [Controlando el brillo de nuestro led con un potenciómetro](#controlando-el-brillo-de-nuestro-led-con-un-potenciómetro)
  - [Cierre del curso](#cierre-del-curso)

# 1. Entender los fundamentos de la electricidad

## Bienvenida al curso

- [curso-de-electricidad-y-electronica.pdf](https://drive.google.com/file/d/1PPCykZ5btBS8L-csZgThgb-vuahvk4ZD/view?usp=sharing)

## Lista de componentes para el curso

- Multímetro
- Tarjeta de prototipado o Protoboard
- 5 resistencias de: 1k, 5k, 10k, 220, 330, 470 ohms
- Variable o Potenciómetro de 1k, 5k, 10k
- Fotorresistor de 5 mm o de 10 mm
- Leds, los que tu quieras, nunca sobran
- Botón normalmente abierto, el que encuentres.

- [lista-de-materiales-curso-fundamentos-de-electricidad.pdf](https://drive.google.com/file/d/10qkUuiwC8OpeG9lQINyGtMJTIriMtCq_/view?usp=sharing)

## ¿Qué es la electricidad? Carga Eléctrica, conductores y aislantes

La **electricidad** es un conjunto de fenómenos producidos por el movimiento e interacción entre las cargas eléctricas positivas y negativas de los cuerpos físicos.

  - **Electrón:** Carga eléctrica negativa. Cuando tiene más electrones que protones
  - **Protón:** Carga eléctrica positiva. Cuando tiene menos electrones que protones
  - **Neutrón:** Carga eléctrica neutra. Cuando tiene igual de número de electrones y protones

La **carga eléctrica** es una propiedad física intrínseca de algunas partículas subatómicas que se manifiesta mediante fuerzas de atracción y repulsión entre ellas a través de campos electromagnéticos.

<h3>¿Qué es la electricidad?</h3>

Este es un concepto bastante abstracto pero que está en todos lados, así que lo vas a entender fácilmente. La electricidad es un conjunto de fenómenos producidos por el movimiento e interacción entre las cargas eléctricas positivas y negativas de los cuerpos físicos. ¿Qué quiere decir esto? Esta en todos lados, en tu casa no es la excepción. Cuando presionas el botón de encender la luz permites que haya un flujo de electrones, una carga moviéndose en el circuito de tu casa, lo que hace que encienda la luz. Otro ejemplo son los vehículos eléctricos, ellos tienen una batería y un motor, la batería le proporciona energía al motor y el se encarga de convertirla en fuera física mecánica que se transfiere a las llantas y hace que se impulse. En tu dispositivo también hay un flujo de carga eléctrica que hace que funciona. Este fenómenos invisible que sucede en la interacción de las cargas positivas y negativas está en todos lados.

<h3>Cargas eléctricas</h3>

Acá está la imagen de un átomo:
El átomo se divide en tres partículas subatómicas elementales. Estas son:

![](https://i.ibb.co/jvcbfvV/electron.png)

1. **Electrón:** con una carga negativa.
2. **Protón:** con una carga positiva.
3. **Neutrón:** con una carga neutra.

<h3>Nuestras carga serán</h3>

1. **Negativa:** si tienen más electrones que protones.
2. **Positiva:** si tienes más protones que electrones.
3. **Neutra:** si tienes una equivalencia en cantidad entre protones y electrones.

<h3>Carga eléctrica</h3>

Es una propiedad física intrínseca de algunas partículas subatómicas que se manifiestan mediante fuerzas de atracción y repulsión entre ellas a través de campos electromagnéticos.
Una fuerza de atracción conocida es la gravedad, la que permite el funcionamiento de los grandes cuerpos como los planetas, permitiendo que nos mantengamos en el suelo y que existan las órbitas. La electricidad también tiene esta propiedad, pero además tiene la de repulsión. La siguiente imagen lo explica:

![](https://i.ibb.co/GR6NPLk/ele.png)

- Cargas negativas de repelen.
- Cargas negativas y positivas se atraen.
- Cargas positivas se repelen.

<h3>Materiales</h3>

Ahora hablemos del flujo de los electrones a través de los materiales. Tenemos los elementos cargados en nuestro electrón, el electrón se encuentra en los anillos externos del átomo, es lo que nos permite crear lo que llamamos electricidad. La electricidad fluye de negativo a positivo.

- **Los materiales conductores** como el cobre se encuentra en todas las instalaciones de electricidad, esto es por que es uno de los materiales conductores más abundantes. Es de los mejores que hay ya que tiene los electrones muy poco unidos al núcleo, o sea que están listo para hacer el flujo eléctrico. Cuando se junta con el átomo de al lado es capaz de recibir toda esta energía.
- **Los materiales aislantes** tienen los electrones muy unidos al núcleo, por lo tanto va a ser muy difícil que los electrones fluyan.
- **Los materiales semiconductores** tienen la particularidad de que podemos hacerlos cambiar para que los electrones se encuentren más cerca o lejos del núcleo.

> Los materiales como el plástico pueden tener electrones, ¿Por qué no ceden? por que tienen los electrones muy unidos, pero si reciben una gran cantidad de energía si van a ceder, por esto fallan algunos aislantes, si se hace una instalación eléctrica muy grande usan materiales preparados para este tipo de energías.

## ¿Qué es el voltaje y la corriente?

La **corriente eléctrica** es la cantidad de carga que fluye en un instante dado.

**Potencia** es la presión que se aplica a la corriente.


El **voltaje** es la potencia de la carga al fluir.

Son dos conceptos importantes que nos permitirá saber de la potencia eléctrica.

**¿Qué es la corriente?** Es la cantidad de carga que está fluyendo en un instante dado, la cantidad de electrones que fluye en un circuito eléctrico.
¿Qué es el voltaje? Es la potencia con la que esta carga fluye, se analiza como si fuera un río, el ancho del río es la cantidad de corriente de agua, pero sin importar la cantidad de agua que esté en el río, si no hay corriente este no será un río, será un lago, algo como las baterías que almacenan carga que no se mueve. Si le hacemos una salida a ese lago va a empezar a caer, y si está en una pendiente lo va a hacer con mucha más rapidez, esto es el voltaje.

![](https://i.ibb.co/Ssrdprv/vip.png)

![](https://i.ibb.co/ZxxBQTm/vip1.png)

## Potencia eléctrica

La **potencia** es la cantidad de corriente multiplicada por el voltaje para obtener una nueva magnitud y esta nos sirve para definir la fuerza eléctrica. Utiliza la unidad W.

Básicamente es la cantidad de corriente que multiplicamos por el voltaje para obtener una nueva magnitud, nos sirve para definir la fuerza eléctrica que tiene nuestro circuito, lo llamamos potencia representado por W que es el Watt, nos sirve para medir en una unidad de tiempo, cuanta energía estamos consumiendo. La analogía más fácil de entender esto es la bombilla. Los focos incandescentes, “los ahorradores” consumían 70 watts/hora. Hoy en día puedes adquirir un foco led que consume 10 wats/hora. Esto no es más que una pequeña ecuación que nos indica que durante una hora a 110 volts vamos a consumir la cantidad de corriente eléctrica, carga eléctrica para iluminarte que necesitas al multiplicar: 110 * x = 10 wats/hora.

Aquí tenemos que hacer una división, despejando x, tendríamos que… para saber cual es el consumo que tendría mi foco led a 10 wats/hora sería dividir 10 entre 100, nos daría a 0.1 ampere. ¡No te preocupes! Más adelante veremos estas formulas a detalles para entenderlas mejor.

> Dato: un foco led consume mucho menos, ¡úsalos!

## Campos de aplicación de la electricidad

- **Eléctrica:** Este campo se encarga de estudiar todo lo que ocurre desde el enchufe de tu casa hasta la represa de energía o esa fuente de energía que ocurre en tu país.

![](https://i.ibb.co/LPP2Q2j/luz.jpg)

- **Electrónica:** Es el campo que usaremos en la carrera de IoT. Usamos voltajes pequeños de corriente directa que nos servirán para darle un uso lógico a la misma.

![](https://i.ibb.co/L0yN7HF/luz1.jpg)

- **Computación:** Acá logramos que las computadoras pudieran resolver problemas matemáticos por nosotros. La lógica controlada en los circuitos nos ayudará.


## Resistencia y la ley de Ohm

La resistencia no es más que la oposición al flujo de la corriente eléctrica de un circuito. Nos sirve para limitar la cantidad de corriente que pasamos por un circuito. La unidad de medida es el Ohm.

V = I * R
Voltaje = Intensidad x Resistencia

La resistencia no es otra cosa más que la oposición al flujo de la corriente eléctrica en un circuito. Un material aislante está hecho molecularmente para resistir al flujo de la corriente, en cambio un material conductor está hecho para permitir que el flujo de la corriente sea el más eficiente de todos. Los superconductores tienden a tener la resistencia en 0.

![](https://i.ibb.co/9GnD6dh/luz3.png)

La resistencia nos va a servir para limitar la cantidad de corriente que estamos pasando en un circuito.

La unidad de medida que usamos para medir la resistividad en un circuito eléctrico es el Ohm, que se obtiene usando la ley del señor Ohm. Nos sirve para calcular la resistencia en un circuito, la corriente que vamos a tener o hasta el voltaje.

![](https://i.ibb.co/0GRmgsm/luz2.png)

Es una simple, ecuación que dice que el voltaje(V) va a ser igual a la intensidad(I) de un circuito por la resistencia®.

# 2. Usar el multímetro para medir Voltaje, Corriente y Resistencia

## ¿Qué es un multímetro?

Los multímetros básicos tienen puntos malos como: la precisión al medir el circuito, medir capacitancia y otras funcionalidades que probablemente no tengan. Sin embargo, son suficiente para comenzar.

Los multímetros deben decirte que tan seguros son de usar con altos voltajes.

**Rangos**

Los multímetros vienen en diferentes costos. Los más baratos pueden salir hasta en 4 dólares, comprar este tipo de multímetros compromete la precisión al medir los circuitos, medir capacitancia o funcionalidades extras que se usarán, puede que no las tenga.
Tenemos el rango intermedio que te permitirán medir las siguientes
unidades:

  - Voltaje.
  - Continuidad.
  - Auntorango: hace que se ajuste y te dé la lectura correcta.
  - Hold: te permite guardar un valor.
  - Backlighting: te permite trabajar en lugares donde carezca la luz.
  - Iodos.
  - Resistencia.
  - Capacitancia.
  - Frecuencia.
  - Temperatura.
  - Amperaje.

Los multímetros además tienen que decirte que tan seguro son de usar con altos voltajes. Uno de calidad media soporta hasta 1.000 Volts en mediciones de voltajes. En la parte inferior del multímetro muestra donde conectar los cables de mediciones para captar lo que deseemos y obtener el resultado que queremos.

**Recomendación**

Si deseas dedicarte a esto seriamente, a la electricidad y a la electrónica, es mejor que adquieras un multímetro industrial o profesional para tener mediciones más amplias y precisas. Pueden salir muy costosos pero son inversiones a muy largo plazo. Esto solo si de verdad quieres dedicarte únicamente a esto.

**Tipos de multímetros**
**Gama baja**

![](https://i.ibb.co/SyYNHXp/m1.jpg)

**Gama media**

![](https://i.ibb.co/T2qRQdc/m2.jpg)

**Gama alta**

![](https://i.ibb.co/GpmDpzv/m3.jpg)

## ¿Qué es un circuito? Conceptos básicos de circuitos eléctricos

Un circuito eléctrico es darle un flujo o sentido al voltaje para que haga lo que quieres que haga.

Ahora veamos cómo hacer que la corriente nos sirva para algo. Los circuitos eléctricos no es otra cosa que darle sentido al uso del voltaje.
Acá tenemos un circuito eléctrico básico:

![](https://i.ibb.co/mThyQfm/1.png)

Sabemos que la electricidad se mueve de negativo a positivo, eso sería lo correcto:

![](https://i.ibb.co/99SdHyX/2.png)

Pero por tradición y por confusión de hace años, el concepto se quedó mostrando que la electricidad se mueve de positivo a negativo. Esto es algo confuso pero es así como se quedó, por convenio.

![](https://i.ibb.co/5rxQ8gB/3.png)

Quizá esto no tenga sentido pero así se definió y así se hace.

**Diodo**
Este elemento que se muestra en la gráfica se llama diodo emisor se luz. Esta sería su simbología.

![](https://i.ibb.co/T8qrXwS/4.png)

En este circuito estamos trabajando con corriente directa (D.C) es el tipo de voltaje que se usa en todo circuito electrónico. Su comportamiento es lineal.

![](https://i.ibb.co/kJMCpLp/5.png)

Suponiendo que en nuestro circuito tenemos una batería o fuente de poder de 2.7v y que tenemos un swicth que interrumpe el flujo o que evita que se cierre, se vería de la siguiente forma con su simbología.

![](https://i.ibb.co/fxBqYJ0/6.png)

Su función es hacer que el flujo de electrones llegue a su destino. Cuando el circuito está interrumpido se le llama circuito abierto, esto lo que provoca es que el circuito no tenga ninguna utilidad. Para que un circuito funcione, necesitamos hacerlo del tipo cerrado.

![](https://i.ibb.co/ncHdQR1/7.png)

Al hacer que nuestro flujo de electrones llegue a su destino haría que nuestro led se encienda. Simple y sencillamente nos indicaría que hay un flujo de energía. Solo existen dos tipos de circuito:
 
1. **Abierto:** cuando el flujo está interrumpido.
2. **Cerrado:** cuando el flujo de electrones llega a su destino.

**Circuito en serie y paralelo**
La siguiente imagen nos ayudará a ilustrar que son estos dos tipos de circuitos.

![](https://i.ibb.co/6WJv5gF/8.png)

En este caso tenemos nuestra batería de 9v y 1A. Los v serían la tensión y el A la corriente. Presta atención a la primera imagen.

**En serie**

Allí tenemos dos focos conectadas en series, es decir, una está conectada después de la otra. Las lamparas serían L1 y L2. ¿Qué sucede cuando hacemos este tipo de circuito? El voltaje será la suma de el voltaje individual de cada componente, es decir, que la suma de cada componente se irá restando al voltaje de la fuente de poder: 9v-(5v+4v…)

![](https://i.ibb.co/XbnTP0K/9.png)

Esto daría como resultado que cada lampara añadida al circuito en serie tendría disponible menos voltaje y por ende iluminaría menos.

**En paralelo**

Ahora veamos como funciona este circuito. Se le llama paralelo por que sus componente están colocados paralelamente y no en serie.

![](https://i.ibb.co/HDcmpCk/10.png)

![](https://i.ibb.co/vvyzwbL/11.png)

# 3. Entender las distintas fuentes de poder y saber elegir la mejor según tu proyecto

## Fuentes de alimentación

Todos nuestros circuitos necesitan energía eléctrica para funcionar, sabemos por sentido común que podemos utilizar baterías AA, AAA, D; y baterías recargables como las de nuestros celulares, controles de videojuegos y demás dispositivos. También tenemos cargadores (algunas veces llamados adaptadores de corriente), que se enchufan a la pared y cargan nuestras baterías y fuentes de poder, como la de tu Xbox 360 o la de tu laptop de escritorio.

El mundo de las fuentes de poder es enorme, desde pequeñas baterías que podemos ver en relojes digitales de pulso, en circuitos de bajo consumo y sistemas de IoT entre otros; hasta fuentes de alimentación basadas en energía nuclear, como la fuente del Curiosity Rover que recorrió Marte entre 2011 al 2019 con una fuente que contenía plutonio y que generaba electricidad suficiente para recargar una y otra vez sus baterías.

**Entonces, ¿Qué es una fuente de poder?**

¡Simple!; es cualquier dispositivo que utilicemos para proveer a nuestro circuito de la cantidad de voltaje y amperaje que necesitamos.

Si utilizamos por ejemplo una fuente de poder con un voltaje muy bajo, nuestros circuitos no van a funcionar (prueba en los circuitos del curso una batería AA ,que nos da entre 1.2 a 1.5 volts; y verás cómo su voltaje no alcanza para alimentar nuestro led después de las resistencias)

Si utilizamos una fuente con poco amperaje en un circuito con un motor y varios leds, verás como el motor no puede ir a toda velocidad y los leds bajan de intensidad; esto, lo puedes observar en una casa cuando hay un alto consumo de corriente eléctrica y la instalación no es muy segura, por ejemplo, al encender una motobomba eléctrica para mover agua a un segundo o tercer piso podrás observar cómo las luces bajan su intensidad, tal como en una película de terror.

Si te interesa aprender más sobre el mundo de las fuentes de poder y la electrónica de potencia, cuéntame en un comentario, este es un mundo aparte que vale la pena explorar sólo si de verdad te quieres dedicar de fondo al diseño de circuitos.

En este curso usaremos algo mucho más normal, una batería de 9 voltios como fuente de poder. Si quieres, también puedes trabajar con un cargador que tengas en casa, siempre y cuando tenga una salida de 7 a 12 volts; pero de verdad, te recomiendo más la batería, una será más que suficiente para todo el curso gracias a la eficiencia de los leds.

## ¿Qué es la tierra eléctrica?

Se suele usar para disipar corrientes que sobran en el circuito de tu casa.

**Tierra eléctrica**

Cuando trabajamos en circuitos, seguramente veremos un símbolo de tierra. Más adelante veremos a profundidad esto. Las conexiones de nuestros hogares casi siempre tienen un polo a tierra. Esto genera demasiada confusión cuando somos principiantes en esta carrera.

**¿Qué es un polo a tierra?**

Se parece a algo como esto:

![](https://i.ibb.co/YD6vFC7/tierra.png)

Es una varilla se cobre entierra para disipar la electricidad sobrante en el circuito de nuestros hogares. Si nuestra casa es lo bastante moderna, tendrá tres conectores. ¿Para que sirven estos tres conectores? Los dos primeros, generalmente los de la parte superior que están en paralelo, contienen la corriente alterna y permiten su flujo, van a poseer tensión. El tercero va conectado al cable que se va a tierra, recuerden: esto sirve para disipar excesos que pueden llegar a existir en la energía de nuestros hogares.

**Ejemplo**

Cuando no aterrizamos nuestro equipo de música o planta de sonido, puede emitir ruido que no debería. Esto pasa por que no es capaz de disipar o eliminar esa energía sobrante que fluye en nuestro circuito, como cargas electrostática y cosas parecidas que afectan a nuestro sistema.

Otro ejemplo sería cuando se va y viene la luz de golpe (en Venezuela esto pasa a cada rato equisde) los reguladores por lo general van a encargarse de reparar esa energía excedente. Si no hay un regulador pero tenemos un polo a tierra, va a regular la energía excedente.

![](https://i.ibb.co/c6m9YKs/main.jpg)

# 4. Construír circuitos básicos

## Práctica: muerte a un led, por la ciencia.

***¿Qué pasaría si conectáramos un led a una fuente de poder que supere su voltaje?*** 

Es muy probable que sepas que va a pasar. Algo a tomar en cuenta antes de empezar el experimento:

  - Una batería de nueve voltios es demasiado para alimentar a un led.
  - Todos los led funcionan de 3volt para abajo.
  - Su rango de corriente va de entre 20 a 60 miliamperios.

Cuando le pasamos una cantidad de voltaje superior a un componente se quemará. Usando una resistencia de podría impedir tal atrocidad.

Acá tenemos la batería y el led:

![](https://i.ibb.co/jrLd7kD/batery.png)

Los led tienen dos terminales, una corta y otra lagar. La patica corta es la terminal negativo y la larga la positiva.
Al conectar el led va a encender:


![](https://i.ibb.co/3ffwjPy/batery1.png)

Pero inmediatamente se muere:

![](https://i.ibb.co/jRQZ4Pc/batery2.png)

## Protoboard

Protoboard: Es útil para realizar los primeros experimentos, pero con el pasar del tiempo pueden fallar. Por lo general, son fabricadas en plástico y por dentro tienen las conexiones metálicas.

La tarjeta de prototipados es increíblemente útil para crear nuestros primeros experimentos.

![](https://i.ibb.co/cNdLhdQ/board.png)

No es recomendable que alguien que quiera dedicarse a esto de la electricidad se enfoque en usar este tipo de soluciones. Sucede que con el tiempo el contacto en las placas metálicas inferiores de la protoboard dejan de funcionar bien. Es bueno usar placas fenolicas pero eso ya es otro tema. Los beneficios serían:

1. Facilidad de uso.
2. Nos ayudará a subir de nivel en nuestra experiencia.

La protoboard está segmentada en dos partes, como pudiste ver en la imagen inferior. El espacio del medio indica que la continuidad del circuito se interrumpe en esa zona, exactamente en la zona entre e y f.
Funciona con coordenadas sencillas de los dos ejes principales del plano cartesiano enumeradas en la parte izquierda y en la parte superior por letras.

![](https://i.ibb.co/5c4fM4n/board1.png)

En este caso el eje y llega hasta el número 30 y el eje x hasta la letra i.

**Conexión de la fuente de poder**

La protoboard cuenta con un puerto que se extiende de la parte superior hasta abajo donde te permite conectar tu fuente de poder.

![](https://i.ibb.co/2P69bwM/board2.png)

_Recuerda siempre tomar en cuenta los signos + y - a la hora de conectar tu fuente de poder por que podrías dañar todos los componentes._

<h3>Consejo</h3>

Sucede que las protoboard están hechas de plástico y en su parte interior lo que crea el circuito son líneas de cobre. Si alguna vez te llegara a pasar que conectas todo bien pero sin embargo algo dejó de funcionar misteriosamente, puede ser por que las líneas de cobre no están haciendo el contacto correcto con los terminales de los componentes.

![](https://i.ibb.co/brbP63h/As-no-debe-instalarse-porque-esta-en-cortocuito-el-elemento-y-al-energizarlo-este-se-destruye-Es-un.jpg)

## Creación de un circuito básico

Aprende más en el Curso de Fundamentos de Electricidad y Electrónica disponible en tu suscripción en: http://platzi.com/electronica
Adquiere hoy la suscripción de Platzi en: http://platzi.com/precios

En esta clase el profesor Ricardo Celis nos explica cómo crear un circuito básico con un led, batería 9V, resistencia y protoboard.

La electricidad es un conjunto de fenómenos producidos por el movimiento e interacción entre las cargas eléctricas positivas y negativas de los cuerpos físicos. Tiene diferentes campos de aplicación como la eléctrica, este campo se encarga de estudiar todo lo que ocurre desde el enchufe de tu casa hasta la represa de energía o esa fuente de energía que ocurre en tu país; electrónica, campo usado en el IoT o Internet of Things y la computación donde la lógica nos ayuda a controlar los circuitos.

# 5. Resistencia: concepto y teoría

## Resistencias

Este es uno de los componentes más importantes en un circuito eléctrico. Acá una representación típica de una resistencia:

![](https://i.ibb.co/KXkhyMR/r1.png)

Tiene diferentes bandas, son cuatro: 1ra, 2ra1, 3ra y 4ra banda. Las nombraremos como A, B, C y D. En la vida real se vería así:

![](https://i.ibb.co/9cX71fs/r1-2.png)

La primera banda es de color verde, le segunda azul, la tercera negra y luego la cuarta que está más separada de color dorado.

<h3>¿Para que sirven sus colores?</h3>

No importa en donde estés, la tabla de códigos de colores no fallará.

![](https://i.ibb.co/0FzvthW/r2.png)

Nuestra resistencia tiene: verde, azul, negro y dorado

<h3>Lectura de los colores</h3>

En la tabla leeremos de izquierda a derecha, esto dará los siguientes resultados:

  - Verde: 5
  - Azul: 6
  - Negro: x10^0 = 1
  - Dorada: x5% de tolerancia

Resultado total: `56*10^0 = 56 Ohm (Más o menos, el 5% de tolerancia indica que puede ser más o menos el resultado de las 4 franjas, por lo menos un 5% de diferencia. Te puede marcar 55 o 57 Ohms y estará bien)`

**Medición**

Primeramente colocaremos nuestro multímetro en el signo de omega. Puede que esté agrupado con otros signos, usa el botón SELECT para iterar en estas opciones hasta tener la opción de medir Ohm.

![](https://i.ibb.co/PZZYc6d/rm.png)

No importa como midamos la resistencia, ella no tiene polaridad.

![](https://i.ibb.co/bNtQLzB/rm1.png)

Ahora medimos y nos da como resultado algo aproximado a 56 Ohms, eso está correcto, nos dio 55.4 Ohms.

![](https://i.ibb.co/znKbqRM/rm2.png)

¡COOL! Ahora sabemos como medir resistencias.

<h3>Colores de la Resistencia</h3>

![](https://i.ibb.co/7C8GyM3/rm3.gif)

## Potenciometros

Sigamos hablando de las resistencias. No son otra cosa que una resistencia para variar el valor. Tenemos las resistencias típicas que ya vimos antes. Vamos a ver un potenciómetro.

![](https://i.ibb.co/Z6fKcfW/p.png)

Estos potenciómetros tienen una leyenda, en este caso dice: B10K y el otro B50K, estos son los valores máximos de resistividad que tienen. Tienen tres terminales, cada una tiene una función particular, la primera y ultima terminal te da 50k de resistividad si el potenciómetro es de 50KiloOhms o 10k de resistividad si es de 10kiloOhms. La terminal del medio te da el valor que estás cambiando en tu resistividad.

**¿Cómo funcionan?**

Si lo destapamos veremos una pequeña punta que hace contacto con la tira de resistencia que tiene abajo.

![](https://i.ibb.co/ZBJ91tV/p1.png)

Si la tira de resistencia es de 10k, en la mitad mide 5k y el inicio daría B.

**Medición**

Seguimos con el multímetro puesto en Ohm para medir resistencia y procedemos a colocar los terminales del tester. Lo haremos en la primera terminal y en la tercera.

![](https://i.ibb.co/X5NHnk9/p2.png)

Si te das cuenta, el multímetro medirá 9.66, casi 10k por que ese es el rango que soporta este potenciómetro. Si giramos la perilla no habrá ningún cambio por que en las terminales 1 y 3 siempre va a mostrar la capacidad máxima que tiene el potenciómetro. La que varía su resistividad es la del medio. Para medir lo que queremos, que es la resistividad cambiante, lo debemos de hacer de la siguiente manera.

![](https://i.ibb.co/hW1zBjV/p3.png)

Giramos la perilla para observar como cambia el valor.

![](https://i.ibb.co/f8nv57Q/p4.png)

![](https://i.ibb.co/Xy17hbF/p5.png)

Conforme se va girando la perilla la resistividad va cambiando. Este es un aparato que tiene un sin fin de aplicaciones. Por ejemplo se puede usar para regular la intensidad de iluminación de un bombillo. Existen muchos tipos de potenciómetros:

![](https://i.ibb.co/VDxjk5D/p6.png)

Se pueden usar en muchos lugares. En mi equipo de música se encuentra uno que no tiene un final en la perilla, sirve para regular el volumen. Se ocupan en los joystick de los videojuegos, mide el punto o coordenada de la ubicación del joystick.

![](https://i.ibb.co/zQW3018/p7.png)

Según lo mueves en su eje el potenciómetro gira provocando que la resistividad cambie, pasando esos datos a un procesador que los interprete para saber su posición. Por eso los controles para jugar te dan la capacidad de moverte en un videojuego caminando, trotando o hasta corriendo.

**Otro ejemplo sería el siguiente potenciómetro:**

![](https://i.ibb.co/NCpdPzn/p8.png)

Sirve para regular alguna función de un aparato usando valores prefijados, se ocupaban antes cuando no había un microprocesador que leyera el potenciómetro, simplemente el fabricante diseñaba un circuito para que trabajara con esos valores fijos.

Potenciómetro lineal:

![](https://i.ibb.co/jhnX4Bd/p9.png)

## Fotoresistencias

Mide el movimiento transversal. Se aplica en consolas de audio. Los slider se crean con este tipo de potenciómetros.

Las fotorresistencias son resistencias que reaccionarán a la luz que reciben. Mayor luz menor valor resistivo. Varían conforme la luz cambia porque tienen un semiconductor adentro.

Sin resistencias que van a reaccionar a la luz que están recibiendo. A mayor luz una fotoresistencia va a tener un menor valor resistivo.

**¿Por qué pasa esto?**

Las fotoresistencias varían conforme la luz cambia por que el componente que tienen adentro es un semiconductor, se altera si recibe luz y se convierte en un material capaz de conducir la energía eléctrica. Funcionará de manera diferentes con muchos rango dependiente de cuanto material semiconductor tenga.
Esta es una fotoresistencia:

![](https://i.ibb.co/x1yNNFK/f.png)

Vamos a analizar los valores que nos arroja cuando la sometemos a luz y cuando no lo hacemos. Vamos a proceder a usar nuestro multímetro para medir los valores, no nos debemos preocupar por la polaridad ya que no tiene.

**Medición**

Si lo medimos con luz nos arroja aproximadamente 0.734 KiloOhms.

![](https://i.ibb.co/p3GYHDT/f1.png)

Ahora probemos con una linterna de teléfono.

![](https://i.ibb.co/n0Nj7pJ/f2.png)

Claramente podemos ver que bajó aún más su resistividad y por ende aumentar su conductividad. Ahora ¿Qué pasa si lo tapamos para evitar que la luz llegue a el?

![](https://i.ibb.co/J2G2Dqb/f3.png)

Recibimos un valor alto de resistencia. Tenemos que esta resistencia varió de de 0.700 a 47KiloOhms, todo dependiendo de la luz que le llegara al fotoresistor. Cuando conectamos un componente de esto a un arduino, por ejemplo, podemos hacer cosas increíbles, como un sistema de luz automático que active las luces de la casa cuando anochezca o un sistema de emergencia para cuando se corte la electricidad de la casa y prendan unas automáticamente. ¿Y qué si te digo que esto se puede conectar a Internet? Es maravilloso, podemos hasta lograr mandar un tweet cuando se prenda la luz de la casa, suena loco pero es posible. Todo esto con un componente básico como un fotoresistor.

## Demostrando el uso de una fotoresistencia

<h3>Diagrama del Circuito</h3>

![](https://i.ibb.co/MCgnVPc/fd.jpg)

Vamos a hacer una práctica básica para usar una fotoresistencia. Vamos a usar el circuito que usamos varias clases atrás.

![](https://i.ibb.co/StwDkkG/fd1.png)

Puedes ver que la resistencia pequeña se quitó, también quitaremos el botón y luego conectaremos la fotoresistencia, tendremos en cuenta que la resistividad mínima de este componente es suficiente para que nuestro led no muera. Quedará así.

![](https://i.ibb.co/GFqnC10/fd2.png)

Veremos que el led cambiará de brillo dependiendo de la luz que reciba. Si le colocamos la mano al resistor mira lo que sucede.

![](https://i.ibb.co/BZkK3wv/fd3.png)

Baja el brillo considerablemente por que el resistor aumenta su resistividad. Ahora si lo soltamos sucede lo contrario.

![](https://i.ibb.co/7znRp8q/fd4.png)

Vimos como se refleja directamente en nuestro led la variabilidad de nuestro fotoresistor según le llegue la luz.

## Controlando el brillo de nuestro led con un potenciómetro

Reutilizaremos el circuito que usamos en la clase anterior y usaremos un potenciómetro para experimentar acá. Vamos a eliminar el fotoresistor para empezar a usar el potenciómetro.

![](https://i.ibb.co/znYsP5y/fr1.png)

Ahora conectaremos nuestro potenciómetro a la protoboard.

![](https://i.ibb.co/8b6w96n/fr2.png)

Luego de que ya esté fijo y veamos que sus conexiones se hicieron bien procederemos con el experimento.

**Cosas a tomar en cuenta**

Recordemos que la primera terminal del potenciómetro va a ser donde vamos a iniciar la resistividad, en el medio tendremos el valor cambiante y por último tendremos la patita que nos dará el máximo de resistividad.

**Armando el circuito**

Procederemos a conectar el positivo a la primera terminal del potenciómetro. Luego conectaremos la salida que será la del medio, nos dará el valor cambiante y lo conectaremos a nuestra terminal positivo del led. Por ultimo conectaremos el negativo del circuito a la salida del led. Quedará así:

![](https://i.ibb.co/sw6ftMV/fr3.png)

**Prueba**

Tenemos el potenciómetro en su valor máximo de resistencia, el led se verá de esta forma:

![](https://i.ibb.co/Gn6vL5M/fr4.png)

Si lo giramos para que reduzca su resistividad pasará esto:

![](https://i.ibb.co/P9fsff0/fr5.png)

Acá llegamos al máximo de conductividad, no se muere el led por que la batería no es lo suficientemente potente para quemarlo. Para saber el rango de alimentación que un led tiene, tomemos en cuenta que el fabricando nos dará una hoja de datos que nos dirá todo sobre el componente. No ahondamos en este tema por que ya hay otros cursos que hablan sobre la investigación de cada componente.

## Cierre del curso

Nunca pares de Aprender 🎉 🎉 🎉 🎉 🎉 🎉

