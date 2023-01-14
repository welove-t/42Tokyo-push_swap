# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: terabu <terabu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 11:27:29 by terabu            #+#    #+#              #
#    Updated: 2023/01/14 10:19:12 by terabu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall -Wextra -Werror
NAME := push_swap.a
SRCS := push_swap.c \
		order_a.c \
		order_b.c \
		order_d.c \
		set_list.c \
		sort_short.c \
		sort_normal.c \
		compression.c \
		replace_node.c
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./ft_printf
	cp ft_printf/libftprintf.a $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	$(MAKE) -C ./ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ./ft_printf fclean

re: fclean all

.PHONY:	all clean fclean re
