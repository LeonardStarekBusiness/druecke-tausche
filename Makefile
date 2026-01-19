NAME = push_swap
LIBNAME = libft/libft.a

CFLAGGEN = -Wall -Wextra -Werror

CC = cc

QUELLE_DATEIEN = instructions/general.c instructions/functionality.c instructions/instructions1.c instructions/instructions2.c instructions/instructions3.c instructions/instructions_radix.c\
	sorting/sorting_utils.c sorting/sorting.c push_swap_utils.c push_swap.c

OBJEKT_DATEIEN = $(QUELLE_DATEIEN:.c=.o)


all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGGEN) -c $< -o $@

libft/libft.a:
	cd libft && make

$(NAME): $(OBJEKT_DATEIEN) libft/libft.a
	$(CC) $(CFLAGGEN) $(OBJEKT_DATEIEN) $(LIBNAME) -o $(NAME)

clean: 
	rm -f $(OBJEKT_DATEIEN)
	cd libft && make clean

fclean: clean 
	rm -f $(NAME)
	rm -f $(LIBNAME)

re: fclean all

.PHONY: all clean flcean re
