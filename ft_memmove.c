/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:00 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/12 13:30:44 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)src;
	i = -1;
	if (!(dest) && !(src) && n > 0)
		return (0);
	while (++i < n)
		((unsigned char *)dest)[i] = tmp[i];
	return (dest);
}

int main()
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
	printf("vraie memmove %s\n", dst1);
	printf("mon memmove %s\n", dst2);


}