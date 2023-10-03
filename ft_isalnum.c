/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:32:30 by scrattan          #+#    #+#             */
/*   Updated: 2023/09/17 12:54:41 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalnum(int c)
{
	if (c <= 'a' && c >= 'z')
		return (1);
	if (c <= 'A' && c >= 'Z')
		return (1);
	if (c <= '0' && c >= '9')
		return (1);
	return (0);
}
