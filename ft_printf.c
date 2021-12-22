/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharmund <pharmund@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:18:13 by pharmund          #+#    #+#             */
/*   Updated: 2021/12/19 23:10:56 by pharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	define_specifier(char fmt, va_list ap)
{
	int	len;

	len = 0;
	if (fmt == 'c')
		len += put_char(va_arg(ap, int));
	else if (fmt == 's')
		len += put_str(va_arg(ap, char *));
	else if (fmt == 'p')
		len += put_ptr(va_arg(ap, unsigned long int));
	else if (fmt == 'd' || fmt == 'i')
		len += put_nbr(va_arg(ap, int));
	else if (fmt == 'u')
		len += put_unsigned_nbr(va_arg(ap, unsigned int));
	else if (fmt == 'x' || fmt == 'X')
		len += put_hex(va_arg(ap, unsigned int), fmt);
	else if (fmt == '%')
		len += put_char('%');
	return (len);
}

int	find_len(const char *fmt, va_list ap)
{
	int	len;

	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
			len += define_specifier(*++fmt, ap);
		else
			len += put_char(*fmt);
		fmt ++;
	}
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, fmt);
	len = find_len(fmt, ap);
	va_end(ap);
	return (len);
}
