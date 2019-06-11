#include "InterProcessCommunication.h"
#include "Logger.h"
int main()
{
  Logger logger;
  InterProcessCommunication ipc(logger);
  ipc.connect("192.168.1.0");
  ipc.sendMessagge("Hello from IPC");
  return 0;
}