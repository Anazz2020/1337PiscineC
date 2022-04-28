/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:14:55 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 00:27:30 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index = 0;
	while (s1[index] && s2[index] && n > index)
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		index++;
	}	
	return (0);
}
#include <stdio.h>
int main(void)
{
	char x1[] = "ABCD";
	char x2[] = "ABBC";
	if (ft_strncmp(x1,x2,3) == 1)
		printf("The first string is small than the second\n");
	char x3[] = "ABCD";
	char x4[] = "ABDE";
	if (ft_strncmp(x3,x4,3) == -1)
		printf("The first string is bigger than the second\n");
	char x5[] = "ABCD";
	char x6[] = "ABCD";
	if (ft_strncmp(x5,x6,3) == 0)
		printf("strings are equal\n");
}
