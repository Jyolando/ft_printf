/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:35:48 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/24 18:24:43 by jyolando         ###   ########.fr       */
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

int	ft_dec_to_hex(unsigned int num, int low)
{
	char	*based;
	int		size;

	size = 0;
	num = (unsigned int)(4294967295 + 1 + num);
	based = ft_num_to_base((unsigned long long)num, 16);
	if (low)
		based = ft_low_hex(based);
	size = ft_putstr(based);
	free(based);
	return (size);
}
