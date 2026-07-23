/*
  Programa 1: Verificar si un número es positivo
*/

float num = 0;

void setup(){

  Serial.begin(9600); // Comunicación serial
  
  Serial.println(" ---- VERIFICAR SI UN NUMERO ES POSITIVO O NEGATIVO  ----");
  Serial.println("");
  Serial.println("Introduce un número: ");
}

void loop() {

  // Verificar si hay datos disponibles
  if (Serial.available() > 0) {
    
    // leer un carácter
    num = Serial.parseFloat();

    if (num > 0){
      Serial.print(num); Serial.println(" Es positivo");
    }
    else if (num < 0){
      Serial.print(num); Serial.println(" Es negativo");
    }
    else
      Serial.println("El número introducido es 0");
  }
 
}