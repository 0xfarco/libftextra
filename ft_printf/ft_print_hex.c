/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:20:13 by fcholakk          #+#    #+#             */
/*   Updated: 2026/10/24 18:00:22 by fcholakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, int uppercase)
{
	const char	*hex;
	int			count;

	if (uppercase)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, uppercase);
	count += ft_print_char(hex[n % 16]);
	return (count);
}
