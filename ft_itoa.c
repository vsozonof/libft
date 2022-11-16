/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:29:29 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/16 15:35:15 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	nb_len(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	else if (n == INT_MIN)
		return (12);
	else if (n < 0)
	{
		c++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = nb_len(n);
	
	
}

int main(void)
{
	printf("%i\n", nb_len(0));
}