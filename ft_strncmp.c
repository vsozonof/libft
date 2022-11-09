/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:38:46 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 10:26:46 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main()
{
	char *s1 = "aaFaa";
	char *s2 = "aaFaa";
	size_t n = 10;

	printf("[Ma fonction] 		Valeur de (s1 - s2) = %i\n", ft_strncmp(s1, s2, n));
	printf("[Vraie Fonction]	Valeur de (s1 - s2) = %i\n", strncmp(s1, s2, n));
}*/
