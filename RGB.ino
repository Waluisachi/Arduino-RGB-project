#define pin1 2
#define pin2 3
#define pin3 4
#define pin4 5
#define timer 300
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin4, LOW);
  delay(timer);
  digitalWrite(pin1, HIGH);
  delay(timer);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2,HIGH);
  delay(timer);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3,HIGH);
  delay(timer);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(timer);
  digitalWrite(pin4, LOW);
}
