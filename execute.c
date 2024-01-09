#include "shell.h"

void executeUserCommand(const char *userCommand)
{
  pid_t child_pid = fork();

  if (child_pid == -1)
    {
      perror("fork");
      exit(EXIT_FAILURE);
    }
  else if(child_pid == 0)
    {
      execlp(userCommand, userCommand, (char *)NULL);
      perror("execlp");
      exit(EXIT_FAILURE);
    }
  else
    {
      wait(NULL);
    }
}
