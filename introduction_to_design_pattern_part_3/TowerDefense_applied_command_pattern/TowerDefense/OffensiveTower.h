#ifndef OFFENSIVE_INCLUDE
#define OFFENSIVE_INCLUDE
#include "IOffesniveTower.h"
#include <iostream>
class OffensiveTower : public IOffensiveTower
{
public:
  OffensiveTower() = default;

  virtual void shootTroll()
  {
    std::cout << "shooting" << std::endl;
  }

  virtual Type getType()
  {
    return Type::Offensive;
  }
};

#endif