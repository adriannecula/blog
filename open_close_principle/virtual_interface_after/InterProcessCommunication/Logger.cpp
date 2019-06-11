#include "Logger.h"
#include <iostream>
void Logger::logError(std::string message)
{
  std::cout << "ERROR: " << message << std::endl;
}

void Logger::logWarning(std::string message)
{
  std::cout << "WARNING: " << message << std::endl;
}

void Logger::logInfo(std::string message)
{
  std::cout << "INFO: " << message << std::endl;
}

void Logger::logDebug(std::string message)
{
  std::cout << "DEBUG: " << message << std::endl;
}