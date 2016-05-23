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
