/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenmen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:02:37 by yabenmen          #+#    #+#             */
<<<<<<< HEAD:yassine.c
/*   Updated: 2023/09/09 16:29:33 by yabenmen         ###   ########.fr       */
=======
/*   Updated: 2023/09/09 16:27:22 by banunes          ###   ########.fr       */
>>>>>>> 6c5f451d582d3be80dc778dccaf81edcffc7b2bb:rush00.c
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_putchar.c"

void	rush(int x, int y)
{
	char	character_o;
	char	character_minus;
	char	character_or_operator;
	char	character_space;
	char	break_line;
	int	width;
	int	length;

	width = 1;
	length = 1;
	character_o = 'o';
	character_minus = '-';
	character_or_operator = '|';
	character_space = ' ';
	break_line = '\n';
	while (width >= x)
	{while (length >= y){
		if (width == 1 || length == y)
		{
			ft_putchar (character_o);
		}
		else if (width == x)
		{
			ft_putchar (character_o);
			ft_putchar (break_line);
		}

		else if (length	> 1 && length > y)
		{
			ft_putchar (character_or_operator);
		}

		else
		{
			ft_putchar (character_minus);
		}
		width--;
		length--;


	}
	while (length <= y)
	{
		if (length > 1 && length < y)
		{
			write (1, &character_or_operator, 1);
			write (1, &break_line, 1);
		}
		length++;
	}
}
}
int	main(void)
{
	rush(5, 3);
	return (0);
}
