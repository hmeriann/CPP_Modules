NAME	=	Unnecessary_violence
SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEAD	=	Weapon.hpp HumanA.hpp HumanB.hpp

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