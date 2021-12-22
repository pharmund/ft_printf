/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharmund <pharmund@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:22:23 by pharmund          #+#    #+#             */
/*   Updated: 2021/12/20 00:52:41 by pharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_int_to_hex(unsigned long int n, int *len, char up_low_case)
{
	if (n > 15)
	{
		convert_int_to_hex(n / 16, len, up_low_case);
		convert_int_to_hex(n % 16, len, up_low_case);
	}
	else
	{
		if (n / 10)
			put_char((n % 10) + (up_low_case));
		else
			put_char(n + '0');
		*len = *len + 1;
	}
}

void	convert_int_to_ascii(long int n, int *len)
{
	if (n > 9)
	{
		convert_int_to_ascii(n / 10, len);
		convert_int_to_ascii(n % 10, len);
	}
	else
	{
		put_char(n + '0');
		*len = *len + 1;
	}
}
