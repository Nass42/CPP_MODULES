# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 21:06:32 by namohamm          #+#    #+#              #
#    Updated: 2022/11/29 21:06:38 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = fixed_2

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