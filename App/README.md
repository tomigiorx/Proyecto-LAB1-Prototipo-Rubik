## Tutorial de Uso de R3SU3LV3

### Paso 1: Conectar el módulo al dispositivo móvil

1. **Emparejar el módulo Bluetooth**: En el dispositivo móvil, asegúrate de que el Bluetooth esté activado. Busca el módulo Bluetooth en la lista de dispositivos y emparéjalo.

### Paso 2: Configurar el cubo Rubik en la aplicación

1. **Representación de las caras del cubo**:
   - La interfaz de la aplicación tiene un menú navegable que muestra las seis caras del cubo Rubik, donde cada cuadrado representa un bloque de color en el cubo.
   - Cada cara tiene nueve botones que corresponden a cada uno de los cuadrados.

2. **Selección de colores**:
   - En la parte inferior de la pantalla, se encuentran los botones que representan los colores del cubo Rubik.
   - Para asignar un color a un cuadrado, tocar el color deseado y luego seleccionar el cuadrado a pintar en la cuadrícula de una de las caras.
   - Repetir este proceso para todas las caras del cubo hasta completar la disposición.

### Paso 3: Enviar la configuración al Arduino

1. **Verificación de la configuración**:
   - Asegurarse de que todas las caras del cubo en la aplicación coincidan con la disposición real del cubo Rubik.
   - Revisar cada cuadrado y color en la pantalla para confirmar la configuración.

2. **Enviar datos al Arduino**:
   - Una vez que el cubo esté configurado en la aplicación, presionar el botón **Enviar** para transmitir los datos al Arduino a través de la conexión Bluetooth.
   - La aplicación enviará la disposición de colores al Arduino, el cual interpretará estos datos para planificar la resolución del cubo.

![image](https://github.com/user-attachments/assets/0141a3e8-0512-4ed7-8532-58ccc436af2f) ![image](https://github.com/user-attachments/assets/16a4a468-8589-4b38-afb9-eda8a624b67a)


### Paso 4: Ejecución de la resolución del cubo por el Robot

1. **Iniciar el proceso de resolución**:
   - Una vez que el Arduino reciba la configuración de colores, el robot empezará a realizar los movimientos necesarios para resolver el cubo.
   - La resolución puede tomar unos segundos, dependiendo de la complejidad de la configuración inicial.

2. **Observación del progreso**:
   - Puedes observar el movimiento de los servomotores en el robot mientras realiza la secuencia de movimientos para resolver el cubo.
   - Si el robot completa la secuencia correctamente, el cubo quedará resuelto.

### Paso 5: Reiniciar la configuración

- Si se desea resolver una nueva disposición del cubo, volver a la pantalla de configuración en la aplicación y cambiar los colores según la nueva disposición.
- Repetir los pasos anteriores para enviar la nueva configuración al Arduino y permitir que el robot lo resuelva de nuevo.

---
