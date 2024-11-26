int buttonC = 7;     
int buttonD = 6;     
int buzzer = 8;      

int frequency1 = 400; 
int frequency2 = 450;

void setup() {
  pinMode(buttonC, INPUT);
  pinMode(buttonD, INPUT);
  pinMode(buzzer, OUTPUT);
}

void ringingSound() {
  for (int i = 0; i < 10; i++) { 
    if (digitalRead(buttonD) == HIGH) { 
      noTone(buzzer); 
      return;
    }
    tone(buzzer, frequency1); 
    delay(400);              

    if (digitalRead(buttonD) == HIGH) { 
      noTone(buzzer); 
      return; 
    }
    tone(buzzer, frequency2); 
    delay(400);               

    noTone(buzzer);           
    delay(200);
  }
}

void playSingleTone() {
  if (digitalRead(buttonD) == HIGH) { 
    noTone(buzzer); 
    return; 
  }
  tone(buzzer, 500);  
  delay(500);         
  noTone(buzzer);     
}

void loop() {
  int buttonStateC = digitalRead(buttonC);
  int buttonStateD = digitalRead(buttonD);

  if (buttonStateD == HIGH) {
    noTone(buzzer); 
    return;         
  }

  if (buttonStateC == HIGH) {
    ringingSound(); 
  }

  delay(50); 
}
