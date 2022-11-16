/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:26:20 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/16 14:20:59 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!(s))
		return (NULL);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)(s + i));
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