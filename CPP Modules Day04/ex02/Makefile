NAME	=	abstract
SRC		=	main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
HEAD	=	AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp

OBJ		=	${SRC:.cpp=.o}
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
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
