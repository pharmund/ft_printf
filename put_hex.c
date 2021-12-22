/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharmund <pharmund@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:35:54 by pharmund          #+#    #+#             */
/*   Updated: 2021/12/20 01:02:59 by pharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hex(unsigned int n, char up_low_case)
{
	int	hex_len;

	hex_len = 0;
	convert_int_to_hex(n, &hex_len, up_low_case - 23);
	return (hex_len);
}
