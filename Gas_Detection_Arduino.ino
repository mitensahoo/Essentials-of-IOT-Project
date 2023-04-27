// A Mini Project - Smoke Detection System Using Arduino And MQ3 Sensor
//By- Miten Sahoo (Bharati Vidyapeeth COE Pune)(CE)(2014110727)

int analoginput = A0;
int R_LED = 2;
int G_LED = 3;
int Buzzer = 4;

int val;
int MAX = 400;

void setup() {
  Serial.begin(9600);
  pinMode(analoginput ,INPUT);
  pinMode(R_LED ,OUTPUT);
  pinMode(G_LED ,OUTPUT);
  pinMode(Buzzer ,OUTPUT);
}

void loop() {
  val = analogRead(A0);
  if (val >= MAX) {
    digitalWrite(R_LED ,HIGH);
    digitalWrite(Buzzer ,HIGH);
    digitalWrite(G_LED ,LOW);
    Serial.println("GAS LEAKING");
  }
  else {
    digitalWrite(R_LED ,LOW);
    digitalWrite(Buzzer ,LOW);
    digitalWrite(G_LED ,HIGH);
    Serial.println("NORMAL");
  }
}
