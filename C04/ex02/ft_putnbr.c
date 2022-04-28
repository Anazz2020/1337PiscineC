/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:25:45 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 16:23:44 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
#include <stdio.h>
int	main(void)
{
	printf("output should be 1 : \n");
	ft_putnbr(1);
	printf("\noutput should be 0 : \n");
	ft_putnbr(0);
	printf("\noutput should be -1 : \n");
	ft_putnbr(-1);
	printf("\noutput should be 2147483647 : \n");
	ft_putnbr(2147483647);
	printf("\noutput should be -21474836478 : \n");
	ft_putnbr(-2147483648);
	printf("\n");
}
