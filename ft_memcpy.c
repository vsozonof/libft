/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:30:10 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/12 01:22:10 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!(dest) && !(src) && n > 0)
		return (0);
	while (++i < n)
		((char *)dest)[i] = ((const char *)src)[i];
	return (dest);
}

/*int main()
{
	unsigned char p1[50] = "0123456789";
	unsigned char p2[50] = "ABCDEFGHIJ";
	unsigned char pp1[50] = "0123456789";
	unsigned char pp2[50] = "ABCDEFGHIJ";
	
	size_t n = -1;
	printf("P1 AVANT = %s\n", p1);
	ft_memcpy(p1, p2, n);
	printf("P1 APRES = %s\n", p1);
	
	printf("PP1 APRES = %s\n", pp1);
	memcpy(pp1, pp2, n);
	printf("PP1 APRES = %s\n", pp1);
	
}*/
