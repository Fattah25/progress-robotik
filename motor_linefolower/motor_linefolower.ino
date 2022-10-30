int motorpwmA = 10;
int motorpwmB = 11;
int motorA = 12;
int motorB = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorpwmA, OUTPUT);
  pinMode(motorpwmB, OUTPUT);
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //MAJU
  digitalWrite(motorA, HIGH);
  digitalWrite(motorB, HIGH);
  digitalWrite(motorpwmA, 100);
  digitalWrite(motorpwmB, 100);
  delay(2000);

  //KANAN
  digitalWrite(motorA, LOW);
  digitalWrite(motorB, HIGH);
  analogWrite(motorpwmA, 50);
  analogWrite(motorpwmB, 25);
  delay(2000);

  //KIRI
  digitalWrite(motorA, HIGH);
  digitalWrite(motorB, LOW);
  analogWrite(motorpwmB, 50);
  analogWrite(motorpwmA, 25);
  delay(2000);
}
