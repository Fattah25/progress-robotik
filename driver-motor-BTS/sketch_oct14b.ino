#define mr1 5
#define mr2 6

int tombol1 = 7;
int tombol2 = 8;
int nilai1, nilai2;
void setup() {
  // put your setup code here, to run once:
  pinMode(mr1, OUTPUT);
  pinMode(mr2, OUTPUT);
  digitalWrite(tombol1, HIGH);
  digitalWrite(tombol2, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  nilai1 = digitalRead(tombol1);
  nilai2 = digitalRead(tombol2);

  if(nilai1 == 0){
    digitalWrite(mr1, LOW);
    analogWrite(mr2,200);
  }
  else if(nilai2 == 0){
    digitalWrite(mr1, 200);
    analogWrite(mr2,LOW);
  }
  else{
    analogWrite(mr1, 0);
    digitalWrite(mr2, LOW);
  }

}
