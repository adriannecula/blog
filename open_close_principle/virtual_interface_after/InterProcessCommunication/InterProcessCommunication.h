#pragma once
#include <string>
#include "Logger.h"
class InterProcessCommunication
{
public:
  InterProcessCommunication(ILogger& logger_);
  void connect(std::string processName);
  void sendMessagge(std::string messages);
  void receiveMessage(std::string messages);
private:
  ILogger& logger;

};