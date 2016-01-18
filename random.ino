#include "random.h"
#include "lightpattern.h"

LIGHTPATTERN pattern;

void RANDOM::GetStats(){
  stats=random(0x7FFF+1);
  pattern.Set(stats);
}

void RANDOM::Light(){
  pattern.Light();
}

