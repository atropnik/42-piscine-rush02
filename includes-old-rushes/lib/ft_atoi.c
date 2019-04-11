/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 17:50:14 by fjankows          #+#    #+#             */
/*   Updated: 2019/01/15 19:19:36 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		sign;
	long	res;

	res = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if ((sign = (*str == '-')) || *str == '+')
		++str;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			res *= 10;
			res += *str - '0';
		}
		else
			break ;
		++str;
	}
	return (sign ? -1 * res : res);
}
