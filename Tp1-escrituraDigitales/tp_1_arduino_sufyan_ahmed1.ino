#define led1 2
#define led2 3
#define led3 4

#define led11 7
#define led22 8
#define led33 9

#define led111 10
#define led222 11
#define led333 12


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led22, OUTPUT);
  pinMode(led33, OUTPUT);
  pinMode(led111, OUTPUT);
  pinMode(led222, OUTPUT);
  pinMode(led333, OUTPUT);
}

void loop()
{
  analogWrite(led1, 255);
  delay(1000);
  analogWrite(led1, 0);
//led 2
  digitalWrite(led11, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led33, LOW);
  delay(1000);
  digitalWrite(led11, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led33, LOW);
  delay(1000);
//led3
  analogWrite(led111, 0);
  analogWrite(led222, 255);
  analogWrite(led333, 255);
  delay(1000);
  analogWrite(led111, 0);
  analogWrite(led222, 0);
  analogWrite(led333, 0);
}