/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaxp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:33:51 by slaajour          #+#    #+#             */
/*   Updated: 2021/12/13 20:17:42 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexaxp(unsigned long nb, char xorX)
{
	char	*a;

	if (xorX == 'x')
		a = "0123456789abcdef";
	if (xorX == 'X')
		a = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(a[nb]);
	}
	else
	{
		ft_hexaxp(nb / 16, xorX);
		ft_hexaxp(nb % 16, xorX);
	}
}
// int main()
// {
// 	int d = 123;
// 	ft_hexaxpX(d, 'X');
// }