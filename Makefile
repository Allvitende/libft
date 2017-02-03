# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschroed <bschroed@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/05 14:04:01 by bschroed          #+#    #+#              #
#    Updated: 2017/02/03 10:15:12 by bschroed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
AR = ar rc
RLIB = ranlib
CFLAGS = -c -Wall -Wextra -Werror
GREEN = \x1b[32;01m
YELLOW = \x1b[33;01m
RED = \x1b[31;01m
NO_COLOR = \x1b[0m

SRC := ft_islower.c \
					ft_isupper.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_isspace.c \
					ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memalloc.c \
					ft_memdel.c \
					ft_putchar.c \
					ft_putchar_fd.c \
					ft_putendl.c \
					ft_putendl_fd.c \
					ft_putnbr.c \
					ft_putnbr_fd.c \
					ft_putstr.c \
					ft_putstr_fd.c \
					ft_strlen.c \
					ft_strdup.c \
					ft_strcpy.c \
					ft_strncpy.c \
					ft_strcat.c \
					ft_strncat.c \
					ft_strlcat.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strstr.c \
					ft_strnstr.c \
					ft_strcmp.c \
					ft_strncmp.c \
					ft_strnew.c \
					ft_strdel.c \
					ft_strclr.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strequ.c \
					ft_strnequ.c \
					ft_strsub.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_strsplit.c \
					ft_wordcount.c \
					ft_atoi.c

OBJ = $(SRC:.c=.o)
all: $(NAME)

$(NAME):
	@echo "$(YELLOW)-> Compiling...$(NO_COLOR)"
	@$(CC) $(CFLAGS) $(SRC)
	@echo "$(YELLOW)-> Creating library...$(NO_COLOR)"
	@$(AR) $(NAME) $(OBJ)
	@$(RLIB) $(NAME)
	@echo "$(GREEN)-> Success! $(NO_COLOR)"

clean:
	@echo "$(RED)-> Cleaning libft object files...$(NO_COLOR)"
	@rm -f $(OBJ)
	@echo "$(GREEN)-> Done! $(NO_COLOR)"
fclean: clean
	@echo "$(RED)-> Cleaning static lib files...$(NO_COLOR)"
	@rm -f $(NAME)
	@echo "$(GREEN)-> Done! $(NO_COLOR)"
re: fclean all

.PHONY: all clean fclean re
