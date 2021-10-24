/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:28:20 by                   #+#    #+#             */
/*   Updated: 2021/10/21 10:10:31 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "./Libft/libft.h"
#include "ft_printf.h"

int ft_read_input(char *input, va_list *list)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (1)
	{
		if (!input[i])
			break ;
		if (input[i] == '%' && input[i + 1])
		{
			if (!ft_right_flags(input, ++i))
				break;
			count += ft_read_flags(input, i, &(*list));
		}
		else if (input[i] == '%' && !input[i + 1])
			break;
		else
			count += ft_putchar(input[i]);
		i++;
	}
	return (count);
}

int ft_printf(const char *input, ...)
{
	va_list list;
	int count;

	count = 0;
	va_start(list, input);
	count += ft_read_input((char *)input, &list);
	va_end(list);
	return (count);
}
