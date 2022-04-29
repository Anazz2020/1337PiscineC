/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:49:39 by anazz             #+#    #+#             */
/*   Updated: 2022/04/29 11:53:28 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
	int first = 1;
	int index = 0;
	if (argc > 1)
	{
		while (first < argc)
		{
			index = 0;
			while (argv[first][index])
			{
				write(1,&argv[first][index],1);
				index++;
			}
			write(1,"\n",1);
			first++;
		}
	}
	return (0);
}
