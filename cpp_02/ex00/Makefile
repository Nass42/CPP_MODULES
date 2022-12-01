# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 19:38:31 by namohamm          #+#    #+#              #
#    Updated: 2022/11/29 19:51:22 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = fixed_1

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = clang++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(Name)

$(Name): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(Name)

clean:
	rm -f $(OBJS)

nass: clean
	rm -f $(Name)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re