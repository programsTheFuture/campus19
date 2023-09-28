/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banunes <nunes.barbarac@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:32:17 by banunes           #+#    #+#             */
/*   Updated: 2023/09/27 13:23:13 by banunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h>
int   main(int argc, char *argv[])
{
        (void) argc;
        printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
        return 0;
}*/
