void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  
  int switch1 = 3;
int switch2 = 4;

 

int state1=digitalRead(switch1);
 int state2=digitalRead(switch2);

   if(state1 == HIGH){  
  
digitalWrite(12, HIGH);
  
  delay(5);
 
  }
  digitalWrite(12, LOW);

    if(state2 == HIGH){  
 digitalWrite(13, HIGH);
  
  delay(5);
 
  }
  digitalWrite(13, LOW);
}
