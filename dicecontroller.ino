#include "dicecontroller.h"
#define UPDATE_TIME 100
#define COUNT_MAX 20

DICECONTROLLER::DICECONTROLLER(){
  updatetime=UPDATE_TIME;
}

void DICECONTROLLER::Controll(bool resetflag){
  static int count=0;
  if(resetflag)count=0;
  if(count==COUNT_MAX){
    dice.Light();
  }
  else{
    count++;
    dice.Do(resetflag);
  }
}

