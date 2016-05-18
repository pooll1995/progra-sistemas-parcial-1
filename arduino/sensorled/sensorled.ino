#define pecho 8
#define ptrig 9

long duracion, distancia;
const int verde = 7;
const int blanco = 6;
const int azul = 5;

 
void setup() {
	pinMode(verde, OUTPUT);
        pinMode(blanco, OUTPUT);
        pinMode(azul, OUTPUT);
	Serial.begin(9600);
        pinMode(pecho,INPUT);
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
  
  digitalWrite(verde, LOW);
  digitalWrite(blanco, LOW);
  digitalWrite(azul, LOW);
  
  duracion = pulseIn(pecho,HIGH);
  distancia=(duracion/2)/29;
    
  if((distancia >=500) || (distancia <=0))
  {Serial.println("---");
  }
  else {
    Serial.println(distancia);
    Serial.println(" cm");
    digitalWrite(13,0);
  }
  if ((distancia >=0) and (distancia <20))
  {
    digitalWrite(verde, HIGH);
  }
  if((distancia >=20) and (distancia < 60))
  {
    digitalWrite(blanco, HIGH);
  }
  if(distancia >=60)
  {
    digitalWrite(azul, HIGH);
  }
  delay(400);
}

