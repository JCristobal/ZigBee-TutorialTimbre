ZigBee-TutorialTimbre
=====================

# Tutorial básico para hacer un timbre activado por un pulsador, usando ZigBee sobre Arduino


***
***

### Descripción

Tutorial para realizar una introducción a la programación utilizando motas que implementan el protocolo ZigBee. El sistema comunica un pulsador con un zumbador.


Se han seguido los pasos del libro "Building Wireless Sensor Networks", de Robert Faludi.


###Herramientas a utilizar

+ 2 Arduino UNO
+ 2 motas ZigBee (aquú hemos usado XBee)
+ 1 XBee Explorer USB (programador)
+ 2 XBee Explorer Regulated (adaptador)
+ Zumbador básico
+ Pulsador
+ Protoboard
+ Software para configuración de las motas: XCTU



###Configuración de los ZigBee

Un ZigBee tiene que ser asignado como coordinador, y el otro como router. Para ello nos vamos a la pestaña de XCTU de "update firmware" y le asignamos los distintos roles.

![Asignar coordinador](http://i.imgur.com/KJNrSfC.png)

Para asignar router sería lo mismo, pero escogiendo la opción "ZigBee Router AT". Este proceso puede tardar unos minutos. Es aconsejable que escojamos la última versión.


A los dos se les asignará la misma PAN ID (es la dirección de la red en la que se comunicarán) y configuraremos la "Destination address high" y "Destination address low" del otro ZigBee. Estos valores los podemos ver en la parte de atrás de la mota.

![Detrás de la mota](https://github.com/JCristobal/ZigBee-TutorialTimbre/blob/master/im%C3%A1genes/detras%20de%20la%20mota.png).

*Los la primera fila corresponde a "Destination addres high" y la segunda a "Destination address low"*.

La mota configurada como router será la que tenga conectada el pulsador y la configurada como coordinador, el zumbador.

[Para ver más detalladamente la configuración de las motas, puedes ver este tutorial](https://alselectro.wordpress.com/2014/09/07/xbee-s2digital-sampling-with-api-frame-data/)



###Configuración de los Arduino

Simplemente será necesario cargar los programas que se adjuntan.

+ [Programa para Arduino conectado a ZigBee router](src/router.ino)
+ [Programa para Arduino conectado a ZigBee coordinador](src/coordinador.ino)


###Esquemas de conexión

El esquema de conexión entre el Arduino y el pulsador, realizado a partir del circuito:

![Circuito pulsador](Esquemas/esquema%20pulsador.jpg)  


y el esquema de conexión del Arduino y el zumbador, realizado a partir del circuito:

![Circuito zumbador](Esquemas/esquema%20zumbador.jpg)  



##Resultado

**Circuito del pulsador**

![Pulsador](im%C3%A1genes/pulsador.jpg)

**Circuito del zumbador**

![Zumbador](im%C3%A1genes/zumbador.jpg)


![Final](im%C3%A1genes/final2.jpg)


####Timbre funcionando

[Vídeo del timbre funcionando]()




###Autores

+ Israel Blancas Álvarez
+ José Cristóbal López Zafra



[Super Mario Theme para buzzer y Arduino](http://www.princetronics.com/supermariothemesong/)
