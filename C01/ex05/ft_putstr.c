/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:58:58 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 02:06:18 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int index;
	while (str[index])
	{
		write(1,&str[index],1);
			index++;
	}
}

int	main(void)
{
	char x[] = "Hello WOrld";
	ft_putstr(x);

}
