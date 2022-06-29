#define echoPin 2
#define trigPin 3
long duratn;
int dist;
void setup() {
  // put your setup code here, to run once:
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2);

digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

duratn=pulseIn(echoPin,HIGH);
Serial.println("duratn");
Serial.println(duratn);
delay(500);
dist=duratn*0.034/2;
Serial.println("dist");
Serial.println(dist);//in cm
delay(500);
}
