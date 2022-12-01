# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 11:12:45 by namohamm          #+#    #+#              #
#    Updated: 2022/11/29 11:14:15 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

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