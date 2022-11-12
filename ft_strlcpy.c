/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:41:04 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/12 11:49:30 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int			i;
	unsigned int			c;
	unsigned int			n;

	n = (unsigned int)size;
	i = ft_strlen((char *)src);
	c = 0;
	if (n > 0)
	{	
		while (c < n - 1)
		{
			if (src[c] == '\0')
				break ;
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (i);
}

/*int main()
{
	unsigned char p1[16] = "0123456789";
	unsigned char p2[11] = "ABCDEFGHIJKLMNO";
	unsigned char pp1[16] = "0123456789";
	unsigned char pp2[11] = "ABCDEFGHIJKLMNO";
	
	size_t n = 0;
	printf("P1 AVANT =  %s\n", p1);
	ft_strlcpy(p1, p2, n);
	printf("P1 APRES =  %s\n size = %li\n", p1, ft_strlcpy(p1, p2, n));
	
	printf("PP1 AVANT = %s\n", pp1);
	strlcpy(pp1, pp2, n);
	printf("PP1 APRES = %s\n size = %i\n", pp1, strlcpy(pp1, pp2, n));
	
}*/
