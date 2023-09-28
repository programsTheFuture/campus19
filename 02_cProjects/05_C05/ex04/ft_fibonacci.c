/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banunes <nunes.barbarac@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:32:24 by banunes           #+#    #+#             */
/*   Updated: 2023/09/27 13:25:24 by banunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	prev;
	int	current;
	int	i;
	int	next;

	prev = 0;
	current = 1;
	i = 2;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (i <= index)
	{
		next = prev + current;
		prev = current;
		current = next;
		i++;
	}
	return (current);
}
/*#include <stdio.h>
#include <stdlib.h>
int   main(int argc, char *argv[])
{
        (void) argc;
        printf("%d", ft_fibonacci(atoi(argv[1])));
        return 0;
}*/
