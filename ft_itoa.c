/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:55:48 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/05 13:55:48 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int digitcount(int n, int sign)
{
  int digit;

  digit = 0;
  if (n == 0)
    return (1);
  while (n)
  {
    n /= 10;
    digit++;
  }
  if (sign == -1)
    digit++;
  return (digit);
}

char *itoa_helper(char *mem, int memlen,int sign, long n)
{
  memlen = digitcount(n, sign);
  mem = malloc(memlen + 1);
  mem[memlen] = '\0';
  if (n == 0)
    mem[0] = '0';
  if (sign == -1)
    mem[0] = '-';
  while (n)
  {
    mem[memlen - 1] = (char)((n % 10) + 48);
    n /= 10;
    memlen--;
  }
  return (mem);
}

char  *ft_itoa(int n)
{
  int sign;
  char  *mem;
  int memlen;
  long nbr;

  nbr = n;
  sign = (n < 0) ? -1 : 1;
  nbr = (n < 0) ? -nbr : nbr;
  printf("%ld\n", nbr);
  mem = itoa_helper(mem, memlen, sign, nbr);
  return (mem);
}