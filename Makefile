# -*- Makefile -*-
CC = clang

CFLAGS = -Wall -Werror -Wextra

SOURCES = pipex.c pipex_utils.c

NAME = pipex

LIBFT = ./libft/libft.a

# -*- colors -*-
GREEN=\033[0;32m
RED=\033[0;31m
YELLOW=\033[1;33m
NO_COLOR=\033[0m

all: $(LIBFT) $(NAME)
	echo "${GREEN}Done making all files:)${NC}"

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(SOURCES) $(LIBFT)
	$(CC) $(CFLAGS) $(SOURCES) $(LIBFT) -o $(NAME)
	  
clean: 
	make clean -C ./libft

fclean: clean
	rm -f $(LIBFT)
	rm -f $(NAME)
	echo "${GREEN}Everything clean!${NC}"

re: fclean all

.PHONY: all clean fclean re
