/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_unsigned_nbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharmund <pharmund@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:29:43 by pharmund          #+#    #+#             */
/*   Updated: 2021/12/20 00:31:05 by pharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_unsigned_nbr(unsigned int n)
{
	int	digit_len;

	digit_len = 0;
	convert_int_to_ascii(n, &digit_len);
	return (digit_len);
}
