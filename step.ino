volatile int STdir = LOW;    
                            //moto* - (stp,dir)
#define stepperPinX 2       //motox - (2,5)
#define stepperPinY 3       //motoy - (3,6)  
#define stepperPinZ 4       //motoz - (4,7)  

#define dirPinX 5
#define dirPinY 6 
#define dirPinZ 7


int maxt=2000;
int mint=500;
int v=50;

int b=2000;

void setup()
{
  for(int bt=2;bt<=7;bt++)
  {
  pinMode(bt, OUTPUT);
  }
}

void stepX(boolean dir, int steps, int s)
{
  digitalWrite(dirPinX, dir);
  for (int i = 0; i < steps; i++) {
    digitalWrite(stepperPinX, HIGH);
    delayMicroseconds(s);
    digitalWrite(stepperPinX, LOW);
    delayMicroseconds(s);
  }
}
void stepY(boolean dir, int steps, int s)
{
  digitalWrite(dirPinY, dir);
  for (int i = 0; i < steps; i++) {
    digitalWrite(stepperPinY, HIGH);
    delayMicroseconds(s);
    digitalWrite(stepperPinY, LOW);
    delayMicroseconds(s);
  }
}
void stepZ(boolean dir, int steps, int s)
{
  digitalWrite(dirPinZ, dir);
  for (int i = 0; i < steps; i++) {
    digitalWrite(stepperPinZ, HIGH);
    delayMicroseconds(s);
    digitalWrite(stepperPinZ, LOW);
    delayMicroseconds(s);
  }
}
void loop()
{
  stepX(STdir, b, v);
  delay(1000);
  stepX(!STdir, b, v);
  delay(1000);
 ////////////////////axizX move test
  stepY(STdir, b, v);
  delay(1000);
  stepY(!STdir, b, v);
  delay(1000);
  //////////////////axizY move test
  stepZ(STdir, b, v);
  delay(1000);
  stepZ(!STdir, b, v);
  delay(1000);
  /////////////////axizZ move test

 
}


