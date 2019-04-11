/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yan-mche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 18:23:21 by yan-mche          #+#    #+#             */
/*   Updated: 2019/01/27 20:05:12 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putbuf.h"

static void	ft_printline(char beg, char end, char middle, int slot)
{
	ft_putbuf(beg);
	while (slot > 2)
	{
		ft_putbuf(middle);
		slot = slot - 1;
	}
	if (slot == 2)
	{
		ft_putbuf(end);
	}
	ft_putbuf('\n');
}

void		rush04(int x, int y)
{
	int		slot;

	ft_resetbuf();
	if (x <= 0 || y <= 0)
		return ;
	slot = y;
	while (slot >= 1)
	{
		if (slot == y)
		{
			ft_printline('A', 'C', 'B', x);
		}
		else if (slot == 1)
		{
			ft_printline('C', 'A', 'B', x);
		}
		else
		{
			ft_printline('B', 'B', ' ', x);
		}
		slot -= 1;
	}
	ft_putbuf('\0');
}
