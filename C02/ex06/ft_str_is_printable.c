/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:05:49 by anazz             #+#    #+#             */
/*   Updated: 2022/04/27 19:50:53 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int index = 0;
	while (str[index])
	{
		if (str[index] >= 32 && str[index] <= 126)
			return (1);
		index++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	char x1[] = "!@#$%^&*()_+";
       	if (ft_str_is_printable(x1) == 1)
		printf("HEy is printable ...\n");
	else
		printf("Sorry is not printable ...\n");	
}
