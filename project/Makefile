SRC = src/ft_check_flags.c src/ft_for_decimal.c src/ft_for_lists.c src/ft_for_octals.c\
		src/ft_for_string.c src/ft_lst_modify.c src/ft_printf.c src/libft.c\
		print/ft_b.c print/ft_c_big.c print/ft_c.c print/ft_d.c\
		print/ft_o.c print/ft_p.c print/ft_percent.c print/ft_print_flags.c print/ft_s_big.c\
		print/ft_s.c print/ft_u.c print/ft_x.c print/ft_xb.c
NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
HEAD = ft_printf.h

all: $(NAME)
$(NAME): $(OBJ)

	ar -cru $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo libftprintf.a has been made
%.o: %.c
	gcc $(FLAGS) -c -o $@ $< 
clean:
	rm -f $(OBJ)
	@echo *.o have been cleaned.
fclean: clean
	rm -f $(NAME)
	@echo *.a and *.o have been cleaned.
re: fclean all