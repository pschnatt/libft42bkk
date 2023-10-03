#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char  *mem;
  int len;
  int index;

  len = ft_strlen(s1) + ft_strlen(s2);
  mem = malloc(len + 1);
  if (mem == NULL)
    return (NULL);
  index = 0;
  while (*s1)
  {
    mem[index++] == *s1;
    s1++;
  }
  while (*s2)
  {
    mem[index++] == *s2;
    s2++;
  }
  mem[index] = '\0';
  return (mem);
}