# Proyecto LAB1 - Prototipo: Logic-3
Este proyecto consiste en una aplicación desarrollada en MIT App Inventor para simular y controlar la resolución de un cubo Rubik 3x3x3 mediante un robot operado con Arduino. La aplicación permite al usuario ingresar manualmente la configuración de colores del cubo y luego enviar esta información al robot a través de Bluetooth, quien se encargará de resolverlo utilizando una serie de movimientos automatizados.

![image](https://github.com/user-attachments/assets/7aa64fd6-4d45-4df2-86e9-2c894aa654de)

## Características
* **Interfaz de usuario en MIT App Inventor:** la aplicación incluye una interfaz visual donde el usuario puede seleccionar los colores de cada cara del cubo Rubik. Cada cara del cubo se muestra en la pantalla como una cuadrícula de 3x3, permitiendo al usuario tocar cada cuadrado y asignarle un color.

* **Simulación gráfica de la configuración del cubo:** la aplicación muestra los colores ingresados en una representación visual del cubo. Esta vista permite verificar que los colores ingresados coincidan con la configuración real del cubo antes de iniciar la resolución.

* **Control de robot a través de Arduino:** el robot se construye con servomotores y un Arduino que recibe las instrucciones desde la aplicación.

## Componentes utilizados
### MIT App Inventor:

* Diseño de la interfaz de usuario para ingresar los colores del cubo.
* Programación de la lógica para dibujar las caras del cubo en una cuadrícula de 3x3.
* Comunicación Bluetooth para enviar datos al Arduino.
  
### Arduino:

* **Arduino Uno:** controlador principal que recibe las instrucciones de movimiento.
* **Módulo Bluetooth:** permite la comunicación inalámbrica entre el Arduino y la aplicación en MIT App Inventor.
* **Servomotores de 12 kg:** realizan los movimientos físicos del cubo Rubik.
* **Capacitores y Protoboard:** soporte y estabilidad para los servomotores.

## Funcionamiento del proyecto
**Ingreso de colores:** el usuario selecciona el color de cada cuadrado en la aplicación para establecer la configuración inicial del cubo Rubik.

**Dibujo de la configuración:** la aplicación utiliza bloques de código optimizados para dibujar cada cara del cubo en la pantalla, calculando las posiciones de cada cuadrado con un sistema de bucles y desplazamientos dinámicos.

**Comunicación con el robot:** una vez que se ha configurado el cubo, la aplicación envía los datos al Arduino a través de Bluetooth.

**Resolución del cubo:** el Arduino, equipado con servomotores, ejecuta una secuencia de movimientos para resolver el cubo según la configuración recibida.
