/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:20:45 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/24 18:17:55 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_right_flags(char *input, int i)
{
	if (input[i] == 'c' || input[i] == 's' || input[i] == 'p'\
		|| input[i] == 'd' || input[i] == 'i' || input[i] == 'u'\
		|| input[i] == 'x' || input[i] == 'X' || input[i] == '%')
		return (1);
	return (0);
}

int ft_read_flags(char *input, int i, va_list *list)
{
	if (input[i] == 'c')
		return (ft_putchar(va_arg(*list, int)));
	if (input[i] == 's')
		return (ft_putstr(va_arg(*list, char *)));
	if (input[i] == 'p')
		return (ft_pointer((unsigned long long)va_arg(*list, unsigned long long)));
	if (input[i] == 'd' || input[i] == 'i')
		return (ft_itoa(va_arg(*list, int)));
	if (input[i] == 'u')
		return (ft_dec_to_uint((unsigned int)va_arg(*list, unsigned int)));
	if (input[i] == 'x')
		return (ft_dec_to_hex((unsigned int)va_arg(*list, unsigned int), 1));
	if (input[i] == 'X')
		return (ft_dec_to_hex((unsigned int)va_arg(*list, unsigned int), 0));
	if (input[i] == '%')
		return (ft_putchar('%'));
	return (0);
}
