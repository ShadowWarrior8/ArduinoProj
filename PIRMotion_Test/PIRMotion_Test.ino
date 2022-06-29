int pir =8;
void setup() {
  // put your setup code here, to run once:
pinMode(pir,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorVal=digitalRead(pir);
Serial.println(sensorVal);
delay(500);
}
