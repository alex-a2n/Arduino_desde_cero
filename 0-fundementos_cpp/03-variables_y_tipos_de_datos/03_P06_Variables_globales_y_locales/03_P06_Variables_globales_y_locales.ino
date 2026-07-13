/*
  programa 6 bloque 3: Variables globales y locales
*/

// Variable global, se puede utilizar en cualquier parte del prograa
int contadorGlobal = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  // Variable local, solo se puede usar en esta parte del programa
  int contadorLocal = 0;

  contadorGlobal++;
  contadorLocal++;

  Serial.print("Global: ");
  Serial.print(contadorGlobal);

  Serial.print("   Local: ");
  Serial.println(contadorLocal);

  delay(1000);
}