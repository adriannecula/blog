#ifndef MONEY_GENERATOR_COMMAND_INCLUDE
#define MONEY_GENERATOR_COMMAND_INCLUDE
#include "IMoneyGeneratorTower.h"
#include "ICommand.h"
#include <memory>
class MoneyGeneratorCommand : public ICommand
{
public:
  MoneyGeneratorCommand(std::unique_ptr<IMoneyGeneratorTower>tower_)
    :tower(std::move(tower_))
  {

  }

  virtual void execute()
  {
    tower->generateMoney();
  }
private:
  std::unique_ptr<IMoneyGeneratorTower> & tower;

};

#endif
