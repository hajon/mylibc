/**
 *  Author: Johan Thay Nam
 *  Create Time: 2020-11-13 17:28:35
 *  Modified by: Johan Thay Nam
 *  Modified time: 2020-11-14 11:35:16
 *  Description:
 **/

int	main(int ac, char **av)
{
  if (ac == 2)
  {
    printf("len: %d\n", my_strlen(av[1]));
    printf("return: %d\n", my_putchar('t'));
    my_putstr(av[1]);
  }
  return 0;
}
