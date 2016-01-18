#include "monogcontroller.h"
#define UPDATE_TIME 500

MONO_G_CONTROLLER::MONO_G_CONTROLLER(){
  updatetime=UPDATE_TIME;
}

void MONO_G_CONTROLLER::Controll(bool resetflag){
  monog.Do(resetflag);
}

