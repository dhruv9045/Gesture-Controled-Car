int lm1=8; //left motor output 1
int lm2=9; //left motor output 2
int rm1=10;  //right motor output 1
int rm2=11;  //right motor output 2

 char d=0;

void setup()
{
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  Serial.begin(38400);
 sTOP();
}
void loop()
{
  if(Serial.available()>0)
  {
    d=Serial.read();
  
  if(d=='F')
  {
   ForWard();
   Serial.print("forward");
    }
    if(d=='B')
  {
   BackWard();
    Serial.print("Backward");
    }
    
  if(d=='L')
  {
   Left();
   Serial.print("Left");
    }
  if(d=='R')
  { 
  Right();
  Serial.print("Right");
   }
     if(d=='S')
  {
   sTOP();
   Serial.print("Stop");
    }
   
}
  
}

 void ForWard()
  {
   digitalWrite(lm1,HIGH);
   digitalWrite(lm2,LOW);
   digitalWrite(rm1,HIGH);
   digitalWrite(rm2,LOW);
  } 
  void BackWard()
  {
   digitalWrite(lm1,LOW);
   digitalWrite(lm2,HIGH);
   digitalWrite(rm1,LOW);
   digitalWrite(rm2,HIGH);
  }
  void Left()
  {
   digitalWrite(lm1,LOW);
   digitalWrite(lm2,HIGH);
   digitalWrite(rm1,HIGH);
   digitalWrite(rm2,LOW);
  } 
  void Right()
  {
   digitalWrite(lm1,HIGH);
   digitalWrite(lm2,LOW);
   digitalWrite(rm1,LOW);
   digitalWrite(rm2,HIGH);
  }  

    void sTOP()
  {
   digitalWrite(lm1,LOW);
   digitalWrite(lm2,LOW);
   digitalWrite(rm1,LOW);
   digitalWrite(rm2,LOW);
  }  
    
    
    
  
  
