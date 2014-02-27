#include <my_lib.h>
#include <stdlib.h>

int	my_stw_isletter(char c)
{
  if ((c >= '0' && c <= '9') ||
      (c >= 'a' && c <= 'z') ||
      (c >= 'A' && c <= 'Z'))
    return (1);
  return (0);
}

char*	my_stw_getwordid(char *str, int id)
{
  int	i;
  int	nbword;
  int	nbletter;
  char	*word;
  int	letterid;

  nbword = 0;
  nbletter = 0;
  i = 0;
  ++id;
  while (str[i])
    {
      if (my_stw_isletter(str[i]) && (i == 0 || (i > 0 && !my_stw_isletter(str[i - 1])))) 
	{
	  ++nbword;
	  if (nbword == id)
	    letterid = i;
	}
      if (nbword == id && my_stw_isletter(str[i]))
	++nbletter;
      ++i;
    }
  word = malloc((nbletter + 1) * sizeof(char));
  i = 0;
  while (i < nbletter)
    {
      word[i] = str[i + letterid];
      ++i;
    }
  word[++i] = '\0';
  return (word);
}

int	my_stw_countword(char *str)
{
  int	i;
  int	nbword;

  nbword = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (my_stw_isletter(str[i]) && (i == 0 || (i > 0 && !my_stw_isletter(str[i - 1])))) 
	{
	  ++nbword;
	}
      ++i;
    }
  return (nbword);
}

char**		my_str_to_wordtab(char *str)
{
  int		i;
  int		nbword;
  char		**wordtab;

  nbword = my_stw_countword(str);
  wordtab = malloc((nbword + 1) * sizeof(char*));
  i = 0;
  while (i < nbword)
    {
      wordtab[i] = my_stw_getwordid(str, i);
      ++i;
    }
  wordtab[++i] = 0;
  return (wordtab);
}
