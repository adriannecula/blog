#pragma once
#include <string>
#include "Logger.h"
class InterProcessCommunication
{
public:
  void connect(std::string processName);
  void sendMessagge(std::string messages);
  void receiveMessage(std::string messages);
private:
  Logger logger;

};