NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs

COMMON		= ft_print_char.c ft_print_string.c ft_print_unsigned.c \
			  ft_print_signed.c ft_print_hex.c ft_print_pointer.c \
			  ft_handle_format.c
SRCS		= $(COMMON) ft_printf.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
