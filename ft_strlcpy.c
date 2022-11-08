/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:41:04 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/07 17:11:18 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int			i;
	unsigned int			c;
	int						n;

	n = (unsigned int)size;
	i = ft_str_len(src);
	c = 0;
	if (n > 0)
	{	
		while (c < n - 1)
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (i);
}
