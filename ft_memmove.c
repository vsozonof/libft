/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:00 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 10:26:27 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*tmp;

	tmp = (char *)src;
	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = tmp[i];
	return (dest);
}

/*int main()
{
	unsigned char p1[50] = "je mange du poulet";
	unsigned char p2[50] = "vive les perroquets violet";
	unsigned char pp1[50] = "je mange du poulet";
	unsigned char pp2[50] = "vive les perroquets violet";
	
	size_t n = 29;
	printf("P1 AVANT =  %s\n", p1);
	ft_memmove(p1, p2, n);
	printf("P1 APRES =  %s\n", p1);
	
	printf("PP1 APRES = %s\n", pp1);
	memmove(pp1, pp2, n);
	printf("PP1 APRES = %s\n", pp1);
	
}*/