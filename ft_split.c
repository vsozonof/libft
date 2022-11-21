/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:46:43 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/21 20:03:52 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_counter(const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	while (s[i] == c)
		i++;
	if (s[i] == '\0' || c == '\0')
		return (1);
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			if (s[i] != '\0')
				j++;
		}
		else
			i++;
	}
	return (j + 1);
}

size_t	ft_word_len(const char *s, char c, int pos)
{
	unsigned int	i;

	i = 0;
	while (s[pos] != c && s[pos])
	{
		i++;
		pos++;
	}
	return (i + 1);
}

char	**ft_return_free(char **tab)
{
	unsigned int	string_index;

	string_index = -1;
	while (tab[string_index])
		free (tab[++string_index]);
	free(tab);
	return (NULL);
}

char	**ft_splitter(char **tab, const char *s, unsigned int pos, char c)
{
	unsigned int	string_index;
	unsigned int	string_letter;

	string_index = 0;
	string_letter = 0;
	while (string_index < ft_word_counter(s, c))
	{
		tab[string_index] = malloc(sizeof(char) * ft_word_len(s, c, pos));
		if (!tab[string_index])
			return (ft_return_free(tab));
		while (s[pos] != c && s[pos])
		{
			tab[string_index][string_letter] = s[pos];
			string_letter++;
			pos++;
		}
		tab[string_index][string_letter] = '\0';
		string_letter = 0;
		string_index++;
		while (s[pos] == c)
			pos++;
	}
	tab[string_index] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	i;
	unsigned int	len;

	len = ft_word_counter(s, c);
	tab = ft_calloc(sizeof(char *), len);
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i] == c)
		i++;
	ft_splitter(tab, s, i, c);
	return (tab);
}

int main()
{
    int i = 0;
    int j = 0;
	printf("%li\n\n", ft_word_counter("tripouilles", 0));
    char **tab = ft_split("tripouille", 0);
    printf("%s\n\n", tab[0]);

}