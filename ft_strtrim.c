/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:22:45 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/04 13:22:45 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_malloc_index(char const *src, size_t start, size_t end)
{
  char  *mem;
  size_t  count;

  mem = malloc(end - start + 2);
  if (mem == NULL)
    return (NULL);
  count = 0;
  while (start <= end)
    mem[count++] = src[start++];
  mem[count] = '\0';
  return (mem);
}

char *ft_strtrim(char const *s1, char const *set)
{
  size_t len;
  size_t start;
  size_t end;

  len = ft_strlen(set);
  start = 0;
  if (ft_strncmp(s1, (char *)set, len) == 0)
    start = len;
  end = ft_strlen(s1) - len - 1;
  while (len)
  {
    if (s1[ft_strlen(s1) - len] != set[ft_strlen(set) - len])
    {
      end = ft_strlen(s1) - 1;
      break;
    }
    len--;
  }
  return ((char *)ft_malloc_index(s1, start, end));
}
