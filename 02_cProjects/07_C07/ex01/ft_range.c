/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfahad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:34:30 by mfahad            #+#    #+#             */
/*   Updated: 2023/09/26 13:37:23 by mfahad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;
	int	stcounter;
	int	range;

	range = (max - min);
	stcounter = min;
	if (min >= max)
	{
		return (0);
	}
	str = (int *) malloc(sizeof(int) * (range));
	if (*str != '\0')
		return (0);
	i = 0;
	while (i < range)
	{
		str[i] = stcounter;
		stcounter++;
		i++;
	}
	return (str);
}
