#ifndef SPINCONTROLLER_INCLUDE
#define SPINCONTROLLER_INCLUDE
#include "controller.h"
#include "spin.h"

class SPINCONTROLLER: public CONTROLLER{
public:
  SPINCONTROLLER();
private:
  void Controll(bool);
  SPIN spin;
};

#endif
