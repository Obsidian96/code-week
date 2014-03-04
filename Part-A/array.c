#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void     my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n = n + 1;
    }
}


int     printArray(char **array, int min, int max)
{
  int	a;
  int	b;
  int	i;
  int	j;

     for(i = 0; i < 16; i = i + 1)
     {
      a = ( rand() % (max - min + 1) ) + min;
      b = ( rand() % (max - min + 1) ) + min;
	array[a][b] = '#';

       for(i = 0; i < 9; i = i + 1)

  {      for(j = 0; j < 9; j = j + 1)

        {
	  array[i][j] = '-';
	  array[0][j] = '#';
	  array[i][0] = '#';
	  array[8][j] = '#';
	  array[i][8] = '#';
 	}
  }  
     }
	for(i = 0; i < 9; i = i + 1)
       {
	  for(j = 0; j < 9; j = j + 1)
	    {
	      my_putchar(array[i][j]);
              my_putstr("  ");	      
	    }
	  my_putstr("\n");
       }
}

void	randomArray(int min, int max, char **array)
{
	int	a;
	int	b;
   max = 7;
   min = 1;
  srand(time(NULL));
   a = ( rand() % (max - min + 1) ) + min;
   b = ( rand() % (max - min + 1) ) + min;
}
