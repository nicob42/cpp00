NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = megaphone.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


.cpp.o:
	$(CC) $(CFLAGS) -c $<


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean