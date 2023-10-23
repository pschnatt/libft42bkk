/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <scrattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:50:52 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/17 10:10:35 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newl)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = newl;
		return ;
	}
	if (newl == NULL)
		return ;
	else
	{
		temp = *lst;
		while (temp -> next)
			temp = temp -> next;
		temp -> next = newl;
	}
}
