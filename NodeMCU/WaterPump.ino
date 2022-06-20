#define D0 16
void setup() {
  Serial.begin(115200);
  pinMode(D0, OUTPUT);
}


void loop() {
  int a = analogRead(A0);
  Serial.println(a);
  
  if(a >= 1000){
    digitalWrite(D0, HIGH);   
    delay(3000); 
  }
  else {
    digitalWrite(D0,LOW);
    delay(3000); 
  }
}
