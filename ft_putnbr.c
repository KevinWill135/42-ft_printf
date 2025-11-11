/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:41:08 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/11 18:52:19 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	nb;
	int		count;

	nb = nbr;
	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		count++;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
	count += ft_count_nb_len(nb);
	return (count);
}
