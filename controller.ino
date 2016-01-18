#include "controller.h"

void CONTROLLER::Exec(bool resetflag){
  static unsigned long beforetime=0;
  unsigned long nowtime=millis();
  if(resetflag){
    beforetime=nowtime;
    Controll(resetflag);
  }
  else{
    if(nowtime-beforetime>updatetime){
      beforetime=nowtime;
      Controll(resetflag);
    }
  }
}

