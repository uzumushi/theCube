#include <arduino.h>
#include "lightpattern.h"
#include "pindef.h"
#define MASK 0x01

LIGHTPATTERN::LIGHTPATTERN(){
  Init(false);
}

LIGHTPATTERN::LIGHTPATTERN(short flags){
  Set(flags);
}

void LIGHTPATTERN::Init(bool flag){
  blue1=flag;
  blue2=flag;
  blue3=flag;
  blue4=flag;
  color1_B=flag;
  color1_G=flag;
  color2_B=flag;
  color2_G=flag;
  color3_B=flag;
  color3_G=flag;
  color4_B=flag;
  color4_G=flag;
  color5_B=flag;
  color5_G=flag;
  color5_R=flag;
}

void LIGHTPATTERN::Light(){
  Off();
  
  if(blue1)digitalWrite(BLUE_1,HIGH);
  if(blue2)digitalWrite(BLUE_2,HIGH);
  if(blue3)digitalWrite(BLUE_3,HIGH);
  if(blue4)digitalWrite(BLUE_4,HIGH);
  if(color1_B)digitalWrite(COLOR_1_B,HIGH);
  if(color1_G)digitalWrite(COLOR_1_G,HIGH);
  if(color2_B)digitalWrite(COLOR_2_B,HIGH);
  if(color2_G)digitalWrite(COLOR_2_G,HIGH);
  if(color3_B)digitalWrite(COLOR_3_B,HIGH);
  if(color3_G)digitalWrite(COLOR_3_G,HIGH);
  if(color4_B)digitalWrite(COLOR_4_B,HIGH);
  if(color4_G)digitalWrite(COLOR_4_G,HIGH);
  if(color5_B)digitalWrite(COLOR_5_B,HIGH);
  if(color5_G)digitalWrite(COLOR_5_G,HIGH);
  if(color5_R)digitalWrite(COLOR_5_R,HIGH);
}

void LIGHTPATTERN::Set(short flags){
  blue1=(flags>>0)&MASK;
  blue2=(flags>>1)&MASK;
  blue3=(flags>>2)&MASK;
  blue4=(flags>>3)&MASK;
  color1_B=(flags>>4)&MASK;
  color1_G=(flags>>5)&MASK;
  color2_B=(flags>>6)&MASK;
  color2_G=(flags>>7)&MASK;
  color3_B=(flags>>8)&MASK;
  color3_G=(flags>>9)&MASK;
  color4_B=(flags>>10)&MASK;
  color4_G=(flags>>11)&MASK;
  color5_B=(flags>>12)&MASK;
  color5_G=(flags>>13)&MASK;
  color5_R=(flags>>14)&MASK;
}

void LIGHTPATTERN::Off(){
  digitalWrite(BLUE_1,LOW);
  digitalWrite(BLUE_2,LOW);
  digitalWrite(BLUE_3,LOW);
  digitalWrite(BLUE_4,LOW);
  digitalWrite(COLOR_1_B,LOW);
  digitalWrite(COLOR_1_G,LOW);
  digitalWrite(COLOR_2_B,LOW);
  digitalWrite(COLOR_2_G,LOW);
  digitalWrite(COLOR_3_B,LOW);
  digitalWrite(COLOR_3_G,LOW);
  digitalWrite(COLOR_4_B,LOW);
  digitalWrite(COLOR_4_G,LOW);
  digitalWrite(COLOR_5_B,LOW);
  digitalWrite(COLOR_5_G,LOW);
  digitalWrite(COLOR_5_R,LOW);
}
