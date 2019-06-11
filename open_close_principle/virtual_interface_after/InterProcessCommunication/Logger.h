#pragma once
#include <string>
#include "ILogger.h"
class Logger : public ILogger
{
public:
  void logError(std::string message);
  void logWarning(std::string message);
  void logInfo(std::string message);
  void logDebug(std::string message);

};