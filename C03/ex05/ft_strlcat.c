/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:44:07 by anazz             #+#    #+#             */
/*   Updated: 2022/04/28 01:45:09 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int index = 0;;
	unsigned int	dest_size;

	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[index] && (dest_size < (size - 1)))
	{
		dest[dest_size] = src[index];
		dest_size++;
		index++;
	}
	dest[dest_size] = '\0';
	return (dest_size);
}

