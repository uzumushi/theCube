#include "monog.h"
#include "lightpattern.h"

#define PAT_1 0x156f
#define PAT_2 0x159f
#define PAT_3 0x195f
#define PAT_4 0x165f
#define MONO_G_MAX 4

LIGHTPATTERN monogpattern1(PAT_1);
LIGHTPATTERN monogpattern2(PAT_2);
LIGHTPATTERN monogpattern3(PAT_3);
LIGHTPATTERN monogpattern4(PAT_4);

void MONO_G::GetStats(){
    stats++;
    stats%=MONO_G_MAX;
}

void MONO_G::Light(){
  switch(stats){
    case 0:monogpattern1.Light();break;
    case 1:monogpattern2.Light();break;
    case 2:monogpattern3.Light();break;
    case 3:monogpattern4.Light();break;
  }
}

