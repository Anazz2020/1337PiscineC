/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 02:20:12 by anazz             #+#    #+#             */
/*   Updated: 2022/04/26 02:46:25 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int indexO = size - 1;
	int indexN = 0;
	int newtab[size];

	while (indexO >= 0)
	{
		newtab[indexN] = tab[indexO];
			indexO--;
				indexN++;
	}
	int indexON = 0;
	while (indexON < size)
	{
		tab[indexON] = newtab[indexON];
			indexON++;
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
	int tab[] = {1, 2, 3, 4};
	int size = 4;

	printf("ORiginal table :");
	putarr(tab, size);
	ft_rev_int_tab(tab, size);
	printf("Modified TAble :");
	putarr(tab, size);
}
