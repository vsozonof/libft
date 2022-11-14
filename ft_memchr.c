/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:57:41 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/14 17:24:02 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (str[i] && i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		else
			i++;
	}
	if ((unsigned char)c == 0)
		return (&str[i]);
	return (NULL);
}

/*int main()
{
	char s[] = {'a', 'b', 'c' , 'd', 'e', 'f'};
	printf("%p\n", ft_memchr(s, 97, 0));
	printf("%p\n", ft_memchr(s, 97, 1));
	printf("%p\n", ft_memchr(s, 99, 3));
	printf("%p\n", ft_memchr(s, 102, 6));
	printf("%p\n", ft_memchr(s, 99 + 256, 3));
}*/

/*int main()
{
	unsigned char data[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	size_t size = 3;
	unsigned char *return_value;
	unsigned char c = 99 + 256;
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