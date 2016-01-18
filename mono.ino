#include "mono.h"
#include "lightpattern.h"
#define MASK 0x01

LIGHTPATTERN monopattern;

void MONO::GetStats(){
  for(int num=0;num!=1;num=0){
    stats=random(0x7fff+1);
    for(int i=0;i<15;i++){
      num+=(stats>>i)&MASK;
    }
  }
  monopattern.Set(stats);
}

void Light(){
  monopattern.Light();
}

