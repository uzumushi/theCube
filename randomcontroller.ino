#include "randomcontroller.h"
#define UPDATE_TIME 50

RANDOMCONTROLLER::RANDOMCONTROLLER(){
  updatetime=UPDATE_TIME;
}

void RANDOMCONTROLLER::Controll(bool resetflag){
  random.Do(resetflag);
}

