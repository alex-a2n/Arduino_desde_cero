/*
  programa 5 bloque 3: Variables de carácteres
  mostrar carácteres por pantalla
*/

char letra ='A'; // inicialización de una variable
char string[] = "Esto es una cadena de caracteres";

void setup() {
  Serial.begin(9600);
  
  Serial.println("=== TIPOS DE DATOS de caracteres (char) ===");
  Serial.println("");
  
  Serial.println(letra); // muestra el valor de letra
  letra ++; // muestra el valor de la siguiente letra
  Serial.println(letra); Serial.println("");
  Serial.println("Otro ejemplo:");
  Serial.println(string);
}

void loop() {
}