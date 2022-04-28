/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:29:58 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 13:33:08 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int index = 0;
	while (str[index])
		index++;
		   return (index);
}
#include <stdio.h>
int	main(void)
{
	char x[] = "H3LLO W3RLD";
	printf("Number of characters : %d\n",ft_strlen(x));
}
