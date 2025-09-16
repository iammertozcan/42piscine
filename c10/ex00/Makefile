NAME		= ft_display_file
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS		= ft_display_file.c ft_putstr.c ft_putchar.c main.c
OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
