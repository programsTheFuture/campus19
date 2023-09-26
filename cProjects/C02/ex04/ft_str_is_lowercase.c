/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:58:35 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/25 17:06:42 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str [i] <= 'z'))
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
	printf("%d", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
	printf("\n%d", ft_str_is_lowercase("abcdefghijklMNOPqrstuvwxyz"));
	printf("\n%d", ft_str_is_lowercase("/*--1234569ijklmnopqrstuvwxyz"));
}*/
