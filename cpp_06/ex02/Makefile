# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 22:19:03 by namohamm          #+#    #+#              #
#    Updated: 2022/12/15 22:54:01 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = real_type

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp helper.cpp

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