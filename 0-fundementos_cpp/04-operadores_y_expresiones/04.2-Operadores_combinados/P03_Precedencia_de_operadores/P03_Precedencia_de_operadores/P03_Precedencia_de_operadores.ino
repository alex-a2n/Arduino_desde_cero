/*
  Programa 3: Precedencia de operadores
*/

void setup() {
  Serial.begin(9600);
  
  Serial.println("=== PRECEDENCIA DE OPERADORES ===");
  Serial.println("");
  
  // EJEMPLO 1: Multiplicación tiene precedencia sobre suma
  Serial.println("EJEMPLO 1: Aritmética (Multiplicación antes que Suma)");
  int resultado1a = 5 + 3 * 2;      // Primero: 3*2=6, Luego: 5+6=11
  int resultado1b = (5 + 3) * 2;    // Primero: 5+3=8, Luego: 8*2=16
  
  Serial.print("5 + 3 * 2 = ");
  Serial.println(resultado1a);
  Serial.print("(5 + 3) * 2 = ");
  Serial.println(resultado1b);
  Serial.println("");
  
  // EJEMPLO 2: Expresión más compleja
  Serial.println("EJEMPLO 2: Expresión compleja");
  int resultado2a = 10 + 5 * 2 - 3;      // Primero: 5*2=10, Luego: 10+10-3=17
  int resultado2b = (10 + 5) * (2 - 3);  // Paréntesis primero: 15 * (-1) = -15
  
  Serial.print("10 + 5 * 2 - 3 = ");
  Serial.println(resultado2a);
  Serial.print("(10 + 5) * (2 - 3) = ");
  Serial.println(resultado2b);
  Serial.println("");
  
  // EJEMPLO 3: División y módulo
  Serial.println("EJEMPLO 3: División y Módulo");
  int resultado3a = 20 / 2 * 5;      // De izquierda a derecha: 20/2=10, 10*5=50
  int resultado3b = 20 / (2 * 5);    // Paréntesis primero: 2*5=10, 20/10=2
  
  Serial.print("20 / 2 * 5 = ");
  Serial.println(resultado3a);
  Serial.print("20 / (2 * 5) = ");
  Serial.println(resultado3b);
  Serial.println("");
  
  // EJEMPLO 4: Operadores lógicos (AND tiene precedencia sobre OR)
  Serial.println("EJEMPLO 4: Operadores Lógicos (AND antes que OR)");
  bool resultado4a = true || false && false;   // Primero: false AND false = false, Luego: true OR false = true
  bool resultado4b = (true || false) && false; // Paréntesis primero: true OR false = true, Luego: true AND false = false
  
  Serial.print("true || false && false = ");
  Serial.println(resultado4a);  // 1 (true)
  Serial.print("(true || false) && false = ");
  Serial.println(resultado4b);  // 0 (false)
  Serial.println("");
  
  // EJEMPLO 5: Comparación antes de AND/OR
  Serial.println("EJEMPLO 5: Comparaciones antes de Lógica");
  bool resultado5a = 5 > 3 && 2 < 4;  // Primero comparaciones: true && true = true
  bool resultado5b = 5 > 3 && 2 > 4;  // Primero comparaciones: true && false = false
  
  Serial.print("5 > 3 && 2 < 4 = ");
  Serial.println(resultado5a);  // 1 (true)
  Serial.print("5 > 3 && 2 > 4 = ");
  Serial.println(resultado5b);  // 0 (false)
  Serial.println("");
  
  // EJEMPLO 6: Paréntesis pueden cambiar TODO
  Serial.println("EJEMPLO 6: Impacto de paréntesis");
  int resultado6a = 2 + 3 * 4;        // 3*4=12, 2+12=14
  int resultado6b = (2 + 3) * 4;      // 2+3=5, 5*4=20
  int resultado6c = 2 * 3 + 4;        // 2*3=6, 6+4=10
  int resultado6d = 2 * (3 + 4);      // 3+4=7, 2*7=14
  
  Serial.print("2 + 3 * 4 = ");
  Serial.println(resultado6a);        // 14
  Serial.print("(2 + 3) * 4 = ");
  Serial.println(resultado6b);        // 20
  Serial.print("2 * 3 + 4 = ");
  Serial.println(resultado6c);        // 10
  Serial.print("2 * (3 + 4) = ");
  Serial.println(resultado6d);        // 14
  Serial.println("");
  
  Serial.println("=== CONCLUSIÓN ===");
  Serial.println("Usa paréntesis para evitar confusiones");
  Serial.println("=== FIN ===");
}

void loop() {
}