/**
 *  Author: Johan Thay Nam
 *  Create Time: 2020-11-13 17:28:35
 *  Modified by: Johan Thay Nam
 *  Modified time: 2020-11-14 14:00:45
 *  Description:
 **/

#include "../includes/mylibc.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
      if (my_putchar(str[i++]) == -1)
	      return (-1);
  return (0);
}
