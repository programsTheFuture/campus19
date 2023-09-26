/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:18:53 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/15 17:43:45 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	all_digits;

	all_digits = '0';
	while (all_digits <= '9')
	{
		write(1, &all_digits, 1);
		all_digits++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
