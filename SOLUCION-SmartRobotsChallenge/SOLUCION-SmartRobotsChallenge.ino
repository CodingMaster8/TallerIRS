// Motor A
int enA = 11;
int in1 = 13;
int in2 = 12;

// Motor B
int enB = 9;
int in3 = 10;
int in4 = 8;

char opcion = '9';

void Adelante(int speed){
  analogWrite(enA, speed);
  analogWrite(enB, speed);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void Izquierda(int speed){
  analogWrite(enA, speed);
  analogWrite(enB, speed);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void Derecha(int speed){
  analogWrite(enA, speed);
  analogWrite(enB, speed);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void Atras(int speed){
  analogWrite(enA, speed);
  analogWrite(enB, speed);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void Parar(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);


  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  Serial.begin(9600);
}

void loop() {
  Serial.println("Reading... = ");
  if (Serial.available()>0) 
  {
     opcion = Serial.read();
  }
  Serial.print(opcion);
  /* Ejemplo: 0 Parar
  if (opcion == '0'){
    Parar();
  }  */

  ///////// Escribir tus funciones a partir de aqui /////////////
  if (opcion == '0'){
    Adelante(255);
  }
  else if (opcion == '1'){
    Atras(255);
  }
  else if (opcion == '2'){
    Izquierda(255);
  }
  else if (opcion == '3'){
    Derecha(255);
  }
  else if (opcion == '4'){
    Parar();
  }
  
  ////////////////////// No editar //////////////////////////////
  
  else{
    Parar();
  }
}
