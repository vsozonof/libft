/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:24:16 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 05:52:35 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && (i < len))
	{
		if (s1[i] == s2[j])
		{
			while ((s1[i + j] == s2[j]) && (i + j < len))
			{
				if (s2[j + 1] == '\0' && s2[j] == s1[i + j])
					return (&((char *)s1)[i]);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char *haystack = "c ch c chiens ch chi chien ch c chie chiens";
	char *needle = "chiens";
	size_t size = 50;
	printf("[LA STRING] = %s\n", haystack);
	printf("[MA FONCTION] cherche %s dans la string -> resultat : %s\n",
	 needle, ft_strnstr(haystack, needle, size));
	printf("[VRAIE FONCTION(oupas)] cherche %s dans la string -> resultat ; %s\n",
	 needle, strnstr(haystack, needle, size));	
}*/