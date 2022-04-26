/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:43:53 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 01:56:32 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	if (*b != 0)
	{
		int div = *a / *b;
			int mod = *a % *b;
				*a = div;
					*b = mod;
	}
}
#include <stdio.h>
int	main(void)
{
	int Q = 84;
	int T = 2;
	int *a = &Q;
	int *b = &T;

	printf("First value of A is : %d\n",Q);
	printf("First value of B is : %d\n",T);

	ft_ultimate_div_mod(a,b);

	printf("a divide by b always be : %d\n",*a);
	printf("a modulo b always be : %d\n",*b);

}
