String s;
int LED = 13;


void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  s = "";
  if (Serial.available()) {
    s = Serial.readString();
    if(s=="true"){
      digitalWrite(LED, HIGH);  
    }
    if(s=="false"){
      digitalWrite(LED, LOW);
    }
  }
}
