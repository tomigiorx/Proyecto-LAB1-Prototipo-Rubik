#include <SoftwareSerial.h>

// define los pines del módulo Bluetooth (ajustados para evitar conflictos)
SoftwareSerial btSerial(2, 3); // RX en 2, TX en 3

void setup() {
    Serial.begin(9600);       // inicia la consola Serial
    btSerial.begin(9600);     // inicia el módulo Bluetooth
    Serial.println("Bluetooth conectado exitosamente.");
}

void loop() {
    if (btSerial.available()) {
        Serial.println("Procesando datos...");

        // asegura que lee la cadena de datos y filtra caracteres no imprimibles
        String datos = "";
        while (btSerial.available()) {
            char c = btSerial.read();
            if (isPrintable(c)) { // filtra caracteres no ASCII
                datos += c;
            }
            delay(10); // añade un breve retraso para asegurar lectura completa
        }

        // mostrar datos recibidos
        Serial.println("Datos recibidos: " + datos);

        // proceso de separación de colores
        String colores[54];
        int index = 0;
        int lastIndex = 0;

        // separar los colores
        for (int i = 0; i < datos.length(); i++) {
            if (datos.charAt(i) == ',') {
                String color = datos.substring(lastIndex, i);
                color.replace("\"", ""); // eliminar comillas
                colores[index++] = color; // almacenar color sin comillas
                lastIndex = i + 1;
            }
        }
        // procesar el último color
        String color = datos.substring(lastIndex);
        color.replace("\"", ""); // eliminar comillas
        colores[index++] = color; // almacenar el último color

        // imprimir colores separados
        Serial.println("Colores separados:");
        for (int j = 0; j < index; j++) {
            Serial.println(colores[j]);
        }
    }
}

