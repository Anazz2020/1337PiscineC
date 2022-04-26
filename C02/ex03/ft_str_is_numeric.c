/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:42:15 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 23:51:23 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numberic(char *str)
{
	int index = 0;
	int boool = 0;
	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= '9')
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
	printf("IF the string given contains only digital numbers will be return 1 else 0 :====> %d\n",ft_str_is_numberic(x));
	char x1[] = "0123456789$";
        printf("IF the string given contains only digital numbers will be return 1 else 0 :====> %d\n",ft_str_is_numberic(x1));
	 char x2[] = "0123456789";
        printf("IF the string given contains only digital numbers will be return 1 else 0 :====> %d\n",ft_str_is_numberic(x2));

}
