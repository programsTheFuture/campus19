/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:11:53 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/26 19:58:11 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_uppercase("ABCDEhsdfakjdfgMNRSTUVWXYZ"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHI//**124585OPVWXYZ"));
}
*/
