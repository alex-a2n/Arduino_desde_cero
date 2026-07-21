/*
  programa 5: Lectura de datos del puerto serie
  Lectura de datos a través del teclado por el puerto serie
*/

void setup() {
  
  Serial.begin(9600); // Comunicación serial para visualizar resultado por consola
  
  Serial.println(" ---- LECTURA DE DATOS -----");
  Serial.println("");
  Serial.println("Ecribe algo y presiona Enter: ");
}

void loop() {

  // Verificar si hay datos disponibles
  if (Serial.available() > 0) {
    
    // leer un carácter
    char caracter = Serial.read();

    // Mostar el caracter introducido
    Serial.print("Caracter recibido: "); Serial.println(caracter);
  }
}
