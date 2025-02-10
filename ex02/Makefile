# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:51:23 by aibn-che          #+#    #+#              #
#    Updated: 2024/11/16 10:17:36 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MSRCS = ./Base.cpp ./main.cpp
MOBJS = $(MSRCS:.cpp=.o)

HEADER = ./A.hpp ./B.hpp ./Base.hpp ./C.hpp

CFLAGS =  -std=c++98 -Wall -Wextra -Werror

NAME =  Type

all : $(NAME)

%.o:%.cpp $(HEADER)
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(MOBJS)
	c++ $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(MOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
