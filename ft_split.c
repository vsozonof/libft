/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:46:43 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/18 14:29:23 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_counter(char *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] == c && s[i + i] != '\0')
			j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
}

int main()
{
	printf("%i\n", ft_word_counter("               je", ' '));
}