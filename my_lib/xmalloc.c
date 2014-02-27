#include <my_lib.h>
#include <stdlib.h>

void* xmalloc(int size)
{
  void *ptr;
  if (!(ptr = malloc(size)))
    exit(1); 
  return (ptr);
}
