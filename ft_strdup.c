/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:54:40 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 10:26:36 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = ft_strlen((char *)s);
	dup = malloc (sizeof(char) * i);
	if (!dup)
		return (NULL);
	i = -1;
	while (s[++i])
		dup[i] = s[i];
	return (dup);
}

/*int main()
{
	size_t nb = 30;
	size_t i = 0;
	size_t j = 0;
	char *str = "manger du pain avec les dents";
	
	char *str1 = ft_strdup(str);
	char *str2 = strdup(str);
	
	printf("[MA FONCTION]\n");
	while (i < nb)
	{
		printf("%c", str1[i]);
		i++;
	}
	printf("\n");
	printf("[VRAIE FONCTION]\n");
	while (j < nb)
	{
		printf("%c", str2[j]);
		j++;
	}
	printf("\n");

	free(str1);
	free(str2);
}*/