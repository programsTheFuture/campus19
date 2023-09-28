/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banunes <nunes.barbarac@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:32:28 by banunes           #+#    #+#             */
/*   Updated: 2023/09/28 16:37:12 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sqrt(int nb)
{
	:int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	while (i * i != nb && i * i < nb && i <= 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%d", ft_sqrt(atoi(argv[1])));
	return 0;
}
