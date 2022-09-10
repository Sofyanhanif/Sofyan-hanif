int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED,OUTPUT); //
  Serial.begin(9600); //
  Serial.println("Alat menyala dan siap digunakan !");
}

void loop() 
  //put your main code here, to run repeatedly
  {digitalWrite(pinLED, HIGH); // 
  Serial.println("tiit");
  delay(500); // 1000 = 1 detik (jeda)
  digitalWrite(pinLED, LOW); //
  Serial.println("tuut");
  delay(500);
  

}
