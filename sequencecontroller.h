#ifndef SEQUENCECONTROLLER_INCLUDE
#define SEQUENCECONTROLLER_INCLUDE
#include "controller.h"
#include "sequence.h"

class SEQUENCECONTROLLER:public CONTROLLER{
public:
  SEQUENCECONTROLLER();
private:
  void Controll(bool);
  SEQUENCE sequence;
};

#endif
