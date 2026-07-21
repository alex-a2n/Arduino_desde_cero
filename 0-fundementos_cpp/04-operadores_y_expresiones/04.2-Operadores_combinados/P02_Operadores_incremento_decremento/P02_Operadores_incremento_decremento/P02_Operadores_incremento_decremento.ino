/*
  Programa 2: Operadores de incremento y decremento
*/

// ++ = incremento
// -- = decremento

void setup() {

  Serial.begin(9600);

  // Declaración de variables
  int a = 15;
  int b = 4;
  

  // Pantalla principal
  Serial.println("=== OPERADORES DE INCREMENTO Y DECREMENTO ===");
  Serial.println();

  Serial.print("Variable a = ");
  Serial.println(a);

  Serial.print("Variable b = ");
  Serial.println(b);

  Serial.println();

  // INCREMENTO DE A
  

  Serial.println("Operador ++ aplicado en la variable a ");
  Serial.print("a ++ -> ");
  Serial.print(a++);Serial.print("   .......   "); Serial.println(a);
  Serial.println();
  Serial.println("Si se usa a++ primero se usa y después se incrementa");
 
 // DECREMENTO DE B

  Serial.print(" -- b  -> ");
  Serial.print(--b);Serial.print("   .......   ");Serial.println(b);
  Serial.println();
  Serial.println("Si se usa --b primero se decrementa y luego se usa");
  
 
  Serial.println();

 

  Serial.println("=== FIN ===");

}

void loop() {

}

