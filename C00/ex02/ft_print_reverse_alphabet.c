/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:06:48 by anazz             #+#    #+#             */
/*   Updated: 2022/04/25 16:09:49 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		write(1,&alphabet,1);
			alphabet--;
	}
}
int	main(void)
{
	ft_print_reverse_alphabet();
	write(1,"\n",1);
}
