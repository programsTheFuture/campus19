/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:02:51 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/20 16:40:41 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	phrases;

	phrases = 0;
	while (str[phrases] != '\0')
	{
		write(1, &str[phrases], 1);
		phrases++;
	}
}
/*
int	main(void)
{
	ft_putstr("Hello, World!");
	return (0);
}*/
