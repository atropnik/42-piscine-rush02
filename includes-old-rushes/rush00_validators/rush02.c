/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yan-mche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:11:31 by yan-mche          #+#    #+#             */
/*   Updated: 2019/01/27 20:03:24 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putbuf.h"

void	print_char(int xi, int yi, int x, int y)
{
	if (yi == y)
	{
		ft_putbuf('\n');
		return ;
	}
	--x;
	--y;
	if ((xi == 0 && yi == 0) || (xi == 0 && yi == y))
		ft_putbuf('A');
	else if ((xi == x && yi == 0) || (xi == x && yi == y))
		ft_putbuf('C');
	else if ((xi == 0 || xi == x || yi == 0 || yi == y))
		ft_putbuf('B');
	else
		ft_putbuf(' ');
}

void	rush02(int y, int x)
{
	int xi;
	int yi;

	ft_resetbuf();
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
