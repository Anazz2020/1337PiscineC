/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:25:10 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 23:39:42 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int index = 0;
	int boool = 0;

	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z' ))
			boool = 1;
		else
			return (0);
		index++;
	}
	return (boool);
}
#include <stdio.h>
int	main(void)
{
	char x[] = "HEllo WOrld";
	printf("If the string given contains only alphabetical Will be return 1 else 0 :==> %d\n",ft_str_is_alpha(x));
	char x1[] = "HElloWOrld";
        printf("If the string given contains only alphabetical Will be return 1 else 0 :==> %d\n",ft_str_is_alpha(x1));
	char x2[] = "123456789@#$%^&*()";
        printf("If the string given contains only alphabetical Will be return 1 else 0 :==> %d\n",ft_str_is_alpha(x2));


}
