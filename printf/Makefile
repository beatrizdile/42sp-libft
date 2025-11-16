# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 08:10:22 by bedos-sa          #+#    #+#              #
#    Updated: 2025/11/08 18:11:07 by bedos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= printf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCS		= ft_printf.h
SRCS		= printf_main.c printf_utils.c printf_outs.c
OBJS		= $(SRCS:.c=.o)

all: 		$(NAME)

$(NAME):	$(OBJS) $(INCS)
	ar -rcs	$(NAME) $(OBJS)

.c.o: 		
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

bonus: all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
