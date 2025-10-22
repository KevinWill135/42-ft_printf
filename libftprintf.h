/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:02:49 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/22 21:05:44 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# define DEC "0123456789"
# define HEX "0123456789abcdef"
# define UHEX "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int nbr);
void	ft_putnbr_u(unsigned int nbr);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif