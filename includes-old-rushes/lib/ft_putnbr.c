/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:08:32 by fjankows          #+#    #+#             */
/*   Updated: 2019/01/27 15:18:06 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

void	print_digit(int i, long nbx)
{
	int		j;
	long	remainder;

	j = 0;
	remainder = nbx;
	while (j < i)
	{
		remainder /= 10;
		++j;
	}
	ft_putchar(remainder % 10 + '0');
}

void	ft_putnbr(int nb)
{
	int		i;
	long	nbx;
	int		digits;
	long	remainder;

	nbx = nb;
	if (nbx < 0)
	{
		ft_putchar('-');
		nbx *= -1;
	}
	digits = 0;
	remainder = nb;
	while ((remainder = remainder / 10))
		digits++;
	i = digits;
	while (i >= 0)
		print_digit(i--, nbx);
}
