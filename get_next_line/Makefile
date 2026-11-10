# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/20 12:41:10 by fcholakk          #+#    #+#              #
#    Updated: 2026/11/10 11:50:51 by fcholakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libgnl.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs

SRCS	= get_next_line.c get_next_line_utils.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c get_next_line.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
