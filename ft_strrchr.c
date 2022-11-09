/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:34:23 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 10:26:55 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}

/*
int main()
{
	const char *str = "Haabasrthaaberterehtaabaaagseahaaa";
	char lettre = 'H';
	printf("STRING ORIGINALE = %s\n", str);
	printf("[MA FONCTION] PREMIERE OCCURENCE DE %c dans la string : %s\n", 
	lettre, ft_strrchr(str, lettre));
	printf("[VRAIE FONCTION]PREMIERE OCCURENCE DE %c dans la string : %s\n", 
	lettre, ft_strrchr(str, lettre));
}*/
