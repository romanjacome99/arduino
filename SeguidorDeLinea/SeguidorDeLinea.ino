
int MotorIzquierdo1=6;
int MotorIzquierdo2=5;
int VelocidadIzquierdo=127;
int aceleradoIzquierdo=255;
int MotorDerecho1=11;
int MotorDerecho2=10;
int VelocidadDerecho=105;
int aceleradoDerecho=255;
void setup() {
  pinMode(MotorIzquierdo1, OUTPUT);
  pinMode(MotorIzquierdo2, OUTPUT);
  pinMode(MotorDerecho1, OUTPUT);
  pinMode(MotorDerecho2, OUTPUT); 
  
  // put your setup code here, to run once:

}

void loop() {
   
 int sensorIzquierdo = analogRead(0);
 int sensorDerecho = analogRead(1);

 if (sensorIzquierdo > 750) motorIzquierdoAdelante (VelocidadIzquierdo);
 else motorIzquierdoAdelante (aceleradoIzquierdo);
 if (sensorDerecho > 750) motorDerechoAdelante (VelocidadDerecho);
 else motorDerechoAdelante (aceleradoDerecho);
 
  
 
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

