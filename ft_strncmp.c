/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <scrattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:56:26 by scrattan          #+#    #+#             */
/*   Updated: 2023/06/14 17:04:30 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}
