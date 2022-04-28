/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:41:29 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 00:50:35 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int index = 0;
	unsigned int lenght = 0;
	while (dest[index] && index < nb)
	{
		lenght++;
		index++;
	}
	index = 0;
	while (src[index] && index < nb)
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
	char x1[] = "HEll3             ";
	char x2[] = "To N3w Destination";
	printf("The full TExt is : %s\n",ft_strncat(x1,x2,11));
}
