# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 13:27:52 by namohamm          #+#    #+#              #
#    Updated: 2022/11/28 13:28:36 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi

SRCS = main.cpp

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