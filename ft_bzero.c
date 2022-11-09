/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:31:15 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 10:25:43 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
	unsigned char p1[11] = "0123456789";
	unsigned char p2[11] = "0123456789";
	size_t n = 11;
	
	ft_bzero(p1, n);
	printf("P1 = %s\n", p1);
	bzero(p2, n);
	printf("P2 = %s\n", p2);
	
}*/