/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:56:13 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/16 14:55:21 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (nmemb >= __SIZE_MAX__ || size >= 65537 || size == 0 || nmemb == 0)
		return (NULL);
	tab = malloc(size * nmemb);
	if (!tab)
		return (tab);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
