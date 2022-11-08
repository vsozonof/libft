/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:29:57 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/08 18:55:05 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*int main()
{
	unsigned char p1[50] = "0123456789";
	unsigned char p2[50] = "0123456789";
	size_t n = 64;
	ft_memset(p1, 'c', n);
	printf("P1 = %s\n", p1);
	memset(p2, 'c', n);
	printf("P2 = %s\n", p2);
	
}*/
