/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:13:11 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/24 22:24:23 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static void	ft_changebase(size_t nb, char *base, unsigned int baselen)
{
	if (nb >= baselen)
		ft_changebase(nb / baselen, base, baselen);
	nb = nb % baselen;
	ft_putchar(base[nb]);
}

int	ft_putnbr_base(ssize_t nbr, char *base)
{
	ssize_t	nb;
	int	count;

	count = 0;
	printf("\n\nnbr: %zd On line: 29", nbr);
	nb = nbr;
	printf("\nnb: %zd On line: 31\n", nb);
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		count++;
	}
	printf("\nnb: %zd On line: 38\n", nb);
	ft_changebase(nb, base, ft_strlen(base));
	count += ft_count_nb_len(nbr);
	printf("\ncount: %d On line: 40\n\n", count);
	return (count);
}
