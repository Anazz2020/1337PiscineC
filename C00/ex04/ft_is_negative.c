/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:16:57 by anazz             #+#    #+#             */
/*   Updated: 2022/04/25 16:21:12 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1,"N",1);
	else 
		write(1,"P",1);
}
int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(1);
       ft_is_negative(0);
}
