/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:24:09 by anazz             #+#    #+#             */
/*   Updated: 2022/04/27 20:26:08 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int index = 0;
	while (str[index])
	{
		if(str[index] >= 65 && str[index] <= 90)
			str[index] = str[index] + 32;
				index++;
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char x[] = "ABCDEFGH";
	printf("original TExt BEfor effect : %s\n",x);
	printf("Modified TExt After effect : %s\n",ft_strlowcase(x));
}
