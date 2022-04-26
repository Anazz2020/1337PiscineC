/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:02:04 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 01:11:19 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
#include <stdio.h>
int	main(void)
{
	int Q = 42;
	int T = 1337;
	int *a = &Q;
	int *b = &T;

	ft_swap(a, b);
	printf("Q default value is 42 and new value will be : %u\n",*a);
	printf("T default value is 1337 and new value will be : %u\n", *b);
}
