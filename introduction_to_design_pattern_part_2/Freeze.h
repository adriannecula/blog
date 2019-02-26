#ifndef FREEZE_INCLUDE
#define FREEZE_INCLUDE
#include "Unit.h"
#include <iostream>
class Freeze : public Unit
{
public:
	virtual void shoot()
	{
			}
	virtual void generateCoins()
	{

	}
	virtual void freezeEnenmy()
	{
		std::cout << "I am freeting the enemy" << std::endl;

	}
};

#endif
