#ifndef FUNCTION_INCLUDE
#define FUNCTION_INCLUDE

class FUNCTION{
public:
  FUNCTION();
  void Do(bool);
  virtual void Light()=0;
protected:
  virtual void GetStats()=0;
  int stats;
};

#endif
