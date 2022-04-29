/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:05:55 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 20:18:18 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}
#include <stdio.h>
int	main(void)
{
	printf("-11 = %d (0)\n",ft_recursive_factorial(-11));
	printf("0 or 1 = %d > %d (1)\n",ft_recursive_factorial(0),ft_recursive_factorial(1));
	printf("2 = %d (2)\n",ft_recursive_factorial(2));
	printf("3 = %d (6)\n",ft_recursive_factorial(3));
	printf("4 = %d (24)\n",ft_recursive_factorial(4));
}

