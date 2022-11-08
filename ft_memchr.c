/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:57:41 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/07 18:12:40 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	letter;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	while (str[i] && i < n)
	{
		if (str[i] == letter)
			return (str[i]);
		else
			i++;
	}
	return (NULL);
}
