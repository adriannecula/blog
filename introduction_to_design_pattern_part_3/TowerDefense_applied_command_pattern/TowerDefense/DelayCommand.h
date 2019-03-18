#ifndef DELAY_COMMAND_INCLUDE
#define DELAY_COMMAND_INCLUDE
#include "IDelayTower.h"
#include "ICommand.h"
#include <memory>
class DelayCommand : public ICommand
{
public:
  DelayCommand(std::unique_ptr<IDelayTower>tower_)
    :tower(std::move(tower_))
  {

  }

  virtual void execute()
  {
    tower->delayTroll();
  }
private:
  std::unique_ptr<IDelayTower> & tower;

};

#endif
