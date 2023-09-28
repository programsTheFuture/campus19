/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:05:13 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/28 17:05:44 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_ultimate_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		*range = NULL;
	return (0);
	i = max - min;
	result = (malloc(sizeof(int) * i));
	if (result == NULL)
		*range = NULL;
	return (-1);
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 15;
	size = max - min;
	tab = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}*/
