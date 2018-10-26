#include <Servo.h>// Declare the Servo pin 
int LED = 4; // Use the onboard Uno LED
int obstaclePin = 8;  // This is our input pin
int hasObstacle = LOW;  // HIGH MEANS NO OBSTACLE
int hasObstacle2 = LOW;
int LED2 = 5; // Use the onboard Uno LED
int obstaclePin2 = 9;  // 
int LED3 = 6;
int LED4 = 7;
int smokeA0 = A0;
// Your threshold value
int sensorThres = 300;
int servoPin = 11; 
// Create a servo object 
Servo Servo1;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(obstaclePin, INPUT);
  pinMode(obstaclePin2, INPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);  
  Servo1.attach(servoPin); 
}
void loop() {
  hasObstacle = digitalRead(obstaclePin); //Reads the output of the obstacle sensor from the 7th PIN of the Digital section of the arduino
  hasObstacle2 = digitalRead(obstaclePin2); //
  if (hasObstacle == HIGH) //LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    Serial.println("Stop something is ahead!!");
    digitalWrite(LED, HIGH);
    digitalWrite(LED2, HIGH);////Illuminates the 13th Port LED
  }
  else if (hasObstacle2 == HIGH) //LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    Serial.println("Stop something is ahead!!");
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);////Illuminates the 13th Port LED
  }
  else
  {
    Serial.println("Path is clear");
    digitalWrite(LED, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
  delay(500);
  int analogSensor = analogRead(smokeA0);
  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
  Servo1.write(120); 
  delay(2000); 
  }
  else
  {
  Servo1.write(30); 
  delay(2000); 
  }
  delay(1000);

}
