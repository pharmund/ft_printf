/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_ptr_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharmund <pharmund@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:19:25 by pharmund          #+#    #+#             */
/*   Updated: 2021/12/19 23:10:44 by pharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_ptr(unsigned long int n)
{
	int	ptr_len;

	ptr_len = 0;
	put_str("0x");
	convert_int_to_hex(n, &ptr_len, 'a');
	return (ptr_len + 2);
}
