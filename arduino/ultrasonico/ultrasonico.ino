#define pecho 8
#define ptrig 9

long duracion;
long distancia;

void setup()
{
    Serial.begin(9600);
    pinMode(pecho, INPUT);
    pinMode(ptrig, OUTPUT);
    pinMode(13,1);
}

void loop()
{
  digitalWrite(ptrig,LOW);
  delayMicroseconds(2);
  digitalWrite(ptrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(ptrig,LOW);
  
  duracion = pulseIn(pecho,HIGH);
  distancia = (duracion/2)/29;
  
  if(distancia >=500 || distancia <=0)
  {
    Serial.println("---");
  }
  else
  {
    Serial.println(distancia);
    Serial.println(" cm");
    digitalWrite(13,0);
  }
  delay(100);
}
