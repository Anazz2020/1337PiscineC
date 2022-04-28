/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:31:11 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 00:39:11 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index = 0;
	int lenght = 0;
	while (dest[index])
	{
		lenght++;
		index++;
	}
	index = 0;
	while (src[index])
	{
		dest[lenght + index] = src[index];
		index++;
	}
	dest[lenght + index] = '\0';
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char x1[] = "HEll3 ";
	char x2[] = "To N3w D3stination";
	printf("The full TExt is : %s\n",ft_strcat(x1,x2));
}
