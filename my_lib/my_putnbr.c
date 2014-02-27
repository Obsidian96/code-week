#include <my_lib.h>

void	my_putnbr(int nbr)
{
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  if (nbr >= 10)
    my_putnbr(nbr / 10);
  my_putchar(nbr % 10 + '0');
}
