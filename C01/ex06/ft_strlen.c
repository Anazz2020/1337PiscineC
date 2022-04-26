/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 02:08:54 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 02:16:48 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int count;
	while (str[count])
		count++;
		   return(count);
}
#include <stdio.h>
int main(void)
{
//	char x[] = "HEllo WOrld";
	printf("The number of characters is : %d \n",ft_strlen("HEllo WOrld"));
	
}
