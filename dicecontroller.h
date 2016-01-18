#ifndef DICECONTROLLER_INCLUDE
#define DICECONTROLLER_INCLUDE
#include "controller.h"
#include "dice.h"

class DICECONTROLLER:public CONTROLLER{
public:
  DICECONTROLLER();
private:
  void Controll(bool);
  DICE dice;
};

#endif
