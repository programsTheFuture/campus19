/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:47:46 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/25 17:03:52 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		return (0);
	}
	return (dest);
}
/*
int	main()
{
	char s[] = "Hello";
	char d[] = "My name is Alex1.\n";
	char d1[] = "My name is Alex.\n";

	printf("%s", ft_strncpy(d, s, 3));
	printf("\n%s", strncpy(d1, s, 3));
	printf("\n%s", ft_strncpy(d, s, 5));
	printf("\n%s", strncpy(d1, s, 5));
	printf("\n%s", ft_strncpy(d, s, 7));
	printf("\n%s", strncpy(d1, s, 7));
}*/
