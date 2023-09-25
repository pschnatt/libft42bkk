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

void	*my_memmove(void *dest, const void *src, int n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
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
	return (dest);
}
