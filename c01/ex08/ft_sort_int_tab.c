/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 02:51:10 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 03:02:58 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int index = 0;
	int temporary;

	while (index < size - 1)
	{
		if (tab[index] > tab[index + 1])
		{
			temporary = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = temporary;
			index--;
		}
		index++;
	}
}
#include <stdio.h>
void	putarr(int arr[], int size)
{
	for (int index = 0; index < (size - 1); index++)
		printf("%d | ", arr[index]);
			printf("%d\n", arr[size - 1]);
}
int	main(void)
{
	int tab[] = {99, 11, 33, 66};
	int size = 4;

	printf("ORiginal table :");
	putarr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Modified TAble :");
	putarr(tab, size);
}
