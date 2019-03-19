#ifndef WITCH_COMMAND_INCLUDE
#define WITCH_COMMAND_INCLUDE
#include "IWitchTower.h"
#include "ICommand.h"
#include <memory>
class WitchCommand : public ICommand
{
public:
  WitchCommand(std::unique_ptr<IWitchTower>tower_)
    :tower(std::move(tower_))
  {

  }

  virtual void execute()
  {
    tower->bewitchTroll();
  }
private:
  std::unique_ptr<IWitchTower> tower;

};

#endif
