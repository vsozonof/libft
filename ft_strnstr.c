/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:24:16 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/07 18:54:03 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (s2[i] == '\0')
		return (s1);
	while (s1[i] && (i < len))
	{
		if (s1[i] == s2[i])
		{
			while ((s1[i + j] == s2[i + j]) && (i + j < len))
			{
				j++;
				if (s2 == '\0')
					return (&s1[i]);
			}
		}
		i++;
	}
	return (NULL);
}