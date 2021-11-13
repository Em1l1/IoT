int ledRosa1 = 3;
int potPin = A0;
int potValue = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledRosa1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  Serial.println(potValue);
  digitalWrite(ledRosa1, HIGH);
  delay(potValue);
  digitalWrite(ledRosa1, LOW);
  delay(potValue);
}
