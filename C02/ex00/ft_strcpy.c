/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:53:31 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 22:57:50 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int index = 0;
	while (src[index])
	{
		dest[index] = src[index];
			index++;
	}
	dest[index] = '\0';
		return(dest);
}
#include <stdio.h>
int	main(void)
{
	char x1[] = "HEllo WOrld.";
	char x2[11];
	printf("The next destionation is : %s\n",ft_strcpy(x2,x1));
}
