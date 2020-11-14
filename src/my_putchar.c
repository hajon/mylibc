/**
 *  Author: Johan Thay Nam
 *  Create Time: 2020-11-14 11:29:29
 *  Modified by: Johan Thay Nam
 *  Modified time: 2020-11-14 14:00:41
 *  Description:
 **/

#include "../includes/mylibc.h"
#include <stdio.h>

int	my_putchar(char c)
{
  if (write(1, &c, 1) == 1)
    return (1);
  return (-1);
}
