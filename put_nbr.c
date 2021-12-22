/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharmund <pharmund@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:38:17 by pharmund          #+#    #+#             */
/*   Updated: 2021/12/20 00:30:59 by pharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(int n)
{
	int			digit_len;
	long int	long_n;

	long_n = (long int)n;
	digit_len = 0;
	if (long_n < 0)
	{
		digit_len += put_char('-');
		long_n = -long_n;
	}
	convert_int_to_ascii(long_n, &digit_len);
	return (digit_len);
}
