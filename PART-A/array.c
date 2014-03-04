#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n = n + 1;
    }
}

int     wallGenerator(char **array)
{
  int	i;
  int	j;
  i = 0;
  j = 0;
  while(i < 9)
    {
      j = 0;
      while(j < 9)
	{    
	  array[i][j] = '#';
	  j = j + 1;
	} 
      i = i + 1;  
    }
  i = 0;
  j = 0;
}
 
int	printArray(char ** array)
{
  int	i;
  int	j;
  i = 0;
  while(i < 9)
    {
      j = 0;
      while(j < 9)
	{
      	  my_putchar(array[i][j]);
	  my_putstr(" ");
	  j = j + 1;
	}
      my_putstr("\n");
      i = i + 1;
    }
}

int	mapGenerator(char **array)
{
  int   a;
  int   b;
  int	i;
  i = 0;
  srand(time(NULL));

  while (i < 30)
    {
      a = ( rand() % (7) ) + 1;
      b = ( rand() % (7) ) + 1;
      array[a][b] = ' ';
      i = i + 1;
    }
  a = ( rand() % (6) ) + 2; 
  b = ( rand() % (6) ) + 2;
 
  array[4][4] = 'X';
  array[4][5] = ' '; 
  array[5][4] = ' ';
  array[3][4] = ' ';
  array[4][3] = ' ';
  array[a][b] = '*'; 
}
