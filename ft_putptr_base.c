/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:32:46 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/09 17:00:04 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static void	ft_putbase(unsigned long long ptr, char *base, int *count)
{
	unsigned long long	baselen;

	baselen = ft_strlen(base);
	if (ptr >= baselen)
		ft_putbase(ptr / baselen, base, count);
	ptr = ptr % baselen;
	ft_putchar(base[ptr]);
	(*count)++;
}

int	ft_putptr_base(unsigned long long ptr)
{
	int	count;

	count = 0;
	ft_putbase(ptr, HEX, &count);
	return (count);
}
