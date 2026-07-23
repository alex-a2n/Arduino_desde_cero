/*
  programa 5: Lectura de datos del puerto serie
  Lectura de datos a través del teclado por el puerto serie, solo frases, parrafos no
*/

String texto;

void setup() {
  
  Serial.begin(9600); // Comunicación serial para visualizar resultado por consola
  
  Serial.println(" ---- LECTURA DE DATOS -----");
  Serial.println("");
  Serial.println("Ecribe algo y presiona Enter: ");
}

void loop() {

  // Verificar si hay datos disponibles
  if (Serial.available() > 0) {
    
    // leer una cadena de caracteres hasta que se encuentre un salto de línea
    texto = Serial.readStringUntil('\n');

    // Mostar el caracter introducido
    Serial.println("El texto recibido es: "); Serial.println(texto);
  }
}
