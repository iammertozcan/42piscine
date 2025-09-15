NAME		= libft.a
CC		= cc
CFLAGS		= -Wall -Wextra -Werror -I$(INC_DIR)
SRC_DIR		= srcs
INC_DIR		= includes
SRC_FILES	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS		= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS 		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
