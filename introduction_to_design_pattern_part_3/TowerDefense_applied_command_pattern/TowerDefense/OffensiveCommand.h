#ifndef OFFENSIVE_COMMAND_INCLUDE
#define OFFENSIVE_COMMAND_INCLUDE
#include "IOffesniveTower.h"
#include "ICommand.h"
#include <memory>
class OffensiveCommand : public ICommand
{
public:
  OffensiveCommand(std::unique_ptr<IOffensiveTower>tower_)
    :tower(std::move(tower_))
  {

  }

  virtual void execute()
  {
    tower->shootTroll();
  }
private:
  std::unique_ptr<IOffensiveTower> & tower;

};

#endif
