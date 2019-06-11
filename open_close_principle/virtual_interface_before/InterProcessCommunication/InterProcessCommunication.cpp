#include "InterProcessCommunication.h"

void InterProcessCommunication::connect(std::string processName)
{
  logger.logInfo("Connecting to server" + processName);
}


void InterProcessCommunication::sendMessagge(std::string message)
{

  logger.logInfo("Sending message" + message);
}

void InterProcessCommunication::receiveMessage(std::string message)
{
  logger.logInfo("Received from server : " + message);
}