/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:13:11 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/27 21:24:16 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static void	ft_changebase(ssize_t nb, char *base, unsigned int baselen, int *count)
{
	if (nb >= baselen)
		ft_changebase(nb / baselen, base, baselen, count);
	nb = nb % baselen;
	ft_putchar(base[nb]);
	(*count)++;
}

int	ft_putnbr_base(ssize_t nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
		count++;
	}
	ft_changebase(nbr, base, ft_strlen(base), &count);
	return (count);
}
