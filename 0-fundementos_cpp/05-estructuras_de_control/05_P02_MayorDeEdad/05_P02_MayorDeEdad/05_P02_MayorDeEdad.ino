/*
  Programa 2: Verificar si es mayor de edad
*/

int edad = 0;

void setup(){

  Serial.begin(9600); // Comunicación serial
  
  Serial.println(" ---- VERIFICAR LA EDAD  ----");
  Serial.println("");
  Serial.println("Introduce la edad: ");
}

void loop() {

  // Verificar si hay datos disponibles
  if (Serial.available() > 0) {
    
    // leer un carácter
    edad = Serial.parseInt();

    if (edad >= 18){
      Serial.print(edad); Serial.println(" Es mayor de edad");
    }
    else if (edad < 18 && edad >= 0){
      Serial.print(edad); Serial.println(" Es menor de edad");
    }
    else 
      Serial.println("Error, la edad debe ser mayor o igual a 0");
  }
 
}