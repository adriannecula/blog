#ifndef UNIT_INCLUDE
#define UNIT_INCLUDE

class Unit 
{
public:
	enum class Type 
	{
		TypeGun,
		TypeMoney,
		TypeSlower
	};

	virtual Type getType() = 0;
	
  virtual void shoot() = 0;
	
  virtual void generateMoney() = 0;
	
  virtual void freezeEnenmy() = 0;
};

#endif