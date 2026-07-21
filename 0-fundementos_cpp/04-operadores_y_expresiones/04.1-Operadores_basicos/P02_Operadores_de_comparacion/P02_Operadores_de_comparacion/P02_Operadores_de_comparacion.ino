/*
  programa 2: Operadores de comparación, resultados booleanos
*/

void setup() {
  
  Serial.begin(9600); // Comunicación serial para visualizar resultado por consola
  // Declaración de variables
  int a = 15;
  int b = 4;
  int c= 4;

  // pantalla principal programa
  Serial.println("=== OPERADORES DE COMPARACIÓN BÁSICOS ===");
  Serial.println("");
  Serial.println("Si es verdadero imprime \"1\", si es falso imprime \"0\" ");
  // variables
  Serial.print("Variable a = "); Serial.println(a);
  Serial.print("Variable b = "); Serial.println(b);
  Serial.print("Variable c = "); Serial.println(c);
  Serial.println("");
  
  // < menor que
  Serial.print("Menor que \"<\": ");
  bool resultado1;
  resultado1 = a < b;
  Serial.print(a);
  Serial.print(" < ");
  Serial.print(b);
  Serial.println(" ? ");
  Serial.print("El resultado es: ");Serial.println(resultado1);
  
  // > mayor que
  Serial.print("Menor que \">\": ");
  bool resultado2;
  resultado2 = a > b;
  Serial.print(a);
  Serial.print(" > ");
  Serial.print(b);
  Serial.println(" ? ");
  Serial.print("El resultado es: ");Serial.println(resultado2);
  
  // > mayor o igual que
  Serial.print("Menor que \">=\": ");
  bool resultado3;
  resultado3 = c >= b;
  Serial.print(c);
  Serial.print(" >= ");
  Serial.print(b);
  Serial.println(" ? ");
  Serial.print("El resultado es: ");Serial.println(resultado2);

  // distino
  Serial.print("Distinto de \"!\": ");
  bool resultado4;
  resultado4 = a!=b;
  Serial.print(a);
  Serial.print(" ! ");
  Serial.print(b);
  Serial.println(" ? ");
  Serial.print("El resultado es: ");Serial.println(resultado4);
  
}



void loop() {
 
}


