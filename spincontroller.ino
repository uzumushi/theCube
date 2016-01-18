#include "spincontroller.h"
#define UPDATE_TIME 100

SPINCONTROLLER::SPINCONTROLLER(){
  updatetime=UPDATE_TIME;
}

void SPINCONTROLLER::Controll(bool resetflag){
  spin.Do(resetflag);
}
