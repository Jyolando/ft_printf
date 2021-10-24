# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyolando <jyolando@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 09:24:30 by jyolando          #+#    #+#              #
#    Updated: 2021/10/24 18:17:41 by jyolando         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT			=	Libft/libft.a

SRCS 			=	ft_printf.c\
					srcs/ft_read_flags.c\
					srcs/ft_putchar.c\
					srcs/ft_putstr.c\
					srcs/ft_itoa.c\
					srcs/ft_us_itoa.c\
					srcs/ft_num_to_base.c\
					srcs/ft_dec_to_hex.c\
					srcs/ft_dec_to_uint.c\
					srcs/ft_pointer.c\
					Libft/ft_calloc.c\
					Libft/ft_bzero.c\
					Libft/ft_strdup.c\
					Libft/ft_strlen.c

OBJS			=	$(SRCS:.c=.o)

HEADER			=	ft_printf.h

CC 				= gcc
CFLAGS			= -Wall -Werror -Wextra -I$(HEADER)

RM				= rm -f

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				ar rcs $(NAME) $?

clean:
				$(MAKE) clean -C ./libft
				rm -rf $(OBJS)

fclean:			clean
				$(MAKE) fclean -C ./libft
				$(RM) $(NAME)

re:				fclean $(NAME)


