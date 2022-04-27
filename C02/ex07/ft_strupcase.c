/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:54:41 by anazz             #+#    #+#             */
/*   Updated: 2022/04/27 20:00:27 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index = 0;
	while (str[index])
	{
		if(str[index] >= 97 && str[index] <= 122)
			str[index] = str[index] - 32;
				index++;
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char x[] = "abcdefgh";
	printf("original TExt BEfor effect : %s\n",x);
	printf("Modified TExt After effect : %s\n",ft_strupcase(x));
}
