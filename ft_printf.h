/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 09:19:21 by jyolando          #+#    #+#             */
/*   Updated: 2021/10/25 01:07:28 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "Libft/libft.h"

int		ft_putchar(char c);
int		ft_putstr(char *str);

int		ft_itoa(int n);

int		ft_right_flags(char *input, int i);
int		ft_read_flags(char *input, int i, va_list *list);

char	*ft_num_to_base(unsigned long long num, int base);

int		ft_pointer(unsigned long long num);
int		ft_dec_to_uint(unsigned int num);
int		ft_dec_to_hex(unsigned int num, int low);

int		ft_read_input(char *input, va_list *list);
int		ft_printf(const char *input, ...);

#endif
