/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:11:57 by anazz             #+#    #+#             */
/*   Updated: 2022/04/25 16:16:09 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char number = '0';

	while (number <= '9')
	{
		write(1,&number,1);
			number++;
	}
}
int	main(void)
{
	ft_print_numbers();
	write(1,"\n",1);
}
