/*
  programa 1: Operadores aritmeticos básicos
*/

void setup() {
  
  Serial.begin(9600); // Comunicación serial para visualizar resultado por consola
  // Declaración de variables
  int a = 15;
  int b =4;

  // pantalla principal programa
  Serial.println("=== OPERADORES ARITMÉTICOS BÁSICOS ===");
  Serial.println("");

  // variables
  Serial.print("Variable a = "); Serial.println(a);
  Serial.print("Variable b = "); Serial.println(b);
  Serial.println("");
  
  // SUMA
  Serial.print("Suma: ");
  int suma = a + b;
  Serial.print(a);
  Serial.print(" + ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(suma);
  
  // RESTA
  Serial.print("Resta: ");
  int resta = a - b;
  Serial.print(a);
  Serial.print(" - ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(resta);
  
  // MULTIPLICACIÓN
  Serial.print("Multiplicación: ");
  int multiplicacion = a * b;
  Serial.print(a);
  Serial.print(" * ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(multiplicacion);
  


  // división
  Serial.print("División: ");
  float division = float(a) / float(b);
  Serial.print(a);
  Serial.print(" / ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(division);
  


  // MÓDULO/resto
  Serial.print("Modulo o resto: ");
  int MODULO = a % b;
  Serial.print(a);
  Serial.print(" % ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(MODULO);

  Serial.println("");
  Serial.println("=== FIN ===");

}



void loop() {
 
}


