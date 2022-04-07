NAME	=	Moar_brainz
SRC		=	main.cpp Zombie.cpp zombieHorde.cpp
HEAD	=	Zombie.hpp

OBJ		=	${SRC:.cpp=.o}
CC		=	c++ -std=c++98
FLAGS	=	-Wall -Wextra -Werror
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
