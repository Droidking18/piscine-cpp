NAME = megaphone
SOURCES = megaphone.cpp

$(NAME):
	@clang++ -Wall -Werror -Wextra $(SOURCES) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all
