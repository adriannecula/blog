#pragma once
#include "IWitchTower.h"
#include <iostream>
class WitchTower : public IWitchTower
{
public:
  virtual void bewitchTroll()
  {
    std::cout << "attack another troll" << std::endl;
  }

  virtual Type getType()
  {
    return Type::Witch;
  }
};