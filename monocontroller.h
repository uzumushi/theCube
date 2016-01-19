#ifndef MONOCONTROLLER_ICNLUDE
#define MONOCONTROLLER_ICNLUDE
#include "controller.h"
#include "mono.h"

class MONOCONTROLLER:public CONTROLLER{
public:
  MONOCONTROLLER();
private:
  void Controll(bool);
  MONO mono;
};

#endif
