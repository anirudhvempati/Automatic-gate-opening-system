// C++ code
//
int unnamed = 0;

int i = 0;

int j = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(8, OUTPUT);
}

void loop()
{
  
  if (analogRead(A0) < 50) {
    digitalWrite(8, HIGH);
    delay(250); // Wait for 2000 millisecond(s)
    digitalWrite(8, LOW);
    delay(4000);
    digitalWrite(8, HIGH);
    delay(550);
    digitalWrite(8, LOW);
  } else {
    digitalWrite(8, LOW);
  }

  analogRead(A0);
}
