/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:26:18 by fjankows          #+#    #+#             */
/*   Updated: 2019/01/14 19:38:01 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	while (1)
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (diff != 0)
			return (diff);
		if (!s1[i] && !s2[i])
			return (0);
		++i;
	}
}
