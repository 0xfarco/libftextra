/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:20:02 by fcholakk          #+#    #+#             */
/*   Updated: 2026/10/24 18:05:50 by fcholakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *s)
{
	int	count;

	if (!s)
		s = "(null)";
	count = 0;
	while (s[count])
	{
		ft_print_char(s[count]);
		count++;
	}
	return (count);
}
