
void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  Serial.print("valor "); 
  int val = analogRead(0);    

  Serial.println(val);    
  if (val > 750) analogWrite(11, 50);
  else analogWrite (11, 200);
  
}
