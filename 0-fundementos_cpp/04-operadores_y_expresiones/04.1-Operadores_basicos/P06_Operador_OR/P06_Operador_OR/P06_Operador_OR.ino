void setup() {
  Serial.begin(9600);
  
  int temperatura = 35;
  int lluvia = 0;
  
  Serial.println("=== OPERADOR OR (||) ===");
  Serial.println("");
  
  Serial.print("(");
  Serial.print(temperatura);
  Serial.print(" > 30) || (");
  Serial.print(lluvia);
  Serial.print(" == 1): ");
  Serial.println((temperatura > 30) || (lluvia == 1));
  
  Serial.print("(5 < 0) || (");
  Serial.print(lluvia);
  Serial.print(" == 1): ");
  Serial.println((5 < 0) || (lluvia == 1));
  
  Serial.println("");
  Serial.println("=== FIN ===");
}

void loop() {
}