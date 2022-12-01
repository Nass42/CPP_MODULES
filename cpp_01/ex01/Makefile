# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 11:45:18 by namohamm          #+#    #+#              #
#    Updated: 2022/11/28 13:26:31 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

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