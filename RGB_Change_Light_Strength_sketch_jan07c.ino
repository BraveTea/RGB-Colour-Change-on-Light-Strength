#define RED 3
#define GREEN 5
#define BLUE 6

int photoPin = 0;
int lightValue = analogRead(photoPin);

void setup()
{
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
}

void loop()
{
  int lightValue = analogRead(photoPin);
  Serial.println(lightValue);
  delay(1);
  if (lightValue < 500)
  {
    analogWrite(RED, 255);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
  }
  if (lightValue >= 500 && lightValue < 700)
  {
    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 255);
  }
  if (lightValue >= 700)
  {
    analogWrite(RED, 0);
    analogWrite(GREEN, 255);
    analogWrite(BLUE, 0);
  }
  delay(1);
}

