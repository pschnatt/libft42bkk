/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:22:15 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/24 18:08:11 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	int	id;

	if (s == NULL)
		return (NULL);
	id = 0;
	while (s[id])
	{
		if (s[id] == (char) i)
			return ((char *)(s + id));
		id++;
	}
	if (s[id] == (char) i)
		return ((char *)(s + id));
	return (NULL);
}
