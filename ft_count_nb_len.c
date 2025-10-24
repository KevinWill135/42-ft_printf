/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nb_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:15:34 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/24 19:41:33 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_count_nb_len(int nb)
{
	size_t	tmp;
	int	count;

	tmp = nb;
	count = 0;
	if (tmp < 0)
	{
		tmp *= -1;
		count++;
	}
	while (tmp > 9)
	{
		count++;
		tmp /= 10;
	}
	count++;
	return (count);
}