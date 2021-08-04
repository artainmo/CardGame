NAME = JackTheSpade.a
SRCS = JackTheSpade.cpp

CXX = clang++
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)


all: CG $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) ../CardGameLib/CardGame.a -o $(NAME)
	./JackTheSpade.a


clean: CG_clean
	rm -rf $(OBJ)

fclean: CG_fclean clean
	rm JackTheSpade.a


CG:
	make -C ../CardGameLib all

CG_clean:
	make -C ../CardGameLib clean

CG_fclean: 
	make -C ../CardGameLib fclean
