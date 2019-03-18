#pragma once
#include "IUnit.h"
class IOffensiveTower : public IUnit
{
public:
  virtual void shootTroll() = 0;
};