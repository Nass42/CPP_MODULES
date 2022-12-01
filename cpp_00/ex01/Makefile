# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 14:31:48 by namohamm          #+#    #+#              #
#    Updated: 2022/11/25 16:11:19 by namohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = PhoneBook.class.cpp Contact.class.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

all: $(NAME)

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

nass: $(NAME) clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re