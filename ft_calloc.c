/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:56:13 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/19 09:34:11 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_calloc(size_t nb_element, size_t nb_octet)
{
	void	*tab;

	if (nb_octet > 0 && SIZE_MAX / nb_octet < nb_element)
		return (NULL);
	tab = malloc(nb_element * nb_octet);
	if (!tab)
		return (tab);
	ft_bzero(tab, nb_element * nb_octet);
	return (tab);
}
