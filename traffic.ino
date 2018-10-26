int LEDr=33;
int LEDy=35;
int LEDg=37;
int LEDr2=39;
int LEDy2=41;
int LEDg2=43;
int butt=LOW;
void setup() {
  pinMode(LEDr, OUTPUT);
  pinMode(LEDr2, OUTPUT);
  pinMode(LEDy, OUTPUT);
  pinMode(LEDy2, OUTPUT);
  pinMode(LEDg, OUTPUT);
  pinMode(LEDg2, OUTPUT);
  pinMode(butt, INPUT);
  Serial.begin(9600);   
}
void loop() {
 butt=digitalRead(40);
 digitalWrite(LEDr,HIGH);
 digitalWrite(LEDg2,HIGH);
 digitalWrite(LEDy,LOW);
 digitalWrite(LEDy2,LOW);
 digitalWrite(LEDg,LOW);
 digitalWrite(LEDr2,LOW);
 delay(3000);
 butt=digitalRead(40);
 if(butt==HIGH)
{
   digitalWrite(LEDr,LOW);
   digitalWrite(LEDy,LOW);
   digitalWrite(LEDg,HIGH);
   digitalWrite(LEDr2,HIGH);
   digitalWrite(LEDy2,LOW);
   digitalWrite(LEDg2,LOW);
   delay(3000);
}
 digitalWrite(LEDy,HIGH);
 digitalWrite(LEDy2,HIGH);
 digitalWrite(LEDr,LOW);
 digitalWrite(LEDg2,LOW);
 digitalWrite(LEDg,LOW);
 digitalWrite(LEDr2,LOW);
 delay(1000);
 butt=digitalRead(40);
 if(butt==HIGH)
{
 digitalWrite(LEDr,LOW);
 digitalWrite(LEDy,LOW);
 digitalWrite(LEDg,HIGH);
 digitalWrite(LEDr2,HIGH);
 digitalWrite(LEDy2,LOW);
 digitalWrite(LEDg2,LOW);
 delay(3000);
}
 digitalWrite(LEDr,LOW);
 digitalWrite(LEDy,LOW);
 digitalWrite(LEDg,HIGH);
 digitalWrite(LEDr2,HIGH);
 digitalWrite(LEDy2,LOW);
 digitalWrite(LEDg2,LOW);
 delay(3000);
 digitalWrite(LEDy,HIGH);
 digitalWrite(LEDy2,HIGH);
 digitalWrite(LEDr,LOW);
 digitalWrite(LEDg2,LOW);
 digitalWrite(LEDg,LOW);
 digitalWrite(LEDr2,LOW);
 delay(1000);
 butt=digitalRead(40);
 if(butt==HIGH)
{
 digitalWrite(LEDr,LOW);
 digitalWrite(LEDy,LOW);
 digitalWrite(LEDg,HIGH);
 digitalWrite(LEDr2,HIGH);
 digitalWrite(LEDy2,LOW);
 digitalWrite(LEDg2,LOW);
 delay(3000);
} 
}
