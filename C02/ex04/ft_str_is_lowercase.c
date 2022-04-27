/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:53:28 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 23:59:27 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int index = 0;
	int boool = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
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
		char x[] = "helloworld";
	printf("IF the string given contains only digital numbers will be return 1 else 0 :====> %d\n",ft_str_is_lowercase(x));
	char x1[] = "H3LL0 W3RD";
        printf("IF the string given contains only digital numbers will be return 1 else 0 :====> %d\n",ft_str_is_lowercase(x1));
	 char x2[] = "0123456789";
        printf("IF the string given contains only digital numbers will be return 1 else 0 :====> %d\n",ft_str_is_lowercase(x2));

}
