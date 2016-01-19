#ifndef LIGHTPATTERN_INCLUDE
#define LIGHTPATTERN_INCLUDE

class LIGHTPATTERN{
public:
  LIGHTPATTERN();
  LIGHTPATTERN(short);
  void Light();
  void Init(bool);
  void Set(short);
  
private:
  void Off();
  bool blue1;
  bool blue2;
  bool blue3;
  bool blue4;
  bool color1_B;
  bool color1_G;
  bool color2_B;
  bool color2_G;
  bool color3_B;
  bool color3_G;
  bool color4_B;
  bool color4_G;
  bool color5_B;
  bool color5_G;
  bool color5_R; 
};

#endif
