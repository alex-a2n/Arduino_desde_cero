/*
  Programa 3: Elección Múltiple, indicar día de la semana a partir del numero de día de la semana
*/

int num = 0;

void setup(){

  Serial.begin(9600); // Comunicación serial
  
  Serial.println(" ---- Día de la semana  ----");
  Serial.println("");
  Serial.println("Introduce el numero de día de la semana: ");
}

void loop() {

  // Verificar si hay datos disponibles
  if (Serial.available() > 0) {
    
    // Lectura de datos:
    num = Serial.parseInt();

    // Sentencia switch para selección múltiple
    switch(num){
      case 1:
        Serial.println("Lunes");
        break;
      case 2:
        Serial.println("Martes");
        break;
      case 3:
        Serial.printlm("Miercoles");
        break;
      case 4:
        Serial.println("Jueves");
        break;
      case 5:
        Serial.println("Viernes");
        break;
      case 6:
        Serial.println("Sabado");
        break;
      case 7:
        Serial.print("Domingo");
        break;
      default: // para cuando ningúna opción coindice, por ejemplo si se introducen los números 0, 8 o superiores
        Serial.println("La semana solo tiene 7 días");
    }

  }
 
}