#include "mgreader.h"
#include "iddef.h"
#include "pindef.h"
#include "dicecontroller.h"
#include "spincontroller.h"
#include "randomcontroller.h"
#include "monogcontroller.h"
#include "sequencecontroller.h"

void pinSetup();

DICECONTROLLER dicecnt;
SPINCONTROLLER spincnt;
RANDOMCONTROLLER randcnt;
MONO_G_CONTROLLER mongcnt;
SEQUENCECONTROLLER sequcnt;

void setup() {
  pinSetup();
  randomSeed(analogRead(18));
}

void loop() {
  int funcid;
  static int beforeid=-1;
  bool resetflag;
  funcid=MGREADER::Read();
  resetflag= funcid==beforeid ? false:true;
  beforeid=funcid;
  
  switch(funcid){
    case ID_1:mongcnt.Exec(resetflag);break;
    case ID_2:dicecnt.Exec(resetflag);break;
    case ID_3:spincnt.Exec(resetflag);break;
    case ID_4:randcnt.Exec(resetflag);break;
    case ID_5:sequcnt.Exec(resetflag);break;
    case ID_6:break;
  }
}

void pinSetup(){
  pinMode(BLUE_1,OUTPUT);
  pinMode(BLUE_2,OUTPUT);
  pinMode(BLUE_3,OUTPUT);
  pinMode(BLUE_4,OUTPUT);
  pinMode(COLOR_1_B,OUTPUT);
  pinMode(COLOR_1_G,OUTPUT);
  pinMode(COLOR_2_B,OUTPUT);
  pinMode(COLOR_2_G,OUTPUT);
  pinMode(COLOR_3_B,OUTPUT);
  pinMode(COLOR_3_G,OUTPUT);
  pinMode(COLOR_4_B,OUTPUT);
  pinMode(COLOR_4_G,OUTPUT);
  pinMode(COLOR_5_B,OUTPUT);
  pinMode(COLOR_5_G,OUTPUT);
  pinMode(COLOR_5_R,OUTPUT);
  pinMode(MAG_1,INPUT);
  pinMode(MAG_2,INPUT);
  pinMode(MAG_3,INPUT);
  pinMode(MAG_4,INPUT);  
}
