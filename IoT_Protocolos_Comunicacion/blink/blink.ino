//Variables
#define LED 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);   //Configurand el pin 2 como salida.
}

void loop() {
  // put your main code here, to run repeatedly:
  // Colocaré mi código para encender el LED por 1 seg
  digitalWrite(LED, HIGH);
  delay(1000);
  // Colocaré mi código para apagar el LED por 1 seg
  digitalWrite(LED, LOW);
  delay(1000);
}