//latihan3
const int red1 = 3, yellow1 = 4, green1 = 5;


void setup() {
    pinMode(red1,OUTPUT);
    pinMode(yellow1,OUTPUT);
    pinMode(green1, OUTPUT);  
}

void loop() {
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(green1, HIGH);
 
  
}
