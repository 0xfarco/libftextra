/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:20:05 by fcholakk          #+#    #+#             */
/*   Updated: 2026/10/24 18:00:25 by fcholakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_signed(int n)
{
	unsigned int	num;
	int				count;

	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		num = -(unsigned int)n;
	}
	else
		num = (unsigned int)n;
	return (count + ft_print_unsigned(num));
}
