#ifndef DEFENSE_INCLUDE
#define DEFENSE_INCLUDE
#include "Unit.h"
#include <iostream>
class Offensive : public Unit
{
public:
	Offensive() = default;

	virtual void shoot()
	{
		std::cout << "shooting" << std::endl;
	}

	virtual void generateMoney(){}
	
  virtual void freezeEnenmy(){}
	
  virtual Type getType()
	{
		return Type::TypeGun;
	}
};

#endif