#include <my_str_to_wordtab.h>

struct	commande
{
  char	*name;
};

int	my_wordtablen(char **wordtab)
{
  int	i;

  i = 0;
  while (wordtab[i] != 0)
    ++i;
  return (i);
}

void	my_show_wordtab(char **str_tab)
{
  int	i;

  i = 0; 
  while (str_tab[i] != '\0')
    {
      my_putstr(str_tab[i]);
      my_putchar('\n');
      i++;
    }
}

int	my_parser(char **str)
{
  
}

int	main(void)
{
  char	**wordtab;

  my_show_wordtab(my_str_to_wordtab("move up"));
  return (0);
}
