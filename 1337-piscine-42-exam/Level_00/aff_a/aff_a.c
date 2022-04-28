/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:29:52 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 14:35:21 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc,char **argv)
{
	int index = 0;
	if (argc == 2)
	{
		while(argv[1][index])
		{
			if(argv[1][index] == 'a')
			{
				write(1,"a\n",2);
					return (0);
			}
			index++;
		}
		write(1,"\n",1);
		return (0);
	}
	write(1,"a\n",2);
		return (0);
}
