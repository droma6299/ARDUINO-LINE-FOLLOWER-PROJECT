//motor speed etc.
int SpeedmA=11; 
int MotorA1=2; 
int MotorA2=3; 
int MotorB1=4; 
int MotorB2=5; 
int SpeedmB=10; 



//ir sensors
int RigtS=A0;
int middleS=A1; 
int LeftS=A2; 


void setup() {
pinMode(MotorB1, OUTPUT);
pinMode(MotorB2, OUTPUT);
pinMode(MotorA1, OUTPUT);
pinMode(MotorA2, OUTPUT); 
pinMode(SpeedmB, OUTPUT);
pinMode(SpeedmA, OUTPUT);

pinMode(LeftS, INPUT);
pinMode(middleS, INPUT);
pinMode( Rigts, INPUT);
analogWrite(SpeedmA, 150);
analogWrite(SpeedmB, 150);
delay(200);



}

void loop()
{     
if((digitalRead(LeftS ) ==0)&&(digitalRead( middleS)==1)&&(digitalRead( RigtS)==0)){Forw();}    //goes straight

if((digitalRead(LeftS ) ==1)&&(digitalRead( middleS)==1)&&(digitalRead( RigtS)==0)){Left();}   //goes left
if((digitalRead(LeftS) ==1)&&(digitalRead( middleS)==0)&&(digitalRead( RigtS)==0)){Left();}

if((digitalRead(LeftS) ==0)&&(digitalRead( middleS)==1)&&(digitalRead( RigtS)==1)){Right();}   //goes right
if((digitalRead(LeftS) ==0)&&(digitalRead( middleS)==0)&&(digitalRead( RigtS)==1)){Right();}

if((digitalRead(LeftS) ==1)&&(digitalRead( middleS)==1)&&(digitalRead( RigtS)==1)){Stop();}        //stops

}


void Forw(){
  digitalWrite(MotorA1, LOW);
  digitalWrite(MotorA2, HIGH);
  digitalWrite(MotorB1, HIGH);
  digitalWrite(MotorB2, LOW);
  

}

void Right(){
  digitalWrite(MotorA1, LOW);
  digitalWrite(MotorA2, LOW);
  digitalWrite(MotorB1, HIGH);
  digitalWrite(MotorB2, LOW);

  
}

void Left(){
  digitalWrite(MotorA1, LOW);
  digitalWrite(MotorA2, HIGH);
  digitalWrite(MotorB1, LOW);
  digitalWrite(MotorB2, LOW);

 
}

void Stop(){
  digitalWrite(MotorA1, LOW);
  digitalWrite(MotorA2, LOW);
  digitalWrite(MotorB1, LOW);
  digitalWrite(MotorB2, LOW);

  
}


  
