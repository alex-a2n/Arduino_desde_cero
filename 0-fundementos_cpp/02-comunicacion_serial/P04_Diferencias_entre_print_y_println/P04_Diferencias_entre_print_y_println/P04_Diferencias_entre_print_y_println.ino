/*
  programa 4: Diferencias entre print() y println()
  Sirve por ejemplo para crear un menún estático del programa de consola
*/

void setup() {
  
  Serial.begin(9600); // Comunicación serial para visualizar resultado por consola
  
  Serial.print("Este es el inicio de un mensaje con print("") "); Serial.print("Este es el final");
  Serial.println("");
  Serial.println("Este es el comienzo de un mensaje con println("") ");Serial.println("Este es el final");
}

void loop() {
}
