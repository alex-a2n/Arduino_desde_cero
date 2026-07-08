/*
  programa 2: Mensaje que se repiite cada 1 segundo
*/

void setup() {
  
  Serial.begin(9600); // Comunicación serial para visualizar resultado por consola
  
}

void loop() {
  Serial.println("Hola mundo"); // mostrar texto por pantalla
  delay(1000); // retardo de 1000 ms entre texto y texto
}
