// variables
int green = 22;

// Variable constante
int byte blue = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blue, HIGH);
  delay(200);
  digitalWrite(blue, LOW);
  delay(100);

  digitalWrite(green, HIGH);
  delay(200);
  digitalWrite(green, LOW);
  delay(100);
}
