#ifndef DEFENSE_INCLUDE
#define DEFENSE_INCLUDE
#include "Unit.h"
#include <iostream>
class Defense : public Unit
{
public:
	Defense() = default;
	virtual void shoot()
	{
		std::cout << "I am shooting" << std::endl;
	}

	virtual void generateCoins(){}
	
  virtual void freezeEnenmy(){}
	
  virtual Type getType()
	{
		return Type::TypeGun;
	}
};

#endif