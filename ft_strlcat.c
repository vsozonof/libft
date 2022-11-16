/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:54:30 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/16 14:33:16 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen((char *)dst);
	i = 0;
	j = dst_len;
	while (src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
		if (j == size - 1)
			break ;
	}
	dst[j] = '\0';
	return (src_len + dst_len);
}

/*int main()
{
	char str1[] = "This is a ";
	char str2[] = "potentially long string";
	int size = 2;
	int return_value;
	char buffer_1[5];
	char buffer_2[5];

	printf("[MA FONCTION]\n");
	strcpy(buffer_1, str1);
	printf("STRING APRES COPIE : %s\n", buffer_1);	
	return_value = ft_strlcat(buffer_1, str2, size);
	printf("STRING APRES STRLCAT : %s\n", buffer_1);
	printf("Valeur retournee par strlcat : %i\n", return_value);


	printf("[VRAIE FONCTION]\n");
	strcpy(buffer_2, str1);
	printf("STRING APRES COPIE : %s\n", buffer_2);	
	return_value = strlcat(buffer_2, str2, size);
	printf("STRING APRES STRLCAT : %s\n", buffer_2);
	printf("Valeur retournee par strlcat : %i\n", return_value);
}*/