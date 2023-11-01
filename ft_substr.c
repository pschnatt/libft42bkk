/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <scrattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:22:53 by scrattan          #+#    #+#             */
/*   Updated: 2023/10/31 15:52:19 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	unsigned int	slen;
	unsigned int	count;

	slen = ft_strlen(s);
	if (len > slen - start)
		len = slen - start;
	if (start > slen)
		return (ft_strdup(""));
	count = 0;
	mem = malloc(len + 1);
	if (mem == NULL)
		return (NULL);
	while (start <= slen && count < len)
		mem[count++] = s[start++];
	mem[count] = '\0';
	return (mem);
}
