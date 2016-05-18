int sensorPin=0;
int rojo=13;
int verde=12;
int amarillo=11;
int azul= 10;
int sensorValue=0;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, LOW);
  digitalWrite(azul, LOW);
  
  sensorValue= analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue<=250)
  {
    digitalWrite(rojo, HIGH);
  }
  if((sensorValue>250)and (sensorValue<=500))
  {
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, HIGH);
  }
  if((sensorValue>500) and (sensorValue<=750))
  {
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, HIGH);
    digitalWrite(amarillo, HIGH);
  }
  if((sensorValue>750) and (sensorValue<=1024))
  {
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, HIGH);
    digitalWrite(amarillo, HIGH);
    digitalWrite(azul, HIGH);
  }
  delay(sensorValue);
}
