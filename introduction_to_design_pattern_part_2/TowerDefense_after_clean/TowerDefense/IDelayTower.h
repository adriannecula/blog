#pragma once
#include "IUnit.h"
class IDelayTower : public IUnit
{
public:
  virtual void delayTroll() = 0;
};
