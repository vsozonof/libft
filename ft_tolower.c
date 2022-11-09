/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:36:24 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/09 10:26:59 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int main()
{
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('f'));
	printf("%c\n", ft_tolower('F'));
	printf("%c\n", ft_tolower('z'));
	printf("%c\n", ft_tolower('Z'));
}*/
