ZigBee-TutorialTimbre
=====================

# Tutorial básico para hacer un timbre activado por un pulsador usando Zigbee sobre Arduino


***
***

### Descripción

Tutorial para realizar un timbre (zumbador) accionado por un pulsador, que se comunicará de forma inalámbrica, mediante motas Zigbee y usando como base de los circuitos 2 Arduinos.
Se han seguido los pasos del libro "Building Wireless Sensor Networks".


###Herramientas a utilizar

+ 2 Arduino UNO
+ 2 motas Zigbee
+ Zumbador básico
+ Pulsador 
+ Software para configuración de las motas: XCTU


###Configuración de los Zigbee

Un Zigbee tiene que ser asignado como coordinador, y el otro como router. Para ello nos vamos a la pestaña de XCTU de "Modem Configuration" y le asignamos los distintos roles
![asignar coordinador y router]() 


Los 2 tendrán el mismo PAN ID y configuraremos la "Destination address high" (0013A200) y "Destination address low" del otro Zigbee. Estos valores los podemos ver en la etiqueta [detrás de la mota]():



###Configuración de los Arduino

Los puedes consultar en [este mismo repositorio]()


###Esquemas de conexión

El esquema de conexión entre el Arduino y el pulsador:

![pulsador]()  realizado a partir de [este circuito]()  


y el esquema de conexión del Arduino y el zumbador:

![zumbador]()  realizado a partir de [este circuito]()  



En nuestro modelo puedes ver las fotos del [pulsador]() y del [zumbador](), y el timbre total que nos resultó fue:

![final]()


###Timbre funcionando

[Vídeo del timbre funcionando]()


###Materiales
En este mismo repositorio puedes ver los [esquemas de los circuitos]() y los códigos de [Arduino]()



###Autores

+ Israel Blancas Álvarez
+ José Cristóbal López Zafra
