/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:55:48 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/24 13:24:55 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	digitcount(int n, int sign)
{
	int	digit;

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

char	*itoa_helper(char *mem, int memlen, int sign, long n)
{
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

char	*ft_itoa(int n)
{
	char	*mem;
	int		sign;
	int		memlen;
	long	nbr;

	nbr = n;
	sign = 1;
	if (n < 0)
		sign = -1;
	if (n < 0)
		nbr = -nbr;
	memlen = digitcount(nbr, sign);
	mem = malloc(memlen + 1);
	mem = itoa_helper(mem, memlen, sign, nbr);
	return (mem);
}
