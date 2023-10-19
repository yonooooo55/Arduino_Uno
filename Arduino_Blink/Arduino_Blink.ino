

void setup() {
  pinMode(13, OUTPUT);  // sets the digital pin 13 as output
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT); 
}

void loop() {
  digitalWrite(13, HIGH);
  delay(200); // Delay for pin 13
  digitalWrite(13, LOW);
  delay(200); // Delay for pin 13
  
  digitalWrite(11, HIGH);
  delay(200); // Delay for pin 11
  digitalWrite(11, LOW);
  delay(200); // Delay for pin 11
  
  digitalWrite(10, HIGH);
  delay(200); // Delay for pin 10
  digitalWrite(10, LOW);
  delay(200); // Delay for pin 10
}