# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: terabu <terabu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 11:27:29 by terabu            #+#    #+#              #
#    Updated: 2023/01/19 09:11:44 by terabu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall -Wextra -Werror
NAME := push_swap
LDFLAGS := -pthread
SRCS := push_swap.c \
		initialized.c \
		check.c \
		order_a.c \
		order_b.c \
		order_d.c \
		set_list.c \
		sort_short_a.c \
		sort_short_b.c \
		sort_normal.c \
		sort_quick.c \
		compression.c \
		replace_node.c \
		free.c
OBJS := $(SRCS:.c=.o)
AFILE = ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./ft_printf
	$(CC) $(CFLAGS) $(OBJS) $(AFILE) -o $(NAME)

sani: $(OBJS)
	$(CC) $(CFLAGS) -fsanitize=address $(OBJS) ${LDFLAGS} $(AFILE) -o $(NAME)

clean:
	rm -f $(OBJS)
	$(MAKE) -C ./ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ./ft_printf fclean

re: fclean all

.PHONY:	all clean fclean re
