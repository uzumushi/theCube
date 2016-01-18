#include "dice.h"
#include "lightpattern.h"

#define PAT_1 0x4000
#define PAT_2 0x000c
#define PAT_3 0x1410
#define PAT_4 0x0550
#define PAT_5 0x1550
#define PAT_6 0x055c
#define DICE_MAX 6

LIGHTPATTERN dicepattern1(PAT_1);
LIGHTPATTERN dicepattern2(PAT_2);
LIGHTPATTERN dicepattern3(PAT_3);
LIGHTPATTERN dicepattern4(PAT_4);
LIGHTPATTERN dicepattern5(PAT_5);
LIGHTPATTERN dicepattern6(PAT_6);

void DICE::GetStats(){
  stats=random(DICE_MAX);
}

void DICE::Light(){
  switch(stats){
    case 0:dicepattern1.Light();break;
    case 1:dicepattern2.Light();break;
    case 2:dicepattern3.Light();break;
    case 3:dicepattern4.Light();break;
    case 4:dicepattern5.Light();break;
    case 5:dicepattern6.Light();break;
  }
}

