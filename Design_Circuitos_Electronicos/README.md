<h1>Diseño de Circuitos Electrónicos</h1>

<h3>Lucas Forero</h3>

<h1>Tabla de Contenido</h1>


- [1. Introducción a Diseño de PCBs](#1-introducción-a-diseño-de-pcbs)
  - [Bienvenido al Curso de Diseño de Circuitos Electrónicos](#Bienvenido-al-Curso-de-Diseño-de-Circuitos-Electrónicos)
  - [¿Qué es una PCB? y Tipos de PCB](#¿Qué-es-una-PCB?-y-Tipos-de-PCB)
  - [Otras partes de la PCB y Tipos de PCB](#Otras-partes-de-la-PCB-y-Tipos-de-PCB)
  - [Software para diseño de PCBs y KiCad](#Software-para-diseño-de-PCBs-y-KiCad)
  - [Presentación del contenido del curso](#Presentación-del-contenido-del-curso)
  - [Esquemático o diagrama electrónico y su simbología](#Esquemático-o-diagrama-electrónico-y-su-simbología)
  - [Glosario del curso de diseño de circuitos electrónicos](#Glosario-del-curso-de-diseño-de-circuitos-electrónicos)
  - [Plataformas de Hardware Libre](#Plataformas-de-Hardware-Libre)
- [2. Creación de Esquemáticos](#2-Creación-de-Esquemáticos)
  - [Presentación del primer proyecto](#Presentación-del-primer-proyecto)
  - [Introducción al Ambiente de KiCAD y Creación del Proyecto](#Introducción-al-Ambiente-de-KiCAD-y-Creación-del-Proyecto)
  - [Componentes del proyecto](#Componentes-del-proyecto)
  - [Proveedores de Componentes y cómo buscar Componentes](#Proveedores-de-Componentes-y-cómo-buscar-Componentes)
  - [Creación de Conexiones, Alimentación y Tierra](#Creación-de-Conexiones-Alimentación-y-Tierra)
  - [Bonus: Cómo se crea un componente de Ki-CAD](#Bonus-Cómo-se-crea-un-componente-de-Ki-CAD)
  - [Bonus: Componentes en serie y paralelo](#Bonus-Componentes-en-serie-y-paralelo)
  - [Conectando los componentes de nuestro esquemático](#Conectando-los-componentes-de-nuestro-esquemático)
  - [Reto 1: Crea tu propio esquemático para una fuente de alimentación agregando salidas de voltaje](#Reto-1-Crea-tu-propio-esquemático-para-una-fuente-de-alimentación-agregando-salidas-de-voltaje)
- [3. Librerías de Footprints](#3-Librerías-de-Footprints)
  - [Creación de librerías de Footprints](#Creación-de-librerías-de-Footprints)
  - [Identificación de la Huella del Componente y Tipos de Huellas](#Identificación-de-la-Huella-del-Componente-y-Tipos-de-Huellas)
  - [Creación de Footprint o huella](#Creación-de-Footprint-o-huella)
  - [Selección de las Huellas o Footprints y Footprints predeterminadas](#Selección-de-las-Huellas-o-Footprints-y-Footprints-predeterminadas)
  - [Reto: Diseña una Huella en KiCAD](#Reto-Diseña-una-Huella-en-KiCAD)
- [4. Diseño Básico de Circuitos Impresos](#4-Diseño-Básico-de-Circuitos-Impresos)
  - [Selección del Fabricante](#Selección-del-Fabricante)
  - [Reglas de Diseño y Configuración del Ambiente de Trabajo](#Reglas-de-Diseño-y-Configuración-del-Ambiente-de-Trabajo)
  - [Importando los Componentes Electrónicos](#Importando-los-Componentes-Electrónicos)
  - [Ubicación de los Componentes](#Ubicación-de-los-Componentes)
  - [¿Cómo trazar una pista?](#¿Cómo-trazar-una-pista?)
  - [Ruteo Manual Básico a 2 Capas y Creación de Plano de Tierra.](#Ruteo-Manual-Básico-a-2-Capas-y-Creación-de-Plano-de-Tierra.)
  - [Compilando y Depurando el Diseño](#Compilando-y-Depurando-el-Diseño)
  - [Reto: Rutea tu primera PCB en KiCAD.](#Reto-Rutea-tu-primera-PCB-en-KiCAD)
- [5. Fabricación de Circuitos Impresos](#5-Fabricación-de-Circuitos-Impresos)
  - [¿Qué son los Gerbers? Importancia de los Fabricantes](#¿Qué-son-los-Gerbers?-Importancia-de-los-Fabricantes)
  - [Terminados de una PCB](#Terminados-de-una-PCB)
  - [Agregando serigrafía propia a nuestras PCBs](#Agregando-serigrafía-propia-a-nuestras-PCBs)
  - [Generación de Gerbers en KiCAD](#Generación-de-Gerbers-en-KiCAD)
  - [¿Cómo solicitar la fabricación de un PCB?](#¿Cómo-solicitar-la-fabricación-de-un-PCB?)
- [6. Proyecto Final](#6-Proyecto-Final)
  - [Presentación del proyecto](#Presentació-del-proyecto)
  - [Crear esquemático a partir de la lista de componentes y requisitos](#Crear-esquemático-a-partir-de-la-lista-de-componentes-y-requisitos)
  - [Ubicando conectores siguiendo parámetros de diseño mecánico](#Ubicando-conectores-siguiendo-parámetros-de-diseño-mecánico)
  - [Organizando nuestros componentes de PlatziArduino: Comunicaciones y Alimentación de 3.3 V](#Organizando-nuestros-componentes-de-PlatziArduino-Comunicaciones-y-Alimentación-de-3-3-V)
  - [Organizando nuestros componentes de PlatziArduino: Microcontrolador](#Organizando-nuestros-componentes-de-PlatziArduino-Microcontrolador)
  - [Organizando nuestros componentes de PlatziArduino: Otros componentes](#Organizando-nuestros-componentes-de-PlatziArduino-Otros-componentes)
  - [Comenzando a Rutear nuestro platzi Arduino: Comunicaciones y alimentación](#Comenzando-a-Rutear-nuestro-platzi-Arduino-Comunicaciones-y-alimentación)
  - [Ruteando nuestro Platzi Arduino: Terminando el circuito de alimentación](#Ruteando-nuestro-Platzi-Arduino-Terminando-el-circuito-de-alimentación)
  - [Ruteando nuestro Platzi Arduino: Terminando el circuito del microcontrolador](#Ruteando-nuestro-Platzi-Arduino-Terminando-el-circuito-del-microcontrolador)
  - [Ruteando nuestro Platzi Arduino: Finalizando el microcontrolador y conectores de programación](#Ruteando-nuestro-Platzi-Arduino-Finalizando-el-microcontrolador-y-conectores-de-programación)
  - [Reto: Termina de rutear tu Platzi Arduino](#Reto-Termina-de-rutear-tu-Platzi-Arduino)
  - [Conclusión del curso](#Conclusión-del-curso)
- [7. Qué sigue después](#7-Qué-sigue-después)
  - [Aprueba el curso](#Aprueba-el-curso)

# 1. Introducción a Diseño de PCBs

## Bienvenido al Curso de Diseño de Circuitos Electrónicos

## ¿Qué es una PCB? y Tipos de PCB

## Otras partes de la PCB y Tipos de PCB

## Software para diseño de PCBs y KiCad

## Presentación del contenido del curso

## Esquemático o diagrama electrónico y su simbología

## Glosario del curso de diseño de circuitos electrónicos

## Plataformas de Hardware Libre

# 2. Creación de Esquemáticos

## Presentación del primer proyecto

## Introducción al Ambiente de KiCAD y Creación del Proyecto

## Componentes del proyecto

## Proveedores de Componentes y cómo buscar Componentes

## Creación de Conexiones, Alimentación y Tierra

## Bonus: Cómo se crea un componente de Ki-CAD

## Bonus: Componentes en serie y paralelo

## Conectando los componentes de nuestro esquemático

## Reto 1: Crea tu propio esquemático para una fuente de alimentación agregando salidas de voltaje

# 3. Librerías de Footprints

## Creación de librerías de Footprints

## Identificación de la Huella del Componente y Tipos de Huellas

## Creación de Footprint o huella

## Selección de las Huellas o Footprints y Footprints predeterminadas

## Reto: Diseña una Huella en KiCAD

# 4. Diseño Básico de Circuitos Impresos

## Selección del Fabricante

## Reglas de Diseño y Configuración del Ambiente de Trabajo

## Importando los Componentes Electrónicos

## Ubicación de los Componentes

## ¿Cómo trazar una pista?

## Ruteo Manual Básico a 2 Capas y Creación de Plano de Tierra.

## Compilando y Depurando el Diseño

## Reto: Rutea tu primera PCB en KiCAD.

# 5. Fabricación de Circuitos Impresos

## ¿Qué son los Gerbers? Importancia de los Fabricantes

## Terminados de una PCB

## Agregando serigrafía propia a nuestras PCBs

## Generación de Gerbers en KiCAD

## ¿Cómo solicitar la fabricación de un PCB?

# 6. Proyecto Final

## Presentación del proyecto

## Crear esquemático a partir de la lista de componentes y requisitos

## Ubicando conectores siguiendo parámetros de diseño mecánico

## Organizando nuestros componentes de PlatziArduino: Comunicaciones y Alimentación de 3.3 V

## Organizando nuestros componentes de PlatziArduino: Microcontrolador

## Organizando nuestros componentes de PlatziArduino: Otros componentes

## Comenzando a Rutear nuestro platzi Arduino: Comunicaciones y alimentación

## Ruteando nuestro Platzi Arduino: Terminando el circuito de alimentación

## Ruteando nuestro Platzi Arduino: Terminando el circuito del microcontrolador

## Ruteando nuestro Platzi Arduino: Finalizando el microcontrolador y conectores de programación

## Reto: Termina de rutear tu Platzi Arduino

## Conclusión del curso

# 7. Qué sigue después

## Aprueba el curso
