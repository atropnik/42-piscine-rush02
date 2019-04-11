/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yan-mche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:52:18 by yan-mche          #+#    #+#             */
/*   Updated: 2019/01/27 20:04:28 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putbuf.h"

static void	ft_printline(char end, char middle, int slot)
{
	ft_putbuf(end);
	while (slot > 2)
	{
		ft_putbuf(middle);
		slot -= 1;
	}
	if (slot == 2)
		ft_putbuf(end);
	ft_putbuf('\n');
}

void		rush00(int x, int y)
{
	int		slot;

	ft_resetbuf();
	if (x <= 0 || y <= 0)
		return ;
	slot = y;
	while (slot >= 1)
	{
		if (slot == y || slot == 1)
		{
			ft_printline('o', '-', x);
		}
		else
		{
			ft_printline('|', ' ', x);
		}
		slot -= 1;
	}
	ft_putbuf('\0');
}
