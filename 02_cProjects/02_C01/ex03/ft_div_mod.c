/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:20:56 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/20 17:50:54 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int nbr1 = 10;
	int nbr2 = 4;
	int div_result, mod_result;

	//call the div ft_div_mod func to calculate division & modulo
	ft_div_mod(nbr1, nbr2, &div_result, &mod_result);

	//print the results
	printf("Result of division: %d\n", div_result);
	printf("Result of modulo: %d\n", mod_result);
	return (0);
}*/
