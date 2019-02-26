#ifndef DEFENSE_INCLUDE
#define DEFENSE_INCLUDE
#include "Unit.h"
#include <iostream>
class Defense : public Unit
{
public:
	virtual void shoot()
	{
		std::cout << "I am shooting" << std::endl;
	}
	virtual void generateCoins()
	{

	}
	virtual void freezeEnenmy()
	{

	}
};

#endif