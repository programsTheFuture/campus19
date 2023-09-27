/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:50:13 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/20 14:39:10 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)//main expecting void type
{
	int	*nbr;//dereferencing to pointer nbr
	int	digit;//new var for pointer
	digit = 1;//asign any value to new var
	nbr = &digit;//set the pointer var to new var's location
	ft_ft(nbr);//print nbr, var name of the pointer without *
	printf("%d", digit);//use printf func with %d + value of the pointer
	return (0);//return type is always 0 when expecting no return type
}*/
