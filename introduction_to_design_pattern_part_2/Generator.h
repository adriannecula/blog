#ifndef GENERATOR_INCLUDE
#define GENERATOR_INCLUDE
#include "Unit.h"
#include <iostream>
class Generator : public Unit
{
public:
	virtual void shoot()
	{
		
	}
	virtual void generateCoins()
	{
		std::cout << "generate coins" << std::endl;
	}
	virtual void freezeEnenmy()
	{

	}
};

#endif