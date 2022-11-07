/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:14:21 by vsozonof          #+#    #+#             */
/*   Updated: 2022/11/06 18:10:14 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	var;
	int	sign_count;
	int	i;
	int	sign;

	i = 0;
	sign_count = 0;
	sign = 1;
	var = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (sign_count > 0)
			return (0);
		else if (str[i] == '-')
			sign = -1;
		sign_count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		var = (var * 10) + (str[i] - '0');
		i++;
	}
	return (var * sign);
}

int main()
{
	printf("%i", ft_atoi("      \n \f-5786786905278"));
}