#ifndef FREEZE_INCLUDE
#define FREEZE_INCLUDE
#include "Unit.h"
#include <iostream>
class Freeze : public Unit
{
public:
	Freeze() = default;
	virtual void shoot(){}

	virtual void generateCoins(){}

	virtual void freezeEnenmy()
	{
		std::cout << "I am freeting the enemy" << std::endl;
	}

	virtual Type getType()
	{
		return Type::TypeSlower;
	}
};

#endif
