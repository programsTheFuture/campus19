/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:36:17 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/21 12:17:18 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	u_div;
	int	u_mod;

	u_div = *a;
	u_mod = *b;
	*a = u_div / u_mod;
	*b = u_div % u_mod;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 6;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d\nb: %d\n", a, b);
}*/
