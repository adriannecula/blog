#include "InterProcessCommunication.h"

int main()
{
  InterProcessCommunication ipc;
  ipc.connect("192.168.1.0");
  ipc.sendMessagge("Hello from IPC");
  return 0;
}