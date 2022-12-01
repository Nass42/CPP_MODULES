# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 13:44:09 by namohamm          #+#    #+#              #
#    Updated: 2022/11/29 11:06:41 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

nass: $(NAME) clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re