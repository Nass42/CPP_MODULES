# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 17:45:18 by namohamm          #+#    #+#              #
#    Updated: 2022/12/09 11:30:31 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = brain

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CPPFLAGS = -g3 -std=c++98 -Wall -Wextra -Werror

all: $(Name)

$(Name): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(Name)
	@printf "\033c"

clean:
	rm -f $(OBJS)

nass: clean
	rm -f $(Name)

fclean: clean
	rm -f $(Name)

re: fclean all


.PHONY: all clean fclean re