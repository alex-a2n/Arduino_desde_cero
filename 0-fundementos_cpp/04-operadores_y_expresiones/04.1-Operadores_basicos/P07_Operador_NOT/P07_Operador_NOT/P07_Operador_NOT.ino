void setup() {
  Serial.begin(9600);
  
  Serial.println("=== OPERADOR NOT (!) ===");
  Serial.println("");
  
  bool sistemaEncendido = true;
  Serial.print("sistemaEncendido = ");
  Serial.println(sistemaEncendido);
  
  Serial.print("!sistemaEncendido = ");
  Serial.println(!sistemaEncendido);
  
  Serial.println("");
  
  int edad = 15;
  Serial.print("edad = ");
  Serial.println(edad);
  
  Serial.print("!(edad >= 18) = ");
  Serial.println(!(edad >= 18));
  
  Serial.println("");
  Serial.println("=== FIN ===");
}

void loop() {
}