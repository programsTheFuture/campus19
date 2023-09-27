/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:34:31 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/15 15:41:23 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	characters;

	characters = 'a';
	while (characters <= 'z')
	{
		write(1, &characters, 1);
		characters++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
i}
*/
