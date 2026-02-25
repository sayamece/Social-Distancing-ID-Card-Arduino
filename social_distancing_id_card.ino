// Social Distancing ID Card Project

const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 8;
const int led = 7;

long duration;
float distance;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 100)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }

  delay(200);
}
