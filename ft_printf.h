/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharmund <pharmund@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:55:23 by pharmund          #+#    #+#             */
/*   Updated: 2021/12/20 00:31:07 by pharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *fmt, ...);
int		put_char(char c);
int		put_str(char *s);
int		put_ptr(unsigned long int n);
int		put_nbr(int n);
int		put_unsigned_nbr(unsigned int n);
int		put_hex(unsigned int n, char up_low_case);

void	convert_int_to_hex(unsigned long int n, int *len, char up_low_case);
void	convert_int_to_ascii(long int long_n, int *digit_len);

#endif