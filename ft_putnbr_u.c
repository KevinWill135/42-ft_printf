/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:34:22 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/27 21:09:37 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_putnbr_u(unsigned int nbr)
{
	unsigned long	nb;
	int	count;

	nb = nbr;
	count = ft_count_nb_len(nbr);
	if (nb > 9)
		ft_putnbr_u(nb / 10);
	ft_putchar((nb % 10) + '0');
	return (count);
}
