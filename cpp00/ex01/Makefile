CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = PhoneBook

SRC = Contact.cpp \
	PhoneBook.cpp \
	main.cpp \
	PhoneBook_utils.cpp

OBJ = $(SRC:.cpp=.o)

all = $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
