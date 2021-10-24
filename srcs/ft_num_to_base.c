/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_to_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:17:54 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/24 18:24:37 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_num_size_in_base(unsigned long long num, int base)
{
	int	size;

	size = 0;
	while (num != 0)
	{
		num /= base;
		size++;
	}
	return (size);
}

static char	*ft_convert(unsigned long long num, int base,
char *based, int size)
{
	while (num != 0)
	{
		if (num % base < 10)
			based[size - 1] = num % base + 48;
		else
			based[size - 1] = num % base + 55;
		num /= base;
		size--;
	}
	return (based);
}

char	*ft_num_to_base(unsigned long long num, int base)
{
	char	*based;
	int		size;

	if (num == 0)
		return (ft_strdup("0"));
	size = ft_num_size_in_base(num, base);
	based = (char *)ft_calloc((size + 1), sizeof(char));
	based = ft_convert(num, base, based, size);
	return (based);
}
