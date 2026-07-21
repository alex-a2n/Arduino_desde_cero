/*
  programa 3: Operadores lógicos
*/

bool A = true;
bool B = false;

void setup() {

  Serial.begin(9600);

  Serial.println("=== OPERACIONES BOOLEANAS ===");

  Serial.print("A = "); Serial.println(A);

  Serial.print("B = "); Serial.println(B);

  // Operador AND
  Serial.println("Operador AND");
  Serial.print("A && B = "); Serial.println(A && B);

  // Operador OR
  Serial.println("Operador OR");
  Serial.print("A || B = "); Serial.println(A || B);

  // Operador NOT
  Serial.println("Operador NOT");
  Serial.print("!A = "); Serial.println(!A);

  Serial.print("!B = "); Serial.println(!B);

  // Combinación de operaciones
  Serial.println("Operación combibada:");
  bool resultado = (A || B) && (!B);

  Serial.print("(A || B) && (!B) = ");
  Serial.println(resultado);
}

void loop() {

}


