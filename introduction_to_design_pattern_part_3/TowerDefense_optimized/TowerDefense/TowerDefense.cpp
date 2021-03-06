// TowerDefense.cpp : Defines the entry point for the application.
//
#include "DelayTower.h"
#include "MoneyGeneratorTower.h"
#include "OffesniveTower.h"
#include <memory>
using namespace std;

void startUnit(unique_ptr<IUnit>);

int main()
{
  unique_ptr<IUnit> offensive = make_unique<OffesniveTower>();
  unique_ptr<IUnit> delay = make_unique<MoneyGeneratorTower>();
  unique_ptr<IUnit> money = make_unique<DelayTower>();
  unique_ptr<IUnit> brokenTower = nullptr;
  startUnit(move(offensive));
  startUnit(move(delay));
  startUnit(move(money));

  getchar();
  return 0;
}

// Function used by the map to start the tower's ability
void startUnit(unique_ptr<IUnit> unit)
{
  if (unit != nullptr)
  {
    unit->execute();
  }
}

