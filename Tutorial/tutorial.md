---

## Guía completa para construir un robot que resuelve un cubo Rubik 3x3x3

### Descripción general
Este robot utiliza un Arduino Uno, servomotores, un módulo Bluetooth y una aplicación móvil para resolver un cubo Rubik. A través de la aplicación, el usuario ingresará manualmente la disposición de colores en el cubo, enviando esta disposición al Arduino para que el robot ejecute movimientos y resuelva el cubo.

---

### Lista de materiales

- **Arduino Uno** – el microcontrolador que controla el robot.
- **2 Servomotores de 12 kg** – para girar las caras del cubo y la base de este.
- **2 Capacitores de 220 µF, 16V** – para estabilizar la corriente de los servos.
- **Protoboard** – para realizar las conexiones.
- **Módulo Bluetooth HC-05 o HC-06** – para comunicar la aplicación con el Arduino.
- **Cubo Rubik 3x3x3** – el objeto a resolver.
- **Cables Jumper** – cables de conexión para realizar las conexiones en la protoboard.

---

### Parte 1: Montaje físico del robot

1. **Preparación del cubo Rubik**
   - Asegúrate de que el cubo pueda girar libremente en todas las caras. Coloca el cubo en una base firme que permita los giros y asegúrate de que la superficie sea estable para evitar movimientos durante el funcionamiento del robot.

2. **Instalación de los servomotores**
   - **Servo 1 (Cara del cubo)**: Este servo estará encargado de rotar una cara del cubo. Conéctalo de manera que pueda girar 90° en ambas direcciones y mueva la cara del cubo adecuadamente.
   - **Servo 2 (Base del cubo)**: Este servo girará la base del cubo para permitir movimientos en distintas orientaciones. Colócalo en la parte inferior y asegúrate de que pueda girar 90° en ambas direcciones.

3. **Conexión de los capacitores**
   - Los capacitores se usan para estabilizar la corriente que reciben los servos, lo cual evita que los picos de corriente afecten la estabilidad de todo el sistema.
   - Coloca cada capacitor entre el pin de alimentación (+) y el de tierra (GND) de cada servomotor.

4. **Conexión del módulo Bluetooth**
   - Conecta el módulo Bluetooth a la protoboard y realiza las conexiones al Arduino:
     - **VCC** del módulo Bluetooth al pin **5V** del Arduino.
     - **GND** del módulo Bluetooth al **GND** del Arduino.
     - **RX** del módulo al pin **TX** del Arduino.
     - **TX** del módulo al pin **RX** del Arduino.
   - Configura el módulo en modo de emparejamiento: el módulo normalmente parpadea rápidamente cuando está listo para conectarse a un dispositivo.

5. **Conexión de los servomotores al Arduino**
   - **Servo 1**: Conecta el cable de señal al pin digital **9** del Arduino.
   - **Servo 2**: Conecta el cable de señal al pin digital **10** del Arduino.
   - Conecta los pines de alimentación de ambos servos al pin **5V** del Arduino y los pines de tierra al **GND**.

---

### Parte 2: Programación del Arduino

1. **Configuración del código para controlar los servos y la conexión Bluetooth**

   Abre el IDE de Arduino y copia el código brindado en la carpeta "Arduino/codigo_c++".
---

### Parte 3: Creación de la aplicación en MIT App Inventor

1. **Diseño de la interfaz**
   - **Interfaz del cubo Rubik**:
     - Crea seis áreas en la app, una por cada cara del cubo. Cada cara se compondrá de **9 botones** en una disposición de 3x3, que representarán los cuadrados del cubo.
     - Estos botones cambiarán de color según el color seleccionado por el usuario.
   
   - **Selector de colores**:
     - Agrega seis botones para seleccionar colores (blanco, rojo, azul, verde, amarillo y naranja).
     - Cuando el usuario seleccione un color, guárdalo en una variable para cambiar el color de los botones de la cara del cubo.

   - **Botón para enviar disposición**:
     - Añade un botón que enviará la disposición completa al Arduino. Este botón convertirá la disposición en una cadena de texto para enviarla a través de Bluetooth.

2. **Configuración de comportamiento en App Inventor**
   - **Cambio de color de los botones del cubo**:
     - Usa el bloque de eventos `Button.Click` para cambiar el color de cada botón. Al hacer clic en un botón, cambia el color del botón al color seleccionado y guarda el color en una lista `disposicionCubo`.

3. **Conexión Bluetooth**
   - En el componente `BluetoothClient`, utiliza el bloque `BluetoothClient.Connect` y coloca la dirección MAC del módulo Bluetooth para conectar el dispositivo.
   - Verifica la conexión usando el bloque `BluetoothClient.IsConnected`.

4. **Envío de datos a Arduino**
   - Al presionar el botón de envío, convierte la lista `disposicionCubo` en una cadena de texto usando `list to csv row` y usa `BluetoothClient.SendText` para enviar el texto al Arduino.

---

### Consejos prácticos

- **Pruebas de movimiento**: Antes de enviar todos los datos del cubo, prueba con movimientos simples para verificar que los servos giren correctamente.
- **Optimización de conexión Bluetooth**: Empareja el módulo con el teléfono móvil y realiza pruebas de conexión desde la app móvil.
- **Estabilización de voltaje**: Asegúrate de que los capacitores están bien conectados para evitar fluctuaciones que puedan dañar los componentes.

Este tutorial ofrece una guía para ensamblar y programar tu propio robot resolutor de cubos Rubik. Mucha suerte!
