/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:22:14 by slaajour          #+#    #+#             */
/*   Updated: 2021/12/13 22:58:25 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	lots_of_if(char s, va_list args)
{
	if (s == 'c')
		ft_putchar(va_arg(args, int));
	if (s == 's')
		ft_putstr(va_arg(args, char *));
	if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(args, int));
	if (s == 'u')
		ft_putnbrr(va_arg(args, unsigned int));
	if (s == 'X' || s == 'x')
		ft_hexaxp(va_arg(args, unsigned int), s);
	if (s == 'p')
	{
		ft_putstr("0x");
		ft_hexaxp(va_arg(args, unsigned long), 'x');
	}
	if (s == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start (args, str);
	i = 0;
	g_variable = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				break ;
			lots_of_if(str[i], args);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (g_variable);
}
