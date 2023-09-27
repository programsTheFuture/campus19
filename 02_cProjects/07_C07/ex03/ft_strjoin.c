/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfahad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:32:27 by mfahad            #+#    #+#             */
/*   Updated: 2023/09/26 16:12:30 by mfahad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char **str, int size)
{
	int	res;
	int	i;
	int	j;

	i = -1;
	res = 0;
	while (++i < size)
	{
		j = -1;
		while (str[i][++j] != '\0')
			res++;
	}
	return (res);
}

int	sep_len(char *sep)
{
	int	r;
	int	i;

	i = -1;
	r = 0;
	while (sep[++i])
		r++;
	return (r);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*createandallocate(int len)
{
	char	*join;

	join = (char *)malloc(sizeof(char) * (len + 1));
	if (!join)
	{
		return (NULL);
	}
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		len;
	int		i;

	if (size)
	{
		len = ft_strlen(strs, size) + (sep_len(sep) * (size - 1));
		join = createandallocate(len);
	}
	else
	{
		join = (char *)malloc(sizeof(char));
		join[0] = '\0';
		return (join);
	}
	i = -1;
	*join = 0;
	while (++i < size)
	{
		join = ft_strcat(join, strs[i]);
		if (i + 1 != size)
			ft_strcat(join, sep);
	}
	return ((ft_strcat(join, "\0")));
}
