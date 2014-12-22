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
[asignar coordinador y router]() 


Los 2 tendrán el mismo PAN ID y configuraremos la "Destination address high" (0013A200) y "Destination address low" del otro Zigbee. Estos valores los podemos ver en la etiqueta [detrás de la mota](https://github.com/JCristobal/ZigBee-TutorialTimbre/blob/master/im%C3%A1genes/detras%20de%20la%20mota.png):



###Configuración de los Arduino

Los puedes consultar en [este mismo repositorio]()


###Esquemas de conexión

El esquema de conexión entre el Arduino y el pulsador, realizado a partir del circuito:

![circuito pulsador](https://github.com/JCristobal/ZigBee-TutorialTimbre/blob/master/Esquemas/esquema%20pulsador.jpg)  


y el esquema de conexión del Arduino y el zumbador, realizado a partir del circuito:

![circuito zumbador](https://github.com/JCristobal/ZigBee-TutorialTimbre/blob/master/Esquemas/esquema%20zumbador.jpg)  




En nuestro modelo puedes ver las fotos del [pulsador](https://github.com/JCristobal/ZigBee-TutorialTimbre/blob/master/im%C3%A1genes/pulsador.jpg) y del [zumbador](https://github.com/JCristobal/ZigBee-TutorialTimbre/blob/master/im%C3%A1genes/zumbador.jpg), y el timbre total que nos resultó fue:

![final](https://github.com/JCristobal/ZigBee-TutorialTimbre/blob/master/im%C3%A1genes/final2.jpg)


###Timbre funcionando

[Vídeo del timbre funcionando]()


###Materiales
En este mismo repositorio puedes ver los [esquemas de los circuitos](https://github.com/JCristobal/ZigBee-TutorialTimbre/tree/master/Esquemas) y los códigos de [Arduino]()



###Autores

+ Israel Blancas Álvarez
+ José Cristóbal López Zafra
