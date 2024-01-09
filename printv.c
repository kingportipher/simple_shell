#include "shell.h"


void printv(const char *userprompt)
{
  write(STDOUT_FILENO, userprompt, strlen(userprompt));
}
