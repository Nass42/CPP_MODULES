# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 01:20:37 by namohamm          #+#    #+#              #
#    Updated: 2022/12/18 15:12:29 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = serialize

SRCS = main.cpp Serialize.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

# CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
CPPFLAGS = -std=c++11 -Wall -Wextra -Werror

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