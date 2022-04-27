/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:29:29 by anazz             #+#    #+#             */
/*   Updated: 2022/04/27 20:37:09 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index = 0;
	size--;
	while (src[index] && (index < size))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (index);
}
#include <stdio.h>
int main(void)
{
	char x1[] = "H3LLO W3RD";
	char x2[11];
	printf("Total lenght put on the string : %d\n",ft_strlcpy(x2,x1,6));
}
