#ifndef MONO_G_CONTROLLER_INCLUDE
#define MONO_G_CONTROLLER_INCLUDE
#include "controller.h"
#include "monog.h"

class MONO_G_CONTROLLER:public CONTROLLER{
public:
  MONO_G_CONTROLLER();
private:
  void Controll(bool);
  MONO_G monog;  
};

#endif
