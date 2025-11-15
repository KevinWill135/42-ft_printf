/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:39:18 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/15 20:18:10 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	tmp;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
	{
		tmp = ft_putchar(str[i++]);
		if (tmp < 0)
			return (-1);
	}
	return (i);
}
