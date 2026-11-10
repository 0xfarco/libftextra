NAME		= libftextra.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs

LIBFT_DIR	= ./libft
LIBFT		= libft.a

FT_PRINTF_DIR	= ./ft_printf
FT_PRINTF	= libftprintf.a

GET_NEXT_LINE_DIR = ./get_next_line
GET_NEXT_LINE = libgnl.a

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	$(AR) $(NAME) $(OBJS)

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)
	$(AR) $(NAME) $(OBJS)

$(GET_NEXT_LINE):
	$(MAKE) -C $(GET_NEXT_LINE_DIR)
	$(AR) $(NAME) $(OBJS)

$(NAME): $(LIBFT) $(FT_PRINTF) $(GET_NEXT_LINE)
	cp $(LIBFT) .
	cp $(FT_PRINTF) .
	cp $(GET_NEXT_LINE) .
	$(AR) $(NAME) $(LIBFT) $(FT_PRINTF) $(GET_NEXT_LINE)

clean:
	rm -f $(LIBFT_DIR)/$(LIBFT) $(FT_PRINTF_DIR)/$(FT_PRINTF) $(GET_NEXT_LINE)/$(GET_NEXT_LINE)
	rm -f $(LIBFT) $(FT_PRINTF) $(GET_NEXT_LINE)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FT_PRINTF_DIR) clean
	$(MAKE) -C $(GET_NEXT_LINE_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(FT_PRINTF_DIR) fclean
	$(MAKE) -C $(GET_NEXT_LINE_DIR) fclean

re: fclean all

.PHONY: all bonus clean fclean re
