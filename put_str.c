/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharmund <pharmund@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:22:43 by pharmund          #+#    #+#             */
/*   Updated: 2021/12/19 23:16:37 by pharmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	put_str(char *s)
{
	int	len;

	if (s == NULL)
	{
		put_str("(null)");
		return (6);
	}
	len = 0;
	while (s[len])
		len += put_char(s[len]);
	return (len);
}
