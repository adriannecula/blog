#ifndef OFFENSIVE_INCLUDE
#define OFFENSIVE_INCLUDE
#include "IOffesniveTower.h"
#include <iostream>
class OffesniveTower : public IOffesniveTower
{
public:
  OffesniveTower() = default;

  virtual void shootTroll()
  {
    std::cout << "shooting" << std::endl;
  }

  void execute()
  {
    shootTroll();
  }
};

#endif