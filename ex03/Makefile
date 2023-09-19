NAME = a.out
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS =	main.cpp	\
		Character.cpp	\
		Ice.cpp	\
		Cure.cpp	\
		MateriaSource.cpp
OBJS = $(SRCS:%.cpp=%.o)
RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

re:	fclean	all

fclean:	clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

sanitize:	CXXFLAGS += -g -fsanitize=address -g
sanitize:	re

leaks:	CXXFLAGS += -DLEAKS
leaks:	re

.PHONY: all re fclean clean sanitize leaks