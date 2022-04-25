/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:55:26 by anazz             #+#    #+#             */
/*   Updated: 2022/04/25 16:58:19 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
int		main(void)
{
    printf(" (printed) should be 1");
    ft_putnbr(1);
    printf("\n (printed) should be 0");
    ft_putnbr(0);
    printf("\n (printed) should be -1");
    ft_putnbr(-1);
    printf("\n (printed) should be 2147483647");
    ft_putnbr(2147483647);
    printf("\n (printed) should be -21474836478");
    ft_putnbr(-2147483648);
    printf("\n");
    return (0);
}
