/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfahad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:27:29 by mfahad            #+#    #+#             */
/*   Updated: 2023/09/26 12:32:40 by mfahad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copych;
	int		i;

	i = 0;
	copych = malloc(sizeof(*src));
	if (copych == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copych[i] = src[i];
		i++;
	}
	copych[i] = '\0';
	return (copych);
}
