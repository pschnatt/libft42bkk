/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 00:54:54 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/06 00:54:54 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char  *mem;
  unsigned int i;

  mem = malloc(ft_strlen(s) + 1);
  i = 0;
  while (s[i])
  {
    mem[i] = f(i, s[i]);
    i++;
  }
  mem[i] = '\0';
  return (mem);
}
