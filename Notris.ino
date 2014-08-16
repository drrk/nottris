#include <glcd.h>

#include "notris.h"

void drawBlock(int x, int y,  tetrinoType_t type)
{
  switch (type) 
  {
    case I: // double thick box
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.DrawRect(y*4+y+1+1,x*4+x+1+1,2,2,BLACK);
      break;
    case O: // box filled with cross
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.DrawVLine(y*4+y+3, x*4+x+1, 4, BLACK);
      GLCD.DrawHLine(y*4+y+1, x*4+x+3, 4, BLACK);
      break;
    case Z:  // empty box
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      break;
    case S: // dot in centre
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.SetDot(y*4+1+2+y,x*4+x+1+2,BLACK);
      break;
    case T: // top left to bottom right 
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.SetDot(y*4+4+y,x*4+x+2,BLACK);
      GLCD.SetDot(y*4+2+y,x*4+x+4,BLACK);   
      GLCD.SetDot(y*4+3+y,x*4+x+3,BLACK);
      break;
    case L: // corners and centre
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.SetDot(y*4+2+y,x*4+x+2,BLACK);   
      GLCD.SetDot(y*4+4+y,x*4+x+2,BLACK);
      GLCD.SetDot(y*4+2+y,x*4+x+4,BLACK);   
      GLCD.SetDot(y*4+4+y,x*4+x+4,BLACK);   
      GLCD.SetDot(y*4+3+y,x*4+x+3,BLACK);    
      break;
    case J: // top right to bottom left
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.SetDot(y*4+2+y,x*4+x+2,BLACK);     
      GLCD.SetDot(y*4+4+y,x*4+x+4,BLACK);   
      GLCD.SetDot(y*4+3+y,x*4+x+3,BLACK);  
      break;
    default:
    break;
  }  
}

void tetrino(int x, int y, orientationType_t orientation, tetrinoType_t type)
{
   for (int b = 0; b < 4; ++b)
   {
     drawBlock(x+blocks[type][orientation][b][0], y+blocks[type][orientation][b][1], type);
   }  
}


void setup() {
  // put your setup code here, to run once:
  GLCD.Init();   // initialise the library, non inverted writes pixels onto a clear screen
  GLCD.DrawRect(0, 0, 101, 51, BLACK);

  /*tetrino(0,0,I);
  tetrino(5,0,J);
  tetrino(0,2,L);
  tetrino(4,2,O);
  tetrino(0,4,T);
  tetrino(4,4,S);
  tetrino(0,6,Z);*/


}

void loop() {
  // put your main code here, to run repeatedly:
  /*GLCD.ClearScreen(); 
  tetrino(0,4,dN,J);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dE,J);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dS,J);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dW,J);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dN,I);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dE,I);
  delay(1000);
  
  GLCD.ClearScreen(); 
  tetrino(0,4,dN,L);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dE,L);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dS,L);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dW,L);
  delay(1000);
  
  
  GLCD.ClearScreen(); 
  tetrino(0,4,dN,T);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dE,T);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dS,T);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dW,T);
  delay(1000);  
  
  
  
  GLCD.ClearScreen(); 
  tetrino(0,4,dN,S);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dE,S);
  delay(1000);
  
  GLCD.ClearScreen(); 
  tetrino(0,4,dS,Z);
  delay(1000);
  GLCD.ClearScreen(); 
  tetrino(0,4,dW,Z);
  delay(1000);  
   */
}


