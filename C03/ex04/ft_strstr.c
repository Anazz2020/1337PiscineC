/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:52:52 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 01:40:40 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index = 0;
	int random;
	if (to_find[0] == '\0')
		return (str);
	while (str[index])
	{
		random = 1;
		while (str[index + random] == to_find[random])
		{
			if (to_find[random + 1] == '\0')
					return (str + index);
			random++;
		}
		index++;
	}
	return ((void *)0);
}
