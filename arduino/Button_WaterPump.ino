void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A2);
 
   Serial.println(val);
   delay(500);
  
    
} 
