/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:39:18 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/24 22:10:34 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_putstr(char *str)
{
	size_t	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}
