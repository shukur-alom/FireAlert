//Made by shukur alam ..
//Fb.=https://www.facebook.com/shu.kur.1829
int ir=7,buzzer=13;
//Sensor pin D0=7,gnd=gnd,vcc=5v:: buzzer pin GND=GND, vcc=13;
void setup()
{
  pinMode(ir,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(digitalRead(ir)==LOW){
    digitalWrite(buzzer,HIGH);
  }
  else{
    digitalWrite(buzzer,LOW);
  }
}
