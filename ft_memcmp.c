/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:17:13 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 04:40:55 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	ft_strncmp((const char *)s1, (const char *)s2, n);
}

/*int main()
{
	char *s1 = "aaFaaA";
	char *s2 = "aaFaa";
	size_t n = 10;
	
	printf("[Ma fonction] 		Valeur de (s1 - s2) = %i\n", ft_memcmp(s1, s2, n));
	printf("[Vraie Fonction]	Valeur de (s1 - s2) = %i\n", memcmp(s1, s2, n));
}*/
