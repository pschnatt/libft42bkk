/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:00:07 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/17 09:20:34 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mem;

	mem = (t_list *)malloc(sizeof(t_list));
	if (mem == NULL)
		return (NULL);
	mem -> content = content;
	mem -> next = NULL;
	return (mem);
}
