/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:02:21 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/17 11:22:44 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	temp = *lst;
	while (temp)
	{
		*lst = temp -> next;
		ft_lstdelone(temp, del);
		temp = *lst;
	}
}
