####Guía para construir el circuito

### Materiales necesarios
1. **Arduino UNO**
2. **Protoboard** 
3. **Dos servomotores de 12kg**
4. **Cables de conexión**

### Pasos para armar el circuito
1. **Conexión de energía en la protoboard:**
   - Conecta el pin **GND** del Arduino a la línea de **tierra** (negativa) de la protoboard.
   - Conecta el pin **5V** del Arduino a la línea de **alimentación positiva** de la protoboard.
![image](https://github.com/user-attachments/assets/fbde1871-88b7-41ce-b500-045353d37471)

2. **Alimentación de los servomotores:**
   - Conecta el cable **rojo** de ambos servos a la línea de **alimentación positiva** de la protoboard.
   - Conecta el cable **negro** o marrón de ambos servos a la línea de **tierra** de la protoboard.
![image](https://github.com/user-attachments/assets/30602292-89cf-48ec-92ad-d2fa2ee98c70)

3. **Conexión de control para cada servomotor:**
   - El **primer servo** tiene su cable **naranja** (señal de control) conectado al pin **9** del Arduino.
   - El **segundo servo** tiene su cable **naranja** (señal de control) conectado al pin **10** del Arduino.
![image](https://github.com/user-attachments/assets/663a5f27-fe69-47f0-895e-d3a1f703e53d)

### Explicación del funcionamiento
Este circuito utiliza dos servomotores controlados por un Arduino UNO. Los servos están conectados a pines de señal (9 y 10) del Arduino, que enviarán pulsos para controlar la posición de los servos. La alimentación y la tierra se distribuyen desde el Arduino a través de la protoboard.
