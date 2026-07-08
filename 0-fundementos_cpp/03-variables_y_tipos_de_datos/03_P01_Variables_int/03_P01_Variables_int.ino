/*
  programa 1 bloque 3: Vaariables int
  declaración e inicialización de variables
*/

int a;      // declaración de variable a
int b;      // declaración de variable b
int c = 3;  // declaración e inicialización de variable c

void setup() {
  
  Serial.begin(9600);

  a = 1;  // asignación de valor a la variable a
  Serial.print("la variable a es: "); Serial.println(a);
  b = 2;  // asignación de valor a la variable b
  Serial.print("la variable b es: "); Serial.println(b);
  c = 3;  // asignación de valor a la variable c
  Serial.print("la variable c es: "); Serial.println(c);
}
void loop() {}