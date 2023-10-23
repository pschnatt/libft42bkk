/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 04:00:26 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/17 09:28:34 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = (long) n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l *= -1;
	}
	if (l > 9)
	{
		ft_putnbr_fd((int)(l / 10), fd);
		ft_putnbr_fd((int)(l % 10), fd);
	}
	else
		ft_putchar_fd(l + '0', fd);
}
