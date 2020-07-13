//pin setup for LED and Moisture Sensor
#define MOISTURE A0 
const int LEDPIN = 13;
//variable read setup
int MoistureVal = 0;
  
void setup() {
  //set up I/O pins
  pinMode(LEDPIN, OUTPUT);
  pinMode(MOISTURE, INPUT);
}

void loop() {
  MoistureVal = analogRead(MOISTURE);
  Serial.println(MoistureVal);
  //Turn LED on if motion detected
   if(MoistureVal > 50)
  {
    digitalWrite(LEDPIN, HIGH);
  }
  else
  {
    digitalWrite(LEDPIN, LOW);
  }
}
