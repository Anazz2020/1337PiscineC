/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:26:14 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 16:37:45 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int index = 0;
	int result = 0;
	int sign = 1;

	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
			index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
				index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (str[index] - '0') + (result * 10);
		index++;
	}
	return (result * sign);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));
}

