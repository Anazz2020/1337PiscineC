/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:36:04 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 13:51:34 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	int index = 0;
	while (str[index])
	{
		write(1,&str[index],1);
		       index++;
	}
}
#include <stdio.h>
int	main(void)
{
	char x[] = "H3LLO W3RD";
	ft_putstr(x);
	printf("\n");
}
