#ifndef DELAY_INCLUDE
#define DELAY_INCLUDE
#include "IDelayTower.h"
#include <iostream>
class DelayTower : public IDelayTower
{
public:
  DelayTower() = default;

  virtual void delayTroll()
  {
    std::cout << "slowing down" << std::endl;
  }

  virtual Type getType()
  {
    return Type::Delay;
  }
};

#endif
