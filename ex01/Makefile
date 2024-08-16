NAME	=	horde

CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp		\
			Zombie.cpp		\
			zombieHorde.cpp

all		:
	$(CPP) $(SRC) -o $(NAME)

clean	:
	rm -f $(NAME)

fclean	:	clean

re		:	fclean all