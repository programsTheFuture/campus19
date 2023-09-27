/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfahad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:39:37 by mfahad            #+#    #+#             */
/*   Updated: 2023/09/26 14:30:46 by mfahad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	rangenumber;
	int	size;
	int	*str;

	rangenumber = (max - min);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	str = (int *) malloc(sizeof(**range) * (rangenumber));
	if (*str != '\0')
		return (0);
	size = 0;
	while (min < max)
	{
		str[size] = min;
		min++;
		size++;
	}
	*range = str;
	return (size);
}
