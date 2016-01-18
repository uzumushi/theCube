#ifndef RANDOMCONTROLLER_INCLUDE
#define RANDOMCONTROLLER_INCLUDE
#include "random.h"

class RANDOMCONTROLLER:public CONTROLLER{
public:
  RANDOMCONTROLLER();
private:
  void Controll(bool);
  RANDOM random;
};

#endif
