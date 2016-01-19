#ifndef CONTROLLER_INCLUDE
#define CONTROLLER_INCLUDE

class CONTROLLER{
public:
  void Exec(bool);
protected:
  virtual void Controll(bool)=0;
  unsigned long updatetime;
};

#endif
