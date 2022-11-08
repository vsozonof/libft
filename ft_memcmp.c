/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:17:13 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/07 18:20:04 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	ft_strncmp((unsigned char *)s1, (unsigned char *)s2, n);
}
