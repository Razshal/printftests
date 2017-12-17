NAME = printftests
PRINTF = libftprintf.a
TPATH = ./tests/
PRINTFPATH = ../printf/
SRC = printftests.c \
	  $(TPATH)simple_string_test.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	

$(NAME): $(OBJ)
	@make -C $(PRINTFPATH)
	@cp $(PRINTFPATH)$(PRINTF) .
	@gcc $(FLAGS) -o $(NAME) $(OBJ) $(PRINTF)

%.o:%.c
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all