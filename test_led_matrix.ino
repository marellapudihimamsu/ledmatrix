/*
  Led Matrix

  This example shows how to create a Led Matrix
  

  

  created April 2018
  by M.Himamsu
  modified June 2018
  by M.Himamsu 


*/


void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
     pinMode(6, OUTPUT);
      pinMode(7, OUTPUT);
      for(int mnop=22;mnop<=42;mnop=mnop+2) 
      {
        pinMode(mnop,OUTPUT);
        
      }
      for(int abc=22;abc<=42;abc=abc+2) 
     {
          digitalWrite(abc,HIGH);
        
     }
}


void loop()
{
 

       
           for (int pos=0;pos>=-30;pos=pos-1)
           {
        
                 for (int loo=0;loo<=700;loo++)
                   {
                      robotics(pos);
                    }
          } 
       
   
  }

void Asmall(void)
{
  on(3,1);
  on(2,1);
  on(3,2);
  on(1,2);
  on(2,3);
  on(3,3);
  on(4,1);
  on(4,3);
  on(5,1);
  on(5,3);
  
  }
void Aleft(void)
{
 on(6,1);
  on(5,1);
   on(4,1);
    on(3,1);
     on(6,5);
  on(5,5);
   on(4,5);
    on(3,5);
     on(2,2);
      on(1,3);
       on(2,4);
        on(4,2);
         on(4,3);
           on(4,4);
  }
  void Aright(void)
{
 on(6,6);
  on(5,6);
   on(4,6);
    on(3,6);
     on(6,10);
  on(5,10);
   on(4,10);
    on(3,10);
     on(2,7);
      on(1,8);
       on(2,9);
        on(4,7);
         on(4,8);
           on(4,9);
  }
void on(int x,int y)
{
  if(((20+(2*y))<=53)&&((20+(2*y))>=21))
  {
    digitalWrite(x+1,HIGH);
     digitalWrite(20+(2*y),LOW);
     delayMicroseconds(1);
     digitalWrite(x+1,LOW);
     digitalWrite(20+(2*y),HIGH);
  }
  
  }
  void R(int n)
 {
   on(1,1+n); 
   on(2,1+n); 
   on(3,1+n); 
   on(4,1+n); 
   on(5,1+n); 
   on(6,1+n); 
   on(1,2+n); 
   on(1,3+n); 
    on(1,4+n); 
    on(2,4+n);
     on(3,4+n);  
     on(3,3+n);
     on(3,2+n);
      on(4,2+n); 
      on(5,3+n);
      on(6,4+n);
    
    }

    void robotics(int n)
    {
      on(1,1+n);
      on(1,2+n);
      on(1,3+n);
      on(1,4+n);
      on(1,6+n);
      on(1,7+n);
      on(1,8+n);
      on(1,10+n);
      on(1,11+n);
      on(1,14+n);
      on(1,15+n);
      on(1,16+n);
      on(1,18+n);
      on(1,19+n);
      on(1,20+n);
      on(1,22+n);
      on(1,24+n);
      on(1,25+n);
      on(1,26+n);
      on(1,28+n);
      on(1,29+n);
      on(1,30+n);
      on(2,1+n);
      on(2,4+n);
      on(2,6+n);
      on(2,8+n);
      on(2,10+n);
      on(2,12+n);
      on(2,14+n);
      on(2,16+n);
      on(2,19+n);
      on(2,22+n);
      on(2,24+n);
      on(2,28+n);
      on(3,1+n);
      on(3,2+n);
      on(3,3+n);
      on(3,4+n);
      on(3,6+n);
      on(3,8+n);
      on(3,10+n);
       on(3,11+n);
        on(3,14+n);
         on(3,16+n);
          on(3,19+n);
           on(3,22+n);
            on(3,24+n);
             on(3,28+n);
              on(3,29+n);
               on(3,30+n);
               
         on(4,1+n);
          on(4,2+n);
           on(4,6+n);
            on(4,8+n);
             on(4,10+n);
              on(4,11+n);
               on(4,12+n);
                on(4,14+n);
                 on(4,16+n);
                  on(4,19+n);
                   on(4,22+n);
                    on(4,24+n);
                     on(4,30+n);
                    
          on(5,1+n);
          on(5,3+n);
          on(5,6+n);
          on(5,8+n);
          on(5,10+n);
          on(5,12+n);
          on(5,14+n);
          on(5,16+n);
          on(5,19+n);
          on(5,22+n);
          on(5,24+n);
          on(5,30+n);
          on(6,1+n);
           on(6,4+n);
            on(6,6+n);
             on(6,7+n);
              on(6,8+n);
               on(6,10+n);
                on(6,11+n);
                 on(6,12+n);
                  on(6,14+n);
                   on(6,15+n);
                    on(6,16+n);
                     on(6,19+n);
                      on(6,22+n);
                       on(6,24+n);
                        on(6,25+n);
                         on(6,26+n);
                          on(6,28+n);
                           on(6,29+n);
                            on(6,30+n);
                        
                     }
    
