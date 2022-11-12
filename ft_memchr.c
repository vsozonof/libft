/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:57:41 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/12 11:47:51 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	letter;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	letter = (char)c;
	while (str[i] && i < n)
	{
		if (str[i] == letter)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}

/*int main()
{
	char data[] = "pas d'anavnas sur la pizza svp";
	size_t size = 30;
	char *return_value;
	char c = 'v';
	printf("[STRING] = %s\n", data);
	printf("[MA FONCTION] cherche la premiere occurence de %c dans la string\n",
	 c);
	return_value = ft_memchr(data, c, size);
	printf("-> resultat : %s\n", return_value);
	printf("[VRAIE FONCTION] cherche la premiere occurence de %c dans la string\n",
	 c);
	return_value = memchr(data, c, size);
	printf("-> resultat : %s\n", return_value);
}*/