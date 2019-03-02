#ifndef FREEZE_INCLUDE
#define FREEZE_INCLUDE
#include "Unit.h"
#include <iostream>
class Delay : public Unit
{
public:
	Delay() = default;

	virtual void shoot(){}

	virtual void generateMoney(){}

	virtual void freezeEnenmy()
	{
		std::cout << "slowing down" << std::endl;
	}

	virtual Type getType()
	{
		return Type::TypeSlower;
	}
};

#endif
