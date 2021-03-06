// TowerDefense.cpp : Defines the entry point for the application.
//
#include "DelayTower.h"
#include "MoneyGeneratorTower.h"
#include "OffesniveTower.h"
#include <memory>
using namespace std;

void startUnit(IUnit*);

int main()
{
  IUnit* offensive = new OffesniveTower();
  IUnit*  delay = new MoneyGeneratorTower();
  IUnit* money = new DelayTower();
  IUnit* brokenTower = nullptr;
  startUnit(offensive);
  startUnit(delay);
  startUnit(money);
  startUnit(brokenTower);
  
  delete offensive;
  delete delay;
  delete money;
  getchar();
  return 0;
}

// Function used by the map to start the tower's ability
void startUnit(IUnit* unit)
{
  if (unit == nullptr)
  {
    std::cout << "Invalid Tower" << std::endl;
    return;
  }
  switch (unit->getType())
  {
  case IUnit::Type::Delay:
      static_cast<IDelayTower*>(unit)->delayTroll();
      break;

  case IUnit::Type::MoneyGenerator:
    static_cast<IMoneyGeneratorTower*>(unit)->generateMoney();
    break;

  case IUnit::Type::Offensive:
    static_cast<IOffesniveTower*>(unit)->shootTroll();
    break;

  default:
    std::cout << "Invalid Type" << std::endl;
  }

}

