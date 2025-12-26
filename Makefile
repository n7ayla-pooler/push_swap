CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_split.c parser.c push_swap.c libft_b/ft_atoi.c libft_b/ft_lstsize.c libft_b/ft_lstadd_back.c libft_b/ft_lstnew.c libft_b/ft_lstlast.c libft_b/ft_lstadd_front.c libft_b/ft_lstclear.c libft_b/ft_lstdelone.c libft_b/ft_lstiter.c libft_b/ft_lstmap.c
RM = rm -f
OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: fclean all