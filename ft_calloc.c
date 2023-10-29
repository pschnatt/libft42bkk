/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:21:22 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/24 20:14:02 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	sizen;

	sizen = (nmemb * size);
	mem = malloc(sizen);
	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	if (sizen)
		ft_memset(mem, 0, nmemb * size);
	return (mem);
}
