/*
  Programa 1: Operadores aritméticos compuestos
*/

void setup() {

  Serial.begin(9600);

  // Declaración de variables
  int a = 15;
  int b = 4;
  int resultado;

  // Pantalla principal
  Serial.println("=== OPERADORES DE ASIGNACIÓN COMBINADOS ===");
  Serial.println();

  Serial.print("Variable a = ");
  Serial.println(a);

  Serial.print("Variable b = ");
  Serial.println(b);

  Serial.println();

  // +=
  resultado = a;
  resultado += b;

  Serial.println("Operador += ");
  Serial.print("a += b  -> ");
  Serial.print(a);
  Serial.print(" += ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(resultado);
  Serial.println();

  // -=
  resultado = a;
  resultado -= b;

  Serial.println("Operador -= ");
  Serial.print("a -= b  -> ");
  Serial.print(a);
  Serial.print(" -= ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(resultado);
  Serial.println();

  // *=
  resultado = a;
  resultado *= b;

  Serial.println("Operador *= ");
  Serial.print("a *= b  -> ");
  Serial.print(a);
  Serial.print(" *= ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(resultado);
  Serial.println();

  // /=
  resultado = a;
  resultado /= b;

  Serial.println("Operador /= ");
  Serial.print("a /= b  -> ");
  Serial.print(a);
  Serial.print(" /= ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(resultado);
  Serial.println();

  // %=
  resultado = a;
  resultado %= b;

  Serial.println("Operador %= ");
  Serial.print("a %= b  -> ");
  Serial.print(a);
  Serial.print(" %= ");
  Serial.print(b);
  Serial.print(" = ");
  Serial.println(resultado);
  Serial.println();

  Serial.println("=== FIN ===");

}

void loop() {

}

