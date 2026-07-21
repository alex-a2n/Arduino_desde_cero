void setup() {
  Serial.begin(9600);
  
  int edad = 25;
  int saldo = 150;
  
  Serial.println("=== OPERADOR AND (&&) ===");
  Serial.println("");
  
  Serial.print("(");
  Serial.print(edad);
  Serial.print(" >= 18) && (");
  Serial.print(saldo);
  Serial.print(" >= 100): ");
  Serial.println((edad >= 18) && (saldo >= 100));
  
  Serial.print("(");
  Serial.print(edad);
  Serial.print(" >= 18) && (");
  Serial.print(saldo);
  Serial.print(" >= 200): ");
  Serial.println((edad >= 18) && (saldo >= 200));
  
  Serial.println("");
  Serial.println("=== FIN ===");
}

void loop() {
}