#include <my_lib.h>

int my_strlen(char* str)
{
  int i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}
