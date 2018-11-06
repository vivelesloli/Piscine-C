int base true(char *base)
{
    int x;
    int y;

    x = 0;
    if (!base[0] || base[1]))
        return (0);
    while(base[x])
    {
        y = x+1;
        if (base[x] == '+'|| base[x] == '-')
            return (0);
        if (base[x] < 32 || base[x] > 126)
            return (0);
        while (base[y])
        {
            if (base[x] == base[y])
                return (0);
            y++;
        }
        x++;
    }
    return (1);
}

int   str_true(char *str, char *base)
{
  int x;
  int y;
  int z;

  x = 0;
  y = 0;
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

int ft_atoi_base(char *str, char *base)
{
    int i;
    int j;
    int signe;
    int entier;

    signe = 1;
    entier = 0;
    if (base_true(base) && str_true(str, base))
    {
        i = 0;
        while ((str[i] == ' ') || (str[x] == '\t') || (str[x] == '\n'))
            i++;
        signe = (str[i] == '-') ? - 1 : 1;
        if (str[i] == '+' || str[i] == '-')
            i++;
        while (str[i])
        {
            j = 0;
            while (base[j] && str[i] != base[j])
              j++;
        }
    }
    return (entier * signe);
}
