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
  
  virtual Type getType()
  {
    return Type::MoneyGenerator;
  }

  void execute()
  {
    generateMoney();
  }
};

#endif