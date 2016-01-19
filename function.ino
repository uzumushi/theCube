#include "function.h"

FUNCTION::FUNCTION(){
  stats=0;
}

void FUNCTION::Do(bool resetflag){
  if(resetflag)stats=0;
  GetStats();
  Light();
}

