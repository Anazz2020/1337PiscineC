/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:55:20 by anazz             #+#    #+#             */
/*   Updated: 2022/04/29 11:58:19 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int last = argc - 1;
	int index = 0;
	if(argc > 1)
	{
		while (last > 0)
		{
			index = 0;
			while (argv[last][index])
			{
				write(1,&argv[last][index],1);
				index++;
			}
			write(1,"\n",1);
			last--;
		}
	}
	return (0);
}
