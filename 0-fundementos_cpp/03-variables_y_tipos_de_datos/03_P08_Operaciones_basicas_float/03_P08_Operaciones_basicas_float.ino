/*
  programa 7 bloque 3: Operaciones básicas con float
*/

// Variable global, se puede utilizar en cualquier parte del prograa
float a = 1;
float b = 2.5;
float c = 5;
float d = 4.5;
float e = 2;

void setup() {
  Serial.begin(9600);

  Serial.println("suma de 2 números: ");
  float resultado1 = a + b;
  Serial.print(a);Serial.print("+");Serial.print(b);Serial.print("=");Serial.println(resultado1);
  Serial.println("");

  Serial.println("resta de 2 números: ");
  float resultado2 = d - c;
  Serial.print(d);Serial.print("-");Serial.print(c);Serial.print("=");Serial.println(resultado2);
  Serial.println("");
 
  Serial.println("multiplicación de 2 números: ");
  float resultado3 = c * d;
  Serial.print(c);Serial.print("*");Serial.print(d);Serial.print("=");Serial.println(resultado3);
  Serial.println("");

  Serial.println("división de 2 números: ");
  float resultado4 = d / b;
  Serial.print(d);Serial.print("/");Serial.print(b);Serial.print("=");Serial.println(resultado4);
  Serial.println("");
  
  Serial.println("resto de 2 números");
  int cociente = c / e;
  float resultado5 = c - (cociente * e);
  Serial.print(c); Serial.print("%"); Serial.print(e); Serial.print("="); Serial.println(resultado5);
}

void loop() {
}