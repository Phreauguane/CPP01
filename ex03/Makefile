NAME	=	violence

CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp		\
			Weapon.cpp		\
			HumanA.cpp		\
			HumanB.cpp

all		:
	$(CPP) $(SRC) -o $(NAME)

clean	:
	rm -f $(NAME)

fclean	:	clean

re		:	fclean all