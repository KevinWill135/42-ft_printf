/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:07:26 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/21 22:08:11 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	nb = (nb % 10) + '0';
	write(1, &nb, 1);
}

void	ft_cattype(va_list arg, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int));
	else if (c == 's')
		ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		va_arg(arg, void *);
	else if (c == 'd')
		ft_putnbr(va_arg(arg, int));
	else if (c == 'i')
		ft_putnbr(va_arg(arg, int));
	else if(c == 'u')
		va_arg(arg, unsigned int);
	else if (c == 'x')
		va_arg(arg, char *);
	else if (c == 'X')
		va_arg(arg, char *);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_cattype(arg, str[++i]);
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (0);
}

int main(void)
{
	char *s = "SOS";
	int c = 435;
	ft_printf("thats that shit %s ba next arg for test is %d LoL\n", s, c);
	printf("thats that shit %x ba\n", c);
}