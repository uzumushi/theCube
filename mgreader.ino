#include <arduino.h>
#include "mgreader.h"
#include "iddef.h"
#define SENS_NUM 4

void GetStats(bool* sens_stats){
  sens_stats[0]=digitalRead(MAG_1);
  sens_stats[1]=digitalRead(MAG_2);
  sens_stats[2]=digitalRead(MAG_3);
  sens_stats[3]=digitalRead(MAG_4);
}

int GetSum(bool* stats){
  int sum=0;
  for(int i=0;i<SENS_NUM;i++){
    if(stats[i])sum++;
  }
  return sum;
}

int Case2Identifier(bool* stats){
  int i=0;
  while(stats[i]!=true)
  { i++; }
  if(stats[(i+1)%SENS_NUM]||stats[(i-1+SENS_NUM)%SENS_NUM])
    return ID_3;
  else
    return ID_4;
}


int MGREADER::Read(){
  bool sens_stats[SENS_NUM];
  int sum;
  
  GetStats(sens_stats);
  sum=GetSum(sens_stats);

  switch(sum){
    case 0:return ID_1;
    case 1:return ID_2;
    case 2:return Case2Identifier(sens_stats);
    case 3:return ID_5;
    case 4:return ID_6;
  }
}
