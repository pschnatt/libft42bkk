/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:22:53 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/04 13:22:53 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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