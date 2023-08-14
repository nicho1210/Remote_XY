#define BeginPin 8
#define EndPin 11   

int i, j;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  for(i = BeginPin; i < EndPin; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i = BeginPin; i < EndPin; i++) {
    digitalWrite(i, HIGH);
    for(j = BeginPin; j < EndPin; j++) {
      if(j != i) {
        digitalWrite(j, LOW);
      }
    }
    delay(500);
  }
}
