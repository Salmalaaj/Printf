/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:36:00 by slaajour          #+#    #+#             */
/*   Updated: 2021/12/14 21:52:47 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
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
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}
