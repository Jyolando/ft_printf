/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_us_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:34:02 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/21 13:03:27 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_numlen(unsigned int n)
{
	int	size;

	size = 1;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

int	ft_us_itoa(unsigned int num)
{
	int		nsize;
	char	nchar[11];

	num = (unsigned int)(num);
	nsize = ft_numlen(num);
	nchar[nsize--] = '\0';
	while (nsize >= 0)
	{
		nchar[nsize--] = num + '0';
		num /= 10;
	}
	return (ft_putstr(nchar));
}
