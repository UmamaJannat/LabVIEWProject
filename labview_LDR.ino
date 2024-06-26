 //the number of the LED pin
const int  ldrPin = A0;  //the number of the LDR pin


void setup() {
  Serial.begin(9600);
   //initialize the LED pin as an output
  pinMode(ldrPin,  INPUT);   //initialize the LDR pin as an input
}

void loop() {
  int  ldrStatus = analogRead(ldrPin);   //read the status of the LDR value

  Serial.println(ldrStatus);
  delay(1000);

 
}
