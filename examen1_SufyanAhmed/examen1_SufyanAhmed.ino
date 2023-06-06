#define ledr 2
#define ledg 4
#define ledb 3
//potenciometro
//rojo 
int pote1 = A0;
//verde
int pote2 = A1;
//azul
int pote3 = A2;
//rojo
int pote1Val;
//verde
int pote2Val;
//azul
int pote3Val;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledr,OUTPUT);
  pinMode(ledg,OUTPUT);
  pinMode(ledb,OUTPUT);
  pinMode(pote1,INPUT);
  pinMode(pote2,INPUT);
  pinMode(pote3,INPUT);
  Serial.begin(9600);
}

void loop() {
  //mapeo de valores para cada color led
  pote1Val=map(analogRead(pote1),0,1023,0,255);
  pote2Val=map(analogRead(pote2),0,1023,0,255);
  pote3Val=map(analogRead(pote3),0,1023,0,255);
  //funcionalidad
  Serial.print("Led rojo: ");
  Serial.print(pote1Val);
  delay(800);
  Serial.print("Led verde: ");
  Serial.print(pote2Val);
  delay(800);
  Serial.print("Led azul: ");
  Serial.println(pote3Val);
  analogWrite(ledr,pote1Val);
  analogWrite(ledb,pote2Val);
  analogWrite(ledg,pote3Val);
}
