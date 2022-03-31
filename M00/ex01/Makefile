NAME	=	phonebook
SRC		=	main.cpp Phonebook.cpp Contact.cpp
HEAD	=	Phonebook.hpp Contact.hpp
OBJ		=	${SRC:.cpp=.o}
CC		=	c++ -std=c++98
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

all:		${NAME}

${NAME}:	${OBJ} ${HEAD}
			${CC} ${FLAGS} -o ${NAME} ${OBJ}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:		all clean fclean re test
