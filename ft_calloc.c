/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:56:13 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 06:33:41 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	tab = malloc(sizeof((size) * nmemb));
	if (!tab)
		return (NULL);
	while (tab[i])
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

/*int main()
{
	size_t nb = 15;
	size_t i = 0;
	size_t j = 0;

	char *str1 = ft_calloc(nb, sizeof(char));
	char *str2 = calloc(nb, sizeof(char));
	
	printf("[MA FONCTION]\n");
	while (i < nb)
	{
		printf("%d", str1[i]);
		i++;
	}
	printf("\n");
	printf("[VRAIE FONCTION]\n");
	while (j < nb)
	{
		printf("%d", str2[j]);
		j++;
	}
	printf("\n");

	free(str1);
	free(str2);
}*/