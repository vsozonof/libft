/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:26:20 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/11 23:07:18 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

/*int main()
{
	const char *str = "aabasrthaaberterehtaabaaagseaHaaa";
	char lettre = 'H';
	printf("STRING ORIGINALE = %s\n", str);
	printf("[MA FONCTION] PREMIERE OCCURENCE DE %c dans la string : %s\n", 
	lettre, ft_strchr(str, lettre));
	printf("[VRAIE FONCTION]PREMIERE OCCURENCE DE %c dans la string : %s\n", 
	lettre, ft_strchr(str, lettre));
}*/