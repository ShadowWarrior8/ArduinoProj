float V2;
void setup() {
  // put your setup code here, to run once:
 pinMode(13,OUTPUT);//digital pin write
 //digital pin read
 pinMode(A2,OUTPUT);//analog pin write
 pinMode(A3,INPUT);//analog pin read
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(1000);//delay by 1 sec
  digitalWrite(13,LOW);
  delay(1000);
  
  digitalWrite(A2,HIGH);
  delay(1000);//delay by 1 sec
  digitalWrite(A2,LOW);
  delay(1000);

  V2=analogRead(A3);
  Serial.print(V2);
}
