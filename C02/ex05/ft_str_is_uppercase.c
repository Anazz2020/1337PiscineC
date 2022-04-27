/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:53:19 by anazz             #+#    #+#             */
/*   Updated: 2022/04/27 16:02:51 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int index = 0;
	int boool = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
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
		char x[] = "HELLOWOLRD";
	printf("IF the string given contains only uppercase alphabetical characters will be return 1 else 0 :====> %d\n",ft_str_is_uppercase(x));
	char x1[] = "H3LL0 W3RD";
        printf("IF the string given contains only uppercase alphabetical characters will be return 1 else 0 :====> %d\n",ft_str_is_uppercase(x1));
	 char x2[] = "0123456789";
        printf("IF the string given contains only uppercase alphabetical characters will be return 1 else 0 :====> %d\n",ft_str_is_uppercase(x2));

}
