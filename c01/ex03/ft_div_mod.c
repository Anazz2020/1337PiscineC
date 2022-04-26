/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:14:20 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 01:40:09 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int	main(void)
{
	int a = 84;
	int b = 2;

	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);

	printf("a divide by b always be : %d",*div);
	printf("\n a modulo b always be : %d\n",*mod);
}
