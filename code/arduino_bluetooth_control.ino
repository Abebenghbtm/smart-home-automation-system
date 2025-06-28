char incomingData;
int relay1 = 2;
int relay2 = 3;

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    incomingData = Serial.read();

    if (incomingData == 'A') {
      digitalWrite(relay1, HIGH);
    } else if (incomingData == 'a') {
      digitalWrite(relay1, LOW);
    } else if (incomingData == 'B') {
      digitalWrite(relay2, HIGH);
    } else if (incomingData == 'b') {
      digitalWrite(relay2, LOW);
    }
  }
}
