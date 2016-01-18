#include "sequence.h"
#include "lightpattern.h"

#define PAT_1 0x155f
#define PAT_2 0x2aa0
#define PAT_3 0x4000
#define SEQUENCE_MAX 3

LIGHTPATTERN sequencepattern1(PAT_1);
LIGHTPATTERN sequencepattern2(PAT_2);
LIGHTPATTERN sequencepattern3(PAT_3);

void SEQUENCE::GetStats(){
  stats++;
  stats%=SEQUENCE_MAX;
}

void SEQUENCE::Light(){
  switch(stats){
    case 0:sequencepattern1.Light();break;
    case 1:sequencepattern2.Light();break;
    case 2:sequencepattern3.Light();break;
  }
}

