int e=1;
int d=2;
int c=4;

int a=7;
int f=9;
int b=6;
int g=10;
int tiempo=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(e,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  uno();
  delay(tiempo);
  dos();
  delay(tiempo);
  tres();
  delay(tiempo);
  cuatro();
  delay(tiempo);

}

void borrado(){
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(a,LOW);

  digitalWrite(f,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
}

 void uno(){
  borrado();
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
 }

void dos(){
  borrado();
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
}

void tres(){
  borrado();
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
}

void cuatro(){
  borrado();
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(c,HIGH);
}