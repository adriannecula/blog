#define MONEY_INCLUDE
#ifndef MONEY_INCLUDE
#include "Unit.h"
#include <iostream>
class Money : public Unit
{
public:
  Money() = default;

  virtual void shoot(){}
  
  virtual void generateMoney()
  {
    std::cout << "generating money" << std::endl;
  }
  
  virtual void freezeEnenmy(){}
  
  virtual Type getType()
  {
    return Type::TypeMoney;
  }
};

#endif