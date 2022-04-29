/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:46:12 by anazz             #+#    #+#             */
/*   Updated: 2022/04/29 11:48:43 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int index = 0;
	if (argc > 0)
	{
		while (argv[0][index])
		{
			write(1,&argv[0][index],1);
			index++;
		}
		write(1,"\n",1);
	}
	return (0);
}
