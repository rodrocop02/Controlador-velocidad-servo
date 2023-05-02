#include <Servo.h>

Servo miServo;

void setup() {
  miServo.attach(9); // Pin 9
  Serial.begin(9600); // Iniciar comunicación serial a 9600 baudios
  miServo.write(0);
}

void loop() {
Serial.println("Elija la velocidad. Tenga en cuenta que mientras mas pequeno el numero, mas veloz sera el giro del motor.");
int opcion = Serial.parseInt(); // Se selecciona la velocidad con la que se movera el servo. Mientras más bajo el número, más rapido.
while (Serial.available() == 0) {
    // Esperar hasta que haya datos en el puerto serial
  }
motor(opcion);

}


void motor(int velocidad){
  int posicion = 0;
  for (posicion = 0; posicion <= 180 ; posicion++){
    miServo.write(posicion);
    delay(velocidad);
  }

  for (posicion = 180; posicion >= 0 ; posicion--){
    miServo.write(posicion);
    delay(velocidad);
  }
}


  

  

