#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
  void  *mem;

  if (nmemb == 0 || size == 0)
    mem = malloc(1);
  else
    mem = malloc(nmemb * size);
  if (mem == NULL)
    return (NULL);
  else
    ft_memset(mem, 0, nmemb * size);
  return (mem);
}