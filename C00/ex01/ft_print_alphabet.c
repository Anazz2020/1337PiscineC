/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:58:32 by anazz             #+#    #+#             */
/*   Updated: 2022/04/25 16:05:40 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		write(1,&alphabet,1);
			alphabet++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	write(1,"\n",1);
}
