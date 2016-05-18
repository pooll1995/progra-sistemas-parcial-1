const int inputPin=2;
const int ledPin=12;
long randNumber;
int value=0;
void setup(){
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
  pinMode(ledPin, OUTPUT);
  randomSeed (analogRead (0));
}
void loop (){
  value=digitalRead (inputPin);
    if (value==1){
    Serial.print("Encendido     Numero generado es:   ");
    randNumber=random(1, 50);
    digitalWrite(ledPin, HIGH);
    Serial.println (randNumber);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}

