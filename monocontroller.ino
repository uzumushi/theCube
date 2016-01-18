#include "monocontroller.h"
#define UPDATE_TIME 500

MONOCONTROLLER::MONOCONTROLLER(){
  updatetime=UPDATE_TIME;
}

void MONOCONTROLLER::Controll(bool resetflag){
  mono.Do(resetflag);
}

