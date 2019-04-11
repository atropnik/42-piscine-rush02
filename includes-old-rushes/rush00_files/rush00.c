/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:40:34 by bkim              #+#    #+#             */
/*   Updated: 2019/01/27 22:46:26 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	print_char(int xi, int yi, int x, int y)
{
	if (yi == y)
	{
		ft_putchar('\n');
		return ;
	}
	--x;
	--y;
	if ((xi == 0 && yi == 0) || (xi == 0 && yi == y) ||
			(xi == x && yi == 0) || (xi == x && yi == y))
		ft_putchar('o');
	else if (xi == 0 || xi == x)
		ft_putchar('-');
	else if (yi == 0 || yi == y)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int y, int x)
{
	int xi;
	int yi;

	xi = 0;
	while (xi < x)
	{
		yi = 0;
		while (yi <= y)
		{
			print_char(xi, yi, x, y);
			++yi;
		}
		++xi;
	}
}
