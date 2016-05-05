
int MotorIzquierdo1=6;
int MotorIzquierdo2=5;
int VelocidadIzquierdo=127;
int aceleradoIzquierdo=220;
int MotorDerecho1=11;
int MotorDerecho2=10;
int VelocidadDerecho=105;
int aceleradoDerecho=215;
void setup() {
  pinMode(MotorIzquierdo1, OUTPUT);
  pinMode(MotorIzquierdo2, OUTPUT);
  pinMode(MotorDerecho1, OUTPUT);
  pinMode(MotorDerecho2, OUTPUT); 
  pinMode(13, OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite (13,HIGH);

  
 int sensorIzquierdo = analogRead(2);
 int sensorDerecho = analogRead(1);

 if (sensorIzquierdo > 800) motorIzquierdoAdelante  (aceleradoIzquierdo);
 
 else motorDerechoDetenido() ;
 
 if (sensorDerecho > 800)   motorDerechoAdelante (aceleradoDerecho);
 
 else motorDerechoDetenido();
 
  
  
 }


void motorIzquierdoAdelante(int velocidad){
  analogWrite(MotorIzquierdo1, 0);
  analogWrite(MotorIzquierdo2, velocidad);
}
void motorIzquierdoAtras(int velocidad){
  analogWrite(MotorIzquierdo1, velocidad);
  analogWrite(MotorIzquierdo2, 0);
}
void motorDerechoAdelante(int velocidad){
  analogWrite(MotorDerecho1, 0);
  analogWrite(MotorDerecho2,velocidad);
}
void motorDerechoAtras(int velocidad){
  analogWrite(MotorDerecho1, velocidad);
  analogWrite(MotorDerecho2, 0);
}
void motorIzquierdoDetenido(){
  digitalWrite(MotorIzquierdo1,LOW);
  digitalWrite(MotorIzquierdo2,LOW);
}
void motorDerechoDetenido(){
  digitalWrite(MotorDerecho1, LOW);
  digitalWrite(MotorDerecho2, LOW);
     
}

