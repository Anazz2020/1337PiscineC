/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:49:03 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 00:11:48 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int index = 0;
	while (s1[index] && s2[index])
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
	char x1[] = "Hello World";
        char x2[] = "Hell4";
	if (ft_strcmp(x1,x2) == 1)
	{
	printf("the first string is small than the second\n");
	}
	char x4[] = "Hell5";
	char x3[] = "Hell6";
	if (ft_strcmp(x4,x3) == -1)
	printf("the first string is bigger than the second\n");
	char x5[] = "H3LLO";
	char x6[] = "H3LLO";
	if (ft_strcmp(x5,x6) == 0)
	printf("strings are equal\n");

}
