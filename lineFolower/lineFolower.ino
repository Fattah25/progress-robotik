const int sensor = 5;
const int sensor2 = 6;
//int buzz = 4;
int motorpwmA = 10;
int motorpwmB = 11;
int motorA = 12;
int motorB = 13;
int a;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(sensor2, INPUT);
  //pinMode(buzz, OUTPUT);
  pinMode(motorpwmA, OUTPUT);
  pinMode(motorpwmB, OUTPUT);
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);

  //Serial.println("coba sensor garis");

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sensor) == LOW && digitalRead(sensor2) == LOW){
    //digitalWrite(buzz, HIGH);
    digitalWrite(motorA, HIGH);
    digitalWrite(motorB, HIGH);
    digitalWrite(motorpwmA, 200);
    digitalWrite(motorpwmB, 200);
    a = 1;
    
  }else if(digitalRead(sensor) == LOW && digitalRead(sensor2) == HIGH){
    digitalWrite(motorA, LOW);
    digitalWrite(motorB, HIGH);
    analogWrite(motorpwmB, 150);
    analogWrite(motorpwmA, 110);
    
  }
  else if(digitalRead(sensor) == HIGH && digitalRead(sensor2) == LOW){

    digitalWrite(motorA, HIGH);
    digitalWrite(motorB, LOW);
    analogWrite(motorpwmA, 150);
    analogWrite(motorpwmB, 110);
    //delay(200);
  }
  else{
    delay(500);
    digitalWrite(motorA, LOW);
    digitalWrite(motorB, LOW);
    digitalWrite(motorpwmA, 0);
    digitalWrite(motorpwmB, 0);
//      `
  }
}
