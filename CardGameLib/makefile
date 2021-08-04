NAME = CardGame.a
SRCS = Card.cpp	\
	   CardDeck.cpp	\
	   CardGame.cpp	\
	   Game.cpp	\
	   Player.cpp \

CXX = clang++
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:all fclean re run

