/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:39:18 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/10 23:01:39 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

size_t	ft_putstr(char *str)
{
	size_t	i;
	size_t	tmp;

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
