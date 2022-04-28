/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:49:36 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 16:54:07 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int index = 0;
	int i = 0;

	while (str[index])
	{
		if (i == 0 && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[index] >= 'A' && str[index] <= 'Z'))
			str[index] += 'a' - 'A';
		else if ((str[index] < '0') || (str[index] > '9' && str[index] < 'A')
				|| (str[index] > 'Z' && str[index] < 'a') || (str[index] > 'z'))
			i = 0;
		else
			i++;
		index++;
	}
	return (str);
}
#include <stdio.h>
int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}
