/*
  programa 7 bloque 3: Operaciones básicas con enteros
*/

// Variable global, se puede utilizar en cualquier parte del prograa
int a = 1;
int b = 2;
int c = 5;
float d = 4;
float e = 5;

void setup() {
  Serial.begin(9600);

  Serial.println("suma de 2 números: ");
  float resultado1 = a + b;
  Serial.print(a);Serial.print("+");Serial.print(b);Serial.print("=");Serial.println(resultado1);
  Serial.println("");

  Serial.println("resta de 2 números: ");
  float resultado2 = a - b;
  Serial.print(d);Serial.print("-");Serial.print(c);Serial.print("=");Serial.println(resultado2);

  Serial.println("multiplicación de 2 números: ");
  float resultado3 = c * d;
  Serial.print(c);Serial.print("*");Serial.print(d);Serial.print("=");Serial.println(resultado3);

  Serial.println("división de 2 números: ");
  float resultado4 = d / b;
  Serial.print(d);Serial.print("/");Serial.print(b);Serial.print("=");Serial.println(resultado4);

  Serial.println("resto de 2 números");
  int resultado5 = c % b;
  Serial.print(c);Serial.print("%");Serial.print(b);Serial.print("=");Serial.println(resultado5);
}

void loop() {
}