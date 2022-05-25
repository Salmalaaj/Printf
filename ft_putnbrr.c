/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 03:28:30 by slaajour          #+#    #+#             */
/*   Updated: 2021/12/13 16:42:01 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrr(unsigned int nb)
{	
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n <= 9)
	{
		ft_putchar(n + 48);
	}
	if (n > 9)
	{
		ft_putnbrr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}
