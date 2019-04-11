/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbuf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 20:03:44 by fjankows          #+#    #+#             */
/*   Updated: 2019/01/27 20:04:02 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern char		*g_out_buf;
size_t			g_buf_pos;

void	ft_putbuf(char c)
{
	g_out_buf[g_buf_pos++] = c;
}

void	ft_resetbuf(void)
{
	g_buf_pos = 0;
}
