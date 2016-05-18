const int verde = 7;
const int blanco = 6;
const int azul = 5;
const int sensor  = 0;
int valLDR = 0;
 
void setup() {
	pinMode(verde, OUTPUT);
        pinMode(blanco, OUTPUT);
        pinMode(azul, OUTPUT);
	Serial.begin(9600);
}
 
void loop() 
{
  digitalWrite(verde, LOW);
  digitalWrite(blanco, LOW);
  digitalWrite(azul, LOW);
  
  valLDR= analogRead(sensor);
  Serial.println(valLDR);
  
  if(valLDR <500)
  {
    digitalWrite(verde, HIGH);
  }
  if((valLDR >500) and (valLDR <=700))
  {
    digitalWrite(blanco, HIGH);
  }
  if(valLDR >700)
  {
    digitalWrite(azul, HIGH);
  }
  delay(400);
}

