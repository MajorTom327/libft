# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vthomas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 14:39:19 by vthomas           #+#    #+#              #
#    Updated: 2015/12/23 19:19:15 by vthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
SRC_PATH = ./
SRC_NAME= ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlen.c\
	ft_strdup.c\
	ft_strcpy.c\
	ft_strncpy.c\
	ft_strcat.c\
	ft_strncat.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strstr.c\
	ft_strnstr.c\
	ft_strcmp.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_memalloc.c\
	ft_memdel.c\
	ft_strnew.c\
	ft_strdel.c\
	ft_strclr.c\
	ft_striter.c\
	ft_striteri.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_strsub.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strsplit.c\
	ft_itoa.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putendl.c\
	ft_putnbr.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c
OBJ_PATH = ./obj/
INC_PATH = ./
INC_NAME = libft.h
INC = $(addprefix -I, $(INC_PATH))
CC = gcc
CFLAGS = -Werror -Wall -Wextra
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
LIB_NAME = libft.a
LIB_PATH = ./
LIB = $(addprefix $(LIB_PATH),$(LIB_NAME))

all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $(INC) -o $@ $<

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	/bin/rm -rf $(NAME)
	/bin/rm -rf $(LIB)

re: fclean all

test: re
	@clear
	$(CC) $(CFLAGS) $(INC) main.c $(LIB)
	@clear
	./a.out | cat -e
	@/bin/rm -rf a.out
	@/bin/rm -rf $(OBJ)
	@/bin/rm -rf $(LIB)

norme:
	@clear
	@norminette $(SRC) $(INC_PATH)*.h

git:
	git add $(SRC)
	git add $(addprefix $(INC_PATH),$(INC_NAME))
	git add ./Makefile
