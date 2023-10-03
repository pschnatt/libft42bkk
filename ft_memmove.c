/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <scrattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:36:12 by scrattan          #+#    #+#             */
/*   Updated: 2023/09/19 17:11:59 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)s1;
	s = (const unsigned char *)s2;
	if (s < d && s + n > d)
	{
		s += n;
		d += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (s1);
}
