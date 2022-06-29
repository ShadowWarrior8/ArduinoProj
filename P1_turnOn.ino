void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); // pin 13 is output, its connected to led

}

void loop() {
  // put your main code here, to run repeatedly:
  // high = turn on,if you change HIGH to LOW, it turns off
  digitalWrite(13,HIGH);
  delay(1000);//delay by 1 sec
  digitalWrite(13,LOW);
  delay(1000);
}
