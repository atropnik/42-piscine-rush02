/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:43:35 by fjankows          #+#    #+#             */
/*   Updated: 2019/01/14 19:23:19 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (1)
		{
			if (to_find[j] == '\0')
				return (&str[i]);
			if (str[i + j] != to_find[j])
				break ;
			++j;
		}
		++i;
	}
	return (0);
}
