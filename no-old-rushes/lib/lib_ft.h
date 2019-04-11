/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 14:57:41 by fjankows          #+#    #+#             */
/*   Updated: 2019/01/27 15:17:12 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_H
# define LIB_FT_H

void	ft_putchar(char c);
void	ft_putstr(const char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
char	*ft_strstr(char *str, char *to_find);

#endif
