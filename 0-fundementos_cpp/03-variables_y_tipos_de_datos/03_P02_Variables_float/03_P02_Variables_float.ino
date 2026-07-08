/*
  programa 2 bloque 3: Vaariables int
  declaración e inicialización de variables tipo float
*/

float a;      // declaración de variable a
double b;      // declaración de variable b
float c;  // declaración de variable c
unsigned int d;  //declaración decariable d

void setup() {
  
  Serial.begin(9600);

  a = 1.26154651652156;  // asignación de valor a la variable a
  Serial.print("la variable a es: "); Serial.println(a);
  b = 2.26154651652156;  // asignación de valor a la variable b
  Serial.print("la variable b es: "); Serial.println(b);
  c = 3.26154651652156;  // asignación de valor a la variable c
  Serial.print("la variable c es: "); Serial.println(c);
  d = -3652156;  // asignación de valor a la variable d
  Serial.print("la variable d es: "); Serial.println(d);
}
void loop() {}