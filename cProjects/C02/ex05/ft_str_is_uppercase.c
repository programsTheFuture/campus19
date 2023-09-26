/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:11:53 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/25 14:40:53 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_uppercase("ABCDEhsdfakjdfgMNRSTUVWXYZ"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHI//**124585OPVWXYZ"));
}*/
