/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:07:26 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/09 18:51:32 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	ft_catptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (count += ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putptr_base(ptr);
	return (count);
}

static int	ft_cattype(va_list arg, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (c == 'd')
		count += ft_putnbr(va_arg(arg, int));
	else if (c == 'i')
		count += ft_putnbr_base(va_arg(arg, int), DEC);
	else if (c == 'u')
		count += ft_putnbr_u(va_arg(arg, unsigned int));
	else if (c == 'x')
		count += ft_putnbr_base(va_arg(arg, unsigned int), HEX);
	else if (c == 'X')
		count += ft_putnbr_base(va_arg(arg, unsigned int), UHEX);
	else if (c == 'p')
		count += ft_catptr((unsigned long long)va_arg(arg, void *));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
			count += ft_cattype(arg, str[++i]);
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
// I need to put a -1 to be returned in my printf if something goes be wrong!!!