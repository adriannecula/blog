#pragma once
#include <string>
class ILogger
{
public:
  virtual void logError(std::string message) = 0;
  virtual void logWarning(std::string message) = 0;
  virtual void logInfo(std::string message) = 0;
  virtual void logDebug(std::string message) = 0;
};