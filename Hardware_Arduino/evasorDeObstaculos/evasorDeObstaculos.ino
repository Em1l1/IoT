robot evasor de obstaculos

#include <SoftwareSerial.h>

SoftwareSerial BT(0, 1); // RX | TX

long Distancia, Duracion;
int Direccion = 2;
int DistanciaMinima = 10;
int i = 1;
int Velocidad = 150;

int MotorD1I = 6;
int MotorD2I = 9;
int MotorD1D = 10;
int MotorD2D = 11;

int MotorT1I = 5;
int MotorT2I = 4;
int MotorT1D = 3;
int MotorT2D = 2;

void setup() {
  // put your setup code here, to run once:
#define TriggerCentro 8 //Salida
#define TriggerDerecho 13 //Salida
#define TriggerIzquierdo A3 //Salida

#define EcoCentro 7 //Entrada
#define EcoDerecho 12 //Entrada
#define EcoIzquierdo A2 //Entrada

  pinMode(TriggerCentro, OUTPUT);
  pinMode (EcoCentro, INPUT);
  pinMode(TriggerDerecho, OUTPUT);
  pinMode (EcoDerecho, INPUT);
  pinMode(TriggerIzquierdo, OUTPUT);
  pinMode (EcoIzquierdo, INPUT);
  Serial.begin(9600);

  pinMode(MotorD1D, OUTPUT);
  pinMode(MotorD2D, OUTPUT);
  pinMode(MotorD1I, OUTPUT);
  pinMode(MotorD2I, OUTPUT);
  pinMode(MotorT1I, OUTPUT);
  pinMode(MotorT2I, OUTPUT);
  pinMode(MotorT1D, OUTPUT);
  pinMode(MotorT2D, OUTPUT);
  pinMode(9, HIGH);

  Serial.begin(9600);
  Serial.println("Listo");
  BT.begin(38400);
}
void loop() {
  if (BT.available())
    Serial.write(BT.read());

  if (Serial.available())
    BT.write(Serial.read());
  // put your main code here, to run repeatedly:
  Serial.println(MedirDistacia(Direccion));
  for (i = 1; i < 4; i++)
  {
    if (MedirDistacia(i) < DistanciaMinima)
    {
      Girar(i);
      delay(50);
      Atras();
    }
    else
    {
      Adelante(Velocidad);
    }
  }
}

float MedirDistacia (int Direccion)
{
  switch (Direccion)
  {
    case 1: //Derecho
      delay(10); //limpiar canal
      digitalWrite(TriggerDerecho, HIGH);
      delayMicroseconds(10);
      digitalWrite(TriggerDerecho, LOW);
      Duracion = pulseIn(EcoDerecho, HIGH);
      break;
    case 2: //Centro
      delay(10); //limpiar canal
      digitalWrite(TriggerCentro, HIGH);
      delayMicroseconds(10);
      digitalWrite(TriggerCentro, LOW);
      Duracion = pulseIn(EcoCentro, HIGH);
      break;
    case 3: //Izquierdo
      delay(10); //limpiar canal
      digitalWrite(TriggerIzquierdo, HIGH);
      delayMicroseconds(10);
      digitalWrite(TriggerIzquierdo, LOW);
      Duracion = pulseIn(EcoIzquierdo, HIGH);
      break;
  }
  Distancia = (Duracion / 2) / 29;
  return Distancia;
}

void Parada() {
  analogWrite(MotorD1D, 0);
  digitalWrite(MotorD2D, LOW);
  analogWrite(MotorD1I, 0);
  digitalWrite(MotorD2I, LOW);
  analogWrite(MotorT1I, 0);
  analogWrite(MotorT2I, 0);
  analogWrite(MotorT1D, 0);
  analogWrite(MotorT2D, 0);
}
void Adelante(int Velocidad) {
  int Vel = Velocidad;

  analogWrite(MotorD1D, Vel);
  digitalWrite(MotorD2D, LOW);
  analogWrite(MotorD1I, Vel - 30);
  digitalWrite(MotorD2I, LOW);
  analogWrite(MotorT1I, Vel - 30);
  analogWrite(MotorT2I, 0);
  analogWrite(MotorT1D, Vel);
  analogWrite(MotorT2D, 0);
}
void Atras() {
  digitalWrite(MotorD1D, LOW);
  digitalWrite(MotorD2D, HIGH);
  digitalWrite(MotorD1I, LOW);
  digitalWrite(MotorD2I, HIGH);
  digitalWrite(MotorT1I, LOW);
  digitalWrite(MotorT2I, HIGH);
  digitalWrite(MotorT1D, LOW);
  digitalWrite(MotorT2D, HIGH);
}
void Izquierda(int Velocidad) {
  int Vel = Velocidad;

  analogWrite(MotorD1D, Vel);
  digitalWrite(MotorD2D, LOW);
  analogWrite(MotorD1I, 0);
  digitalWrite(MotorD2I, LOW);
  analogWrite(MotorT1I, 0);
  analogWrite(MotorT2I, 0);
  analogWrite(MotorT1D, Vel);
  analogWrite(MotorT2D, 0);
}
void Derecha(int Velocidad) {
  int Vel = Velocidad;

  analogWrite(MotorD1D, 0);
  digitalWrite(MotorD2D, LOW);
  analogWrite(MotorD1I, Vel);
  digitalWrite(MotorD2I, LOW);
  analogWrite(MotorT1I, Vel);
  analogWrite(MotorT2I, 0);
  analogWrite(MotorT1D, 0);
  analogWrite(MotorT2D, 0);
}

void Girar(int i) {
  if (i == 1)
  {

    Izquierda(Velocidad);
  }
  if (i == 2)
  {

    Derecha(Velocidad);
  }
  if (i == 3)
  {

    Derecha(Velocidad);
  }
}
