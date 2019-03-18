#pragma once
#include "IUnit.h"
class IMoneyGeneratorTower : public IUnit
{
public:
  virtual void generateMoney() = 0;
};