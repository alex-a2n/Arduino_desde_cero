/*
  programa 4: Operadores de coparación 2
*/

int a = 15;
int b = 8;
int c = 15;

void setup() {

  Serial.begin(9600);

  Serial.println("=== COMPARACIÓN: MAYOR Y MENOR ===");
  Serial.println("");

  Serial.print("A = "); Serial.println(a);
  Serial.print("B = "); Serial.println(b);
  Serial.print("c = "); Serial.println(c);
  
  Serial.print("a < b: ");
  Serial.println(a < b);
  
  Serial.print("a > b: ");
  Serial.println(a > b);
  
  Serial.print("a <= c: ");
  Serial.println(a <= c);
  
  Serial.print("a >= c: ");
  Serial.println(a >= c);
  
  Serial.println("");
  Serial.println("=== FIN ===");
}

void loop() {

}


