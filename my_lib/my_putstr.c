#include <unistd.h>
#include <my_putstr.h>

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    ++i;
  write(1, str, i);
}
