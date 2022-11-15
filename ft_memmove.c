/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:00 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/15 21:33:23 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else if (src > dest)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}*/	

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ucsrc;
	unsigned char	*ucdest;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ucsrc = (unsigned char *)src;
	ucdest = (unsigned char *)dest;
	if (ucdest > ucsrc)
	{
		while (n--)
			ucdest[n] = ucsrc[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			ucdest[i] = ucsrc[i];
	}
	return (dest);
}

/*int main()
{
	char dst1[0xF0];
	char dst2[0xF0];
	char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));
	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	memmove(dst1 + 3, dst1, size);
	ft_memmove(dst2 + 3, dst2, size);
	printf("size vaut %i\n", size);
	printf("vraie memmove %s\n\n", dst1);
	printf("mon memmove %s\n\n", dst2);
}*/