# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/31 11:45:32 by bedos-sa          #+#    #+#              #
#    Updated: 2025/11/08 18:47:19 by bedos-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a 
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
LIB			= ar -rcs
INCS		= libft.h get_next_line/get_next_line_bonus.h get_next_line/get_next_line.h
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS_BONUS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

GET_NEXT_LINE_SRC 	= get_next_line/get_next_line_bonus.c get_next_line/get_next_line.c \
			  		  get_next_line/get_next_line_utils_bonus.c get_next_line/get_next_line_utils.c
GET_NEXT_LINE_OBJS 	= $(addprefix ,$(notdir $(GET_NEXT_LINE_SRC:.c=.o)))

PRINTF_NAME			= printf.a

all:		$(NAME) clean

$(NAME):	$(OBJS) $(OBJS_BONUS) $(INCS)
				$(MAKE) -C printf
				cp printf/$(PRINTF_NAME) .
				$(LIB)	$(NAME) $(OBJS) $(OBJS_BONUS) $(GET_NEXT_LINE_OBJS)
				ar -x $(PRINTF_NAME)
				ar -r $(NAME) *.o
				ranlib $(NAME)
				rm -f $(PRINTF_NAME)

%.o: get_next_line/%.c
	$(CC) $(CFLAGS) -c $< -o $(notdir $@)

.c.o: 		
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS) $(OBJS_BONUS) $(GET_NEXT_LINE_OBJS)
	$(MAKE) -C printf clean

fclean: clean
	rm -f $(NAME) $(PRINTF_NAME)
	$(MAKE) -C printf fclean

re: fclean all

.PHONY: all clean fclean re
