int buttonC = 7;
int buzzer = 8;
int whitePin = 9;

int frequency1 = 400;
int frequency2 = 450;

void setup() {
  pinMode(buttonC, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(whitePin, OUTPUT);
}

void ringingSound() {
  for (int i = 0; i < 2; i++) { 
    digitalWrite(whitePin, HIGH);    
    tone(buzzer, frequency1); 
    delay(400);              
    tone(buzzer, frequency2); 
    delay(400);               
    noTone(buzzer);           
    digitalWrite(whitePin, LOW); 
    delay(200);
  }
}

void loop() {
  int buttonStateC = digitalRead(buttonC);

  if (buttonStateC == HIGH) {
    ringingSound();
  } else {
    noTone(buzzer);
    digitalWrite(whitePin, LOW); 
  }
  delay(50);
}
