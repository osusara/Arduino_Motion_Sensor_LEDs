float tim,dis;
void setup() {
  pinMode(4,OUTPUT); //LED Left 1 (From left corner)
  pinMode(5,OUTPUT); //LED Left 2
  pinMode(6,OUTPUT); //LED Left 3
  pinMode(7,OUTPUT); //LED Left 4
  pinMode(10,OUTPUT); //LED Right 4
  pinMode(11,OUTPUT); //LED Right 3
  pinMode(12,OUTPUT); //LED Right 2
  pinMode(13,OUTPUT); //LED Right 1 (From right corner)

  pinMode(9,INPUT); //Ultra Sonic echo
  pinMode(8,OUTPUT); //Ultra Sonic Trig
}

void loop() {
  digitalWrite(8,LOW);
  delayMicroseconds(10);
  digitalWrite(8,HIGH);
  delayMicroseconds(2);
  digitalWrite(8,LOW);

  tim = pulseIn(9,HIGH);
  dis = tim*0.034/2;

  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);

  if(dis < 30){
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(3000);
      
    digitalWrite(4,LOW);
    digitalWrite(13,LOW);
    delay(100);
    digitalWrite(4,HIGH);
    digitalWrite(13,HIGH);
    delay(10);

    digitalWrite(5,LOW);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(5,HIGH);
    digitalWrite(12,HIGH);
    delay(10);

    digitalWrite(6,LOW);
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(6,HIGH);
    digitalWrite(11,HIGH);
    delay(10);

    digitalWrite(7,LOW);
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(7,HIGH);
    digitalWrite(10,HIGH);
    delay(10);
  }
  
  else{
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }
}
