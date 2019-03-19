#ifndef UNIT_INCLUDE
#define UNIT_INCLUDE

class IUnit 
{
public:
  enum class Type 
  {
    Delay,
    Offensive,
    MoneyGenerator,
    Witch
  };

  virtual Type getType() = 0;

};

#endif