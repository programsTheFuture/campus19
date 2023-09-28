/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:03:30 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/28 14:34:23 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_strcmp("Hello World!", "Hello1 World!"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
	printf("\n%d", ft_strcmp("Hello", ""));
	printf("\n%d", ft_strcmp("Hello", "World!"));
}*/
