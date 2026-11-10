/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:01:08 by fcholakk          #+#    #+#             */
/*   Updated: 2026/10/24 18:06:28 by fcholakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && format[1])
		{
			format++;
			count += ft_handle_format(*format, &args);
		}
		else if (*format != '%')
			count += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}
