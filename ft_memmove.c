/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:00 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/07 15:16:07 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = -1;
	while (++i < n)
		tmp[i] = ((const char *)src)[i];
	i = -1;
	while (++i < n)
		((char *)dest)[i] = tmp[i];
	return (dest);
}
