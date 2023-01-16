# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: terabu <terabu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 11:27:29 by terabu            #+#    #+#              #
#    Updated: 2023/01/16 15:25:18 by terabu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall -Wextra -Werror
NAME := push_swap
SRCS := push_swap.c \
		order_a.c \
		order_b.c \
		order_d.c \
		set_list.c \
		sort_short_a.c \
		sort_short_b.c \
		sort_normal.c \
		sort_quick_a.c \
		compression.c \
		replace_node.c
OBJS := $(SRCS:.c=.o)


$(NAME): $(OBJS)
	$(MAKE) -C ./ft_printf
	$(CC) $(CFLAGS) $(OBJS) ft_printf/libftprintf.a -o $(NAME)
# cp ft_printf/libftprintf.a $(NAME)
# ar rcs $(NAME) $(OBJS)

all: $(NAME)
clean:
	rm -f $(OBJS)
	$(MAKE) -C ./ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ./ft_printf fclean

re: fclean all

.PHONY:	all clean fclean re
