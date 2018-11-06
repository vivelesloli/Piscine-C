void ft_putchar(char c);

int   str_true(char *str, char *base)
{
  int x;
  int y;

  x = 0;
  if ()
  while (base[z])
      z++
  while ((str[x] == '\f')|| (str[x] == '\t') || (str[x] == '\n') || (str[x] == '\r') || (str[x] == '\v') || (str[x] == ' '))
      x++;
  if (str[x] == '+' || str[x] == '-')
      x++;
    while (str[x])
    {
          y = 0;
          while (base[y] && base[y] != str[x])
              y++;
          if (y == z)
              return (0);
          x++;
    }
    return(1);
}
