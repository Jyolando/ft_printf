/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:11:04 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/23 17:19:53 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_low_hex(char *based)
{
	int	i;

	i = 0;
	while (based[i])
	{
		if (based[i] >= 'A' && based[i] <= 'Z')
			based[i] += 32;
		i++;
	}

	return (based);
}

int	ft_pointer(unsigned long long num)
{
	char	*pointer;
	int		size;

	size = 0;
	size += ft_putstr("0x");
	if (!num)
		return(size + ft_putchar('0'));
	pointer = ft_num_to_base(num, 16);
	size += ft_putstr(ft_low_hex(pointer));
	free(pointer);
	return (size);
}
