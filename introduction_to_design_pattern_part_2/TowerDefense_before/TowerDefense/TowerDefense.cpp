// TowerDefense.cpp : Defines the entry point for the application.
//
#include "Delay.h"
#include "TowerDefense.h"
#include "Offensive.h"
#include "Money.h"

using namespace std;

void startUnit(Unit*);

int main()
{
  Unit* offensive = new Offensive();
  Unit*  delay = new Delay();
  Unit* money = new Money();

  startUnit(offensive);
  startUnit(delay);
  startUnit(money);
  
  getchar();
  return 0;
}

// Function used by the map to start the tower's ability
void startUnit(Unit* unit)
{
  switch (unit->getType())
  {
  case Unit::Type::TypeGun:
      unit->shoot();
      break;

  case Unit::Type::TypeMoney:
    unit->generateMoney();
    break;

  case Unit::Type::TypeSlower:
    unit->freezeEnenmy();
    break;

  default:
    std::cout << "Invalid Type" << std::endl;
  }

}

