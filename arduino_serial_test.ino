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
    if(s=="led:true"){
      digitalWrite(LED, HIGH);  
    }
    if(s=="led:false"){
      digitalWrite(LED, LOW);
    }
  }
}
