/*
  programa 5 bloque 3: Variables globales vs locales
  declaración e inicialización de variables locales y globales y ver sus diferencias de uso
*/

int variable_global = 10;

void setup() {
  Serial.begin(9600);
  
  Serial.println("=== VARIABLES LOGALES Y GLOBALES ===");
  Serial.println("");
  
  Serial.println("Se declaró la variable_global con valor inicial de 10");
  Serial.print("La variable global vale: "); Serial.println(variable_global);

  int variable_local = 20;
  Serial.println("Se declaró la variable_local con valor inicial de 20");
  Serial.print("La variable local vale: "); Serial.println(variable_local);

  Serial.println("En el loop se va ha llamar a las varables locales y globales, la local debe dar error");

}

void loop() {
  
  Serial.print("llamada a la variable local: "); Serial.println(variable_local);
  // sin terminar
}