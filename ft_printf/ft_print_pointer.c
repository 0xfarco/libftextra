/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:20:09 by fcholakk          #+#    #+#             */
/*   Updated: 2026/10/24 18:00:24 by fcholakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int	count;

	if (!ptr)
		return (ft_print_string("(nil)"));
	count = ft_print_string("0x");
	count += ft_print_hex((unsigned long)ptr, 0);
	return (count);
}
