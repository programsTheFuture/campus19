/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:32:52 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/22 13:38:14 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int	main(void)
{
	int	a = 90; //recall and declare all variables
	int	b = 10; 
	ft_swap(&a, &b); //use func to access the pntr location
	printf("a: %d, b: %d", a, b); // "%d" is used to print the int location
	return (0);
}*/
