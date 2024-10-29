## Tutorial de Uso de la App de MIT App Inventor

### Paso 1: Conectar la Aplicación con el Arduino

1. **Emparejar el Módulo Bluetooth**: En el dispositivo móvil, asegúrate de que el Bluetooth esté activado. Busca el módulo Bluetooth (por ejemplo, HC-05 o HC-06) en la lista de dispositivos y empareja con él.
2. **Conectar desde la Aplicación**:
   - Abre la aplicación en tu dispositivo móvil.
   - En la pantalla principal, presiona el botón **Conectar**.

### Paso 2: Configurar el Cubo Rubik en la Aplicación

1. **Representación de las Caras del Cubo**:
   - La interfaz de la aplicación muestra las seis caras del cubo Rubik en formato de cuadrícula 3x3, donde cada cuadrado representa un bloque de color en el cubo.
   - Cada cara tiene nueve botones que corresponden a cada uno de los cuadrados.

2. **Seleccionar Colores**:
   - En la parte inferior de la pantalla, encontrarás botones de colores que representan los posibles colores del cubo Rubik.
   - Para asignar un color a un cuadrado, toca el color deseado y luego selecciona el cuadrado que quieras pintar en la cuadrícula de una de las caras.
   - Repite este proceso para todas las caras del cubo hasta completar la configuración.

### Paso 3: Enviar la Configuración al Arduino

1. **Verificación de la Configuración**:
   - Asegúrate de que todas las caras del cubo en la aplicación coincidan con la disposición real del cubo Rubik.
   - Revisa cada cuadrado y color en la pantalla para confirmar la configuración.

2. **Enviar Datos al Arduino**:
   - Una vez que el cubo esté configurado en la aplicación, presiona el botón **Enviar** para transmitir los datos al Arduino a través de la conexión Bluetooth.
   - La aplicación enviará la disposición de colores al Arduino, quien interpretará estos datos para planificar la resolución del cubo.

![image](https://github.com/user-attachments/assets/0141a3e8-0512-4ed7-8532-58ccc436af2f) ![image](https://github.com/user-attachments/assets/a0884a2f-1309-4ad4-a19f-eaf47a34020c)



### Paso 4: Ejecución de la Resolución del Cubo por el Robot

1. **Iniciar el Proceso de Resolución**:
   - Una vez que el Arduino reciba la configuración de colores, el robot empezará a realizar los movimientos necesarios para resolver el cubo.
   - La resolución puede tomar unos segundos, dependiendo de la complejidad de la configuración inicial.

2. **Observación del Progreso**:
   - Puedes observar el movimiento de los servomotores en el robot mientras realiza la secuencia de movimientos para resolver el cubo.
   - Si el robot completa la secuencia correctamente, el cubo quedará resuelto.

### Paso 5: Reiniciar la Configuración

- Si deseas resolver una nueva configuración del cubo, simplemente vuelve a la pantalla de configuración en la aplicación y cambia los colores según la nueva disposición.
- Repite los pasos anteriores para enviar la nueva configuración al Arduino y permitir que el robot lo resuelva de nuevo.

---

## Nota: Solución de Problemas Comunes

- **El Bluetooth no se conecta**: Asegúrate de que el módulo Bluetooth esté correctamente emparejado con el dispositivo y que el Arduino esté encendido.
- **La disposición de colores es incorrecta**: Verifica que hayas seleccionado correctamente cada color y posición en la aplicación antes de enviarla.
- **El robot no realiza los movimientos esperados**: Esto puede ocurrir si los datos no se transmitieron correctamente. Intenta enviar la configuración de nuevo y asegúrate de que la conexión Bluetooth esté estable.

---
