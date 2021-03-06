// TowerDefense.cpp : Defines the entry point for the application.
//
#include "DelayTower.h"
#include "MoneyGeneratorTower.h"
#include "OffensiveTower.h"
#include "WitchTower.h"

#include "DelayCommand.h"
#include "MoneyGeneratorCommand.h"
#include "OffensiveCommand.h"
#include "WitchCommand.h"

#include <memory>
using namespace std;

void startUnit(unique_ptr<ICommand> command);

int main()
{
  unique_ptr<IOffensiveTower> offensive = make_unique<OffensiveTower>();
  unique_ptr<IDelayTower>  delay = make_unique<DelayTower>();
  unique_ptr<IMoneyGeneratorTower> money = make_unique<MoneyGeneratorTower>();
  unique_ptr<IWitchTower> witch = make_unique<WitchTower>();
 
  unique_ptr<ICommand>  delayCommand = make_unique<DelayCommand>(move(delay));
  unique_ptr<ICommand>  moneyCommand = make_unique<MoneyGeneratorCommand>(move(money));
  unique_ptr<ICommand>  offensiveCommand = make_unique<OffensiveCommand>(move(offensive));
  unique_ptr<ICommand>  witchCommand = make_unique<WitchCommand>(move(witch));
   //Add move ctor
  startUnit(move(delayCommand));
  startUnit(move(moneyCommand));
  startUnit(move(offensiveCommand));
  startUnit(move(witchCommand));
  
  getchar();
  return 0;
}

// Function used by the map to start the tower's ability
void startUnit(unique_ptr<ICommand> command)
{
  if (command != nullptr)
  {
    command->execute();
  }
}

