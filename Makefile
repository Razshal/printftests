NAME = printftests
PRINTF = libftprintf.a
TPATH = ./tests/
PRINTFPATH = ../printf/

SRC = printftests.c \
	  $(TPATH)simple_string_test.c
OBJ = $(SRC:.c=.o)
#FLAGS = -Wall -Wextra -Werror

all: $(NAME)

f: all
	@./$(NAME)

$(NAME): $(OBJ)
	@echo 'making your printf'
	@make -C $(PRINTFPATH)
	@echo 'make done'
	@cp $(PRINTFPATH)$(PRINTF) .
	@gcc -o $(NAME) $(OBJ) $(PRINTF) -fsanitize=address -g3

%.o:%.c
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@rm -f $(PRINTF)

fclean: clean
	@rm -f $(NAME)

re: fclean all
