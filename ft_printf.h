/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:02:49 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/28 19:59:00 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DEC "0123456789"
# define HEX "0123456789abcdef"
# define UHEX "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putnbr_base(ssize_t nbr, char *base);
int	ft_putnbr(int nbr);
int	ft_putnbr_u(unsigned int nbr);
size_t	ft_putstr(char *str);
size_t	ft_strlen(char *str);
int	ft_count_nb_len(size_t nb);
int	ft_putptr_base(unsigned long long ptr);

#endif