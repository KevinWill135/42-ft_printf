/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:07:26 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/22 21:10:50 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

static void	ft_cattype(va_list arg, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int));
	else if (c == 's')
		ft_putstr(va_arg(arg, char *));
	else if (c == 'd')
		ft_putnbr_base(va_arg(arg, int), DEC);
	else if (c == 'i')
		ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		ft_putnbr_u(va_arg(arg, unsigned int));
	else if (c == 'x')
		ft_putnbr_base(va_arg(arg, int), HEX);
	else if (c == 'X')
		ft_putnbr_base(va_arg(arg, int), UHEX);
	else if (c == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base((unsigned long long)va_arg(arg, void *), HEX);
	}
	else if (c == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	int		i;
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
		ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (0);
}

int main(void)
{
	//char *s = "SOS";
	int c = -12123;
	//char *ptr = "ABC\n";
	//char c = 'B';
	//ft_printf("thats that shit %u ba next arg for test is %p LoL\n", c, s);
	//printf("thats that shit %u ba\n", c);

	//unsigned int y = c;
	printf("Original:    %%\n");
	ft_printf("ft_Original: %%\n", c);
}