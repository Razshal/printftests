NAME = printftests
PRINTF = libftprintf.a
TPATH = ./tests/
PRINTFPATH = ../printf/

SRC = printftests.c \
	  $(TPATH)simple_string_test.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

f: all
	@./$(NAME)

$(NAME): $(OBJ)
	@make -C $(PRINTFPATH)
	@cp $(PRINTFPATH)$(PRINTF) .
	@gcc $(FLAGS) -o $(NAME) $(OBJ) $(PRINTF) -fsanitize=address

%.o:%.c
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@rm -f $(PRINTF)

fclean: clean
	@rm -f $(NAME)

re: fclean all
