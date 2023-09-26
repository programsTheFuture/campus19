/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:03:30 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/25 19:53:17 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0'	|| s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("%d", ft_strcmp("Hello World!", "Hello1 World!"));
	printf("\n%d", ft_strcmp("Hello", "Hello Wo"));
	printf("\n%d", ft_strcmp("He", "World!"));
	printf("\n%d", ft_strcmp("Hello", "World!"));
}*/
