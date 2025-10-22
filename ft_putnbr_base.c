/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:13:11 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/22 21:07:41 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

static void	ft_changebase(unsigned int nb, char *base, unsigned int baselen)
{
	if (nb >= baselen)
		ft_changebase(nb / baselen, base, baselen);
	nb = nb % baselen;
	ft_putchar(base[nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	nb = nbr;
	ft_changebase(nb, base, ft_strlen(base));
}
