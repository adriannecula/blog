#pragma once
#include <string>
class Logger
{
public:
  void logError(std::string message);
  void logWarning(std::string message);
  void logInfo(std::string message);
  void logDebug(std::string message);

};