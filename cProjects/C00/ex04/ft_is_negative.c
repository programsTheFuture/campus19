/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:46:06 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/15 17:55:58 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	is_negative;
	char	is_positive;

	is_negative = 'N';
	is_positive = 'P';
	if (n < 0)
	{
		write(1, &is_negative, 1);
	}
	else
	{
		write(1, &is_positive, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/
