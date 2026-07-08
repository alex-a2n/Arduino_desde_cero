/*
  programa 3: Múltiples mensajes (setup)
  Sirve por ejemplo para crear un menún estático del programa de consola
*/

void setup() {
  
  Serial.begin(9600); // Comunicación serial para visualizar resultado por consola
  
  // Primera línea
  Serial.println("================================================");
  Serial.println("       Programa de un ejemplo de menú           ");
  Serial.println("================================================");

  Serial.println(" Aquí va la descripción de las funciones del programa ");
}

void loop() {
}
