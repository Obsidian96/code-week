#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"
#include <time.h>

int      main(void)
{
  int   i;
  char  **array;

  i = 0;
  array = (char**)malloc(9 * sizeof(char*));
  while (i < 9)
    {
      array[i] = (char*)malloc(sizeof(char) * 9);
      i = i + 1;
    }
  
  printArray(array);
  free(array);
  return (0);
}
