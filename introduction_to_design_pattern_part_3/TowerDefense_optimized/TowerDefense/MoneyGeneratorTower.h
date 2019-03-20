#ifndef MONEY_INCLUD
#define MONEY_INCLUD

#include "IMoneyGeneratorTower.h"
#include <iostream>

class MoneyGeneratorTower : public IMoneyGeneratorTower
{
public:
  MoneyGeneratorTower() = default;

  virtual void generateMoney()
  {
    std::cout << "generating money" << std::endl;
  }

  void execute()
  {
    generateMoney();
  }
};

#endif