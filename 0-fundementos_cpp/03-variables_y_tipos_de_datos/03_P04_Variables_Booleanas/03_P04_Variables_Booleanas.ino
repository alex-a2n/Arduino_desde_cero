/*
  programa 3 bloque 3: Variables booleanas
  declaración e inicialización de variables tipo bool
*/

void setup() {
  Serial.begin(9600);
  
  Serial.println("=== TIPOS DE DATOS BOOLEANOS ===");
  Serial.println("");
  
  // bool
  bool var1 = true;
  Serial.print("var1: ");
  Serial.println(var1);

  bool var2 = false;
  Serial.print("var2: ");
  Serial.println(var2);

  bool var3= 3;
  Serial.print("var3: ");
  Serial.println(var1);  
  Serial.println("Como \"var3\" es distinto de \"0\" se considera \"true\"");
  
  Serial.println("");
  Serial.println("=== FIN ===");
}

void loop() {
}