#define relay1 12
int button = 11;
int nilai;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay1,OUTPUT);
  pinMode(button,INPUT);
  digitalWrite(button, HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  nilai = digitalRead(button);

  if(nilai == 0){
    digitalWrite(relay1, LOW);
  }
  else{
    digitalWrite(relay1, HIGH);
  }
}
