# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 12:33:52 by wooshin           #+#    #+#              #
#    Updated: 2022/07/09 23:18:51 by wooshin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Wextra -Werror
RM=rm -f
INC=includes
OBJS=
NAME=libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

srcs/ft_putchar.o : srcs/ft_putchar.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)
srcs/ft_swap.o : srcs/ft_swap.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)
srcs/ft_putstr.o : srcs/ft_putstr.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)
srcs/ft_strlen.o : srcs/ft_strlen.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)
srcs/ft_strcmp.o : srcs/ft_strcmp.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY: all fclean clean re
