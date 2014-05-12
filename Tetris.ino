#include <glcd.h>

#include "tetris.h"

void drawBlock(int x, int y, tetrinoType_t type)
{
  switch (type) 
  {
    case I:
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.DrawRect(y*4+y+1+1,x*4+x+1+1,2,2,BLACK);
      break;
    case O:
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.DrawVLine(y*4+y+3, x*4+x+1, 4, BLACK);
      GLCD.DrawHLine(y*4+y+1, x*4+x+3, 4, BLACK);
      break;
    case Z:
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      break;
    case S:
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.SetDot(y*4+1+2+y,x*4+x+1+2,BLACK);
      break;
    case T:
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.SetDot(y*4+4+y,x*4+x+2,BLACK);
      GLCD.SetDot(y*4+2+y,x*4+x+4,BLACK);   
      GLCD.SetDot(y*4+3+y,x*4+x+3,BLACK);
      break;
    case L:
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.SetDot(y*4+2+y,x*4+x+2,BLACK);   
      GLCD.SetDot(y*4+4+y,x*4+x+2,BLACK);
      GLCD.SetDot(y*4+2+y,x*4+x+4,BLACK);   
      GLCD.SetDot(y*4+4+y,x*4+x+4,BLACK);   
      GLCD.SetDot(y*4+3+y,x*4+x+3,BLACK);    
      break;
    case J:
      GLCD.DrawRect(y*4+y+1,x*4+x+1,4,4,BLACK);
      GLCD.SetDot(y*4+2+y,x*4+x+2,BLACK);     
      GLCD.SetDot(y*4+4+y,x*4+x+4,BLACK);   
      GLCD.SetDot(y*4+3+y,x*4+x+3,BLACK);  
      break;
    default:
    break;
  }  
}

void tetrino(int x, int y, tetrinoType_t type)
{
   for (int b = 0; b < 4; ++b)
   {
     drawBlock(x+blocks[type][b][0], y+blocks[type][b][1], type);
   }  
}


void setup() {
  // put your setup code here, to run once:
  GLCD.Init();   // initialise the library, non inverted writes pixels onto a clear screen
  GLCD.DrawRect(0, 0, 101, 51, BLACK);

  //tetrino(0,0,I);
  //tetrino(0,0,J);
  //tetrino(0,0,L);
  //tetrino(0,0,O);
  //tetrino(0,0,T);
  //tetrino(0,0,S);
  tetrino(0,0,Z);
}

void loop() {
  // put your main code here, to run repeatedly:

}


