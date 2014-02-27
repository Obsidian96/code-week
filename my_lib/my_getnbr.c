#include <my_getnbr.h>

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  int	sign;
  
  i = 0;
  nbr = 0;
  sign = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	sign *= -1;
      else if (str[i] == '\0')
	return 0;
      ++i;
    }
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      nbr = nbr * 10 + str[i] - '0';
      ++i;
    }
  return (nbr * sign);
}
