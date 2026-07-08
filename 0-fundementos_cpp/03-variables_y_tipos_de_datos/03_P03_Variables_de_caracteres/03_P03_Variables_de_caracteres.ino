/*
  programa 3 bloque 3: Vaariables de caracteres
  declaración e inicialización de variables tipo char
*/

void setup() {
  Serial.begin(9600);
  
  Serial.println("=== TIPOS DE CARACTERES ===");
  Serial.println("");
  
  // char (carácter normal)
  char caracter1 = 'A';
  Serial.print("char: ");
  Serial.println(caracter1);
  
  // unsigned char (carácter sin signo, rango 0-255)
  unsigned char caracter2 = 'B';
  Serial.print("unsigned char: ");
  Serial.println(caracter2);
  
  // String (cadena de caracteres)
  String texto = "Hola Mundo";
  Serial.print("String: ");
  Serial.println(texto);
  
  Serial.println("");
  Serial.println("=== FIN ===");
}

void loop() {
}