# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 15:49:09 by namohamm          #+#    #+#              #
#    Updated: 2022/12/10 15:42:13 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = bureaucrat

SRCS = main.cpp Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

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