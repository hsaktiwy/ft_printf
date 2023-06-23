# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 13:46:02 by hsaktiwy          #+#    #+#              #
#    Updated: 2022/11/07 14:00:30 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAG = -Wall -Wextra -Werror 
SRC = ft_string ft_char ft_printf decimal hexa unsignedint p_hexa ft_putnbr_fd ft_putstr_fd ft_putchar_fd ft_strlen
OBJ = $(SRC:=.o)
NAME = libftprintf.a
all: $(NAME)
$(NAME) :$(OBJ)
	ar rc $@ $^
%.o:%.c ft_printf.h
	$(CC) $(FLAG) -c $< -o $@
%.o:libft/%.c libft/libft.h
	$(CC) $(FLAG) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re
