/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:42:40 by slaajour          #+#    #+#             */
/*   Updated: 2021/12/13 20:20:51 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	g_variable;
int		ft_printf(const char *str, ...);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbrr(unsigned int nb);
void	ft_hexaxp(unsigned long nb, char xorX);

#endif