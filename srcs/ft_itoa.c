/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 22:50:08 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/21 10:20:57 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	ft_numlen(int n, int neg)
{
	int	size;

	size = 1;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (size + neg);
}

int	ft_itoa(int n)
{
	int		nsize;
	char	nchar[12];
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	nsize = ft_numlen(n, neg);
	if (neg)
		nchar[0] = '-';
	nchar[nsize--] = '\0';
	while (nsize >= neg)
	{
		nchar[nsize--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (ft_putstr(nchar));
}
