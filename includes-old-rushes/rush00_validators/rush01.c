/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yan-mche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 18:01:57 by yan-mche          #+#    #+#             */
/*   Updated: 2019/01/27 20:04:41 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putbuf.h"

static void	ft_printline(char beg, char end, char middle, int slot)
{
	ft_putbuf(beg);
	while (slot > 2)
	{
		ft_putbuf(middle);
		slot -= 1;
	}
	if (slot == 2)
		ft_putbuf(end);
	ft_putbuf('\n');
}

void		rush01(int x, int y)
{
	int	slot;

	ft_resetbuf();
	if (x <= 0 || y <= 0)
		return ;
	slot = y;
	while (slot >= 1)
	{
		if (slot == y)
			ft_printline('/', '\\', '*', x);
		else if (slot == 1)
			ft_printline('\\', '/', '*', x);
		else
			ft_printline('*', '*', ' ', x);
		slot -= 1;
	}
	ft_putbuf('\0');
}
