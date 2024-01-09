#include "shell.h"

int main(void)
{
  char userCommand[200];

  while(true)
    {
      void displayPrompt(void)
      {
	printv("$ ");
      }
      readUserCommand(userCommand, sizeof(userCommand));
      executeUserCommand(userCommand);
    }
  
  return (0);
}
