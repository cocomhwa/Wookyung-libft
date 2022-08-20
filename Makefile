# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 12:33:52 by wooshin           #+#    #+#              #
#    Updated: 2022/08/20 09:52:06 by wooshin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
SRCS		= ft_atoi.c \
			  ft_bzero.c \
			  ft_calloc.c \
			  ft_isalnum.c \
			  ft_isalpha.c \
			  ft_isascii.c \
			  ft_isdigit.c \
			  ft_isprint.c \
			  ft_itoa.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memset.c \
			  ft_putchar_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \
			  ft_putstr_fd.c \
			  ft_split.c \
			  ft_strchr.c \
			  ft_strdup.c \
			  ft_striteri.c \
			  ft_strjoin.c \
			  ft_strlcat.c \
			  ft_strlcpy.c \
			  ft_strlen.c \
			  ft_strmapi.c \
			  ft_strncmp.c \
			  ft_strnstr.c \
			  ft_strrchr.c \
			  ft_strtrim.c \
			  ft_substr.c \
			  ft_tolower.c \
			  ft_toupper.c

OBJS 		= $(SRCS:.c=.o)

SRCS_B		= ft_lstadd_back.c \
			  ft_lstadd_front.c \
			  ft_lstclear.c \
			  ft_lstdelone.c \
			  ft_lstiter.c \
			  ft_lstlast.c \
			  ft_lstmap.c \
			  ft_lstnew.c \
			  ft_lstsize.c

OBJS_B		= $(SRCS_B:.c=.o)

all : $(NAME)

bonus : $(NAME)

ifeq ($(filter bonus, $(MAKECMDGOALS)), bonus)
$(NAME) : $(OBJS) $(OBJS_B)
	ar rcus $(NAME) $(OBJS) $(OBJS_B)
else
$(NAME) : $(OBJS)
	ar rcus $(NAME) $(OBJS)
endif

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_B)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY: all fclean clean re bonus
