#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char  *mem;
  int slen;
  int count;

  mem = malloc(len + 1);
  if (mem == NULL)
    return (NULL);
  slen = ft_strlen(s);
  count = 0;
  while (start < slen && count < len)
    mem[count++] = s[start++];
  mem[count] = '\0';
  return (mem);
}