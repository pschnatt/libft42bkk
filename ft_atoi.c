#include "libft.h"

int ft_atoi(const char *str)
{
  int num;
  int sign;

  num = 0;
  sign = 1;
  while (*str == 32 || *str >= 9 && *str <= 13)
    str++;
  if (*str == '+' || *str == '-')
  {
    if (*str == '-')
      sign = -1;
    str++;
  }
  while (*str >= '0' && *str <= '9')
  {
    num = (num * 10) + (*str - '0');
    str++;
  }
  return (num * sign);
}