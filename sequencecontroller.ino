#include "sequencecontroller.h"
#define UPDATE_TIME 500

SEQUENCECONTROLLER::SEQUENCECONTROLLER(){
  updatetime=UPDATE_TIME;
}

void SEQUENCECONTROLLER::Controll(bool resetflag){
  sequence.Do(resetflag);
}

