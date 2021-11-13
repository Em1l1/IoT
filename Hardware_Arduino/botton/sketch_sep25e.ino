const int led1 = 13;
const int boton1 = 12;


void setup() {
  // put your setup code here, to run once:

  pinMode(boton1, INPUT_PULLUP);
  pinMode(led1, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(boton1) == LOW);
  {
    digitalWrite(led1, HIGH);
  } 
    
  else {
    digitalWrite(led1, LOW);
  }
   
}
