/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:02:49 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/23 16:54:46 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_dec_to_uint(unsigned int num)
{
	char	*based;
	int		size;

	size = 0;
	num = (unsigned int)(4294967295 + 1 + num);
	based = ft_num_to_base((unsigned long long)num, 10);
	size = ft_putstr(based);
	free(based);
	return (size);
}
