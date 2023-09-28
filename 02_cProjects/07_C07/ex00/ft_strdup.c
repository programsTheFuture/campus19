/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:21:57 by yabenmen          #+#    #+#             */
/*   Updated: 2023/09/26 18:58:50 by yabenmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str2;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(src);
	str2 = malloc((sizeof(char) * length) + 1);
	while (src[i])
	{
		str2[i] = src[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
/*
int	main(void)
{
	char *src = "abc";
	char *dest = ft_strdup(src);
	printf("%s\n", dest);
	free(dest);
	return (0);
}*/
