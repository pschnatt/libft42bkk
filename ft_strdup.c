#include "libft.h"

char	*ft_strdup(const char *s)
{
  int len;
  char  *mem;
  int count;
  
  len = ft_strlen(s);
  mem = malloc(len + 1);
  if (mem == NULL)
    return (NULL);
  count = 0;
  while (count < len)
  {
    mem[count] = s[count];
    count++;
  }
  mem[count] = '\0';
  return (mem);
}