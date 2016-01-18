#include "spin.h"
#include "lightpattern.h"

#define PAT_1 0x700c
#define PAT_2 0x7410
#define PAT_3 0x7003
#define PAT_4 0x7140
#define SPIN_MAX 4

LIGHTPATTERN spinpattern1(PAT_1);
LIGHTPATTERN spinpattern2(PAT_2);
LIGHTPATTERN spinpattern3(PAT_3);
LIGHTPATTERN spinpattern4(PAT_4);

void SPIN::GetStats(){
  stats++;
  stats%=SPIN_MAX;
  
}

void SPIN::Light(){
  switch(stats){
    case 0:spinpattern1.Light();break;
    case 1:spinpattern2.Light();break;
    case 2:spinpattern3.Light();break;
    case 3:spinpattern4.Light();break;
  }
}

