/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 13:40:52 by atropnik          #+#    #+#             */
/*   Updated: 2019/01/27 20:02:26 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_rush.h"
#include "lib/lib_ft.h"

#define BUF 8 * 1024 * 1024

char		*g_out_buf;

void	get_dimensions(char *c, int *cols, int *lines)
{
	int cur_line_cols;

	cur_line_cols = 0;
	*lines = 0;
	*cols = 0;
	while (*c)
	{
		if (*c == '\n')
		{
			if (cur_line_cols > *cols)
				*cols = cur_line_cols;
			cur_line_cols = 0;
			*lines = *lines + 1;
		}
		else
			++cur_line_cols;
		++c;
	}
}

void	print_num(int num)
{
	while (num)
	{
		ft_putchar((num % 10) + '0');
		num /= 10;
	}
}

void	print_result(const char *type, int cols, int lines)
{
	static char	s_prev_res = 0;

	if (s_prev_res)
		ft_putstr(" || ");
	ft_putchar('[');
	ft_putstr(type);
	ft_putstr("] [");
	print_num(cols);
	ft_putstr("] [");
	print_num(lines);
	ft_putchar(']');
	s_prev_res = 1;
}

void	check_options(char *in_buf, int cols, int lines)
{
	rush00(cols, lines);
	if (!(ft_strcmp(in_buf, g_out_buf)))
		print_result("rush-00", cols, lines);
	rush01(cols, lines);
	if (!(ft_strcmp(in_buf, g_out_buf)))
		print_result("rush-01", cols, lines);
	rush02(cols, lines);
	if (!(ft_strcmp(in_buf, g_out_buf)))
		print_result("rush-02", cols, lines);
	rush03(cols, lines);
	if (!(ft_strcmp(in_buf, g_out_buf)))
		print_result("rush-03", cols, lines);
	rush04(cols, lines);
	if (!(ft_strcmp(in_buf, g_out_buf)))
		print_result("rush-04", cols, lines);
}

int		main(void)
{
	char	*in_buf;
	size_t	bytes;
	size_t	bytes_read;
	int		lines;
	int		cols;

	bytes = 0;
	bytes_read = 0;
	in_buf = malloc(BUF);
	g_out_buf = malloc(BUF);
	while ((bytes_read = read(0, in_buf + bytes, 1024)))
		bytes += bytes_read;
	in_buf[bytes] = '\0';
	get_dimensions(in_buf, &cols, &lines);
	check_options(in_buf, cols, lines);
	ft_putchar('\n');
	return (0);
}
