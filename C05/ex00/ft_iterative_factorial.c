/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:21:25 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 20:02:52 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		result *= nb--;
		return (result);
}
#include <stdio.h>
int	main(void)
{
	printf("-11 = %d (0)\n",ft_iterative_factorial(-11));
	printf("0 or 1 = %d > %d (1)\n",ft_iterative_factorial(0),ft_iterative_factorial(1));
	printf("2 = %d (2)\n",ft_iterative_factorial(2));
	printf("3 = %d (6)\n",ft_iterative_factorial(3));
	printf("4 = %d (24)\n",ft_iterative_factorial(4));
}
