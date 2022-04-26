/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:08:49 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 23:21:56 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;
	while (src[index] && (index < n))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char x1[] = "HEllo WOrld";
	char x2[11];
	printf("THe next destination is : %s\n",ft_strncpy(x2,x1,5));
}
