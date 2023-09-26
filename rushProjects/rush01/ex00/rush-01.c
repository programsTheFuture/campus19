/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:17:35 by mdelen            #+#    #+#             */
/*   Updated: 2023/09/16 16:40:24 by mdelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

void	display(int grid[4][4])
{
	char	buffer[2];
	int	j;
	int	i;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			buffer[0] = grid[i][j] + '0';
			buffer[1] = (j < 3) ? ' ' : '\n';
			write(1, buffer, 2);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error: Invalid number of arguments.\n", 37);
		return 1;
	}
	if (strlen(argv[1]) != 31)
	{
		write(1, "Error: Input should be 31 characters.\n", 38);
		return 1;
	}
	int	grid[4][4];
	int	index;
	int	i;
	int	j;

	index = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = argv[1][index] - '0';
			index += 2;
			j++;
		}
		i++;
	}
	display(grid);
	return 0;
}
