#define trigpin 6
#define echopin 7

void setup() {
  pinMode (trigpin, OUTPUT);
  pinMode (echopin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  long t = pulseIn(echopin,HIGH);

  long s = t/29/2;

  Serial.print(s);
  Serial.println("cm");

  delay(100);

}