# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cammapou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 14:18:21 by cammapou          #+#    #+#              #
#    Updated: 2018/04/04 13:27:34 by cammapou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_parse.c \
		ft_get_spec.c \
		ft_spec.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_d.c \
		ft_print_wchar.c \
		ft_print_wstr.c \
		ft_print_p.c \
		ft_itoa.c \
		ft_ltoa.c \
		ft_ultoa.c \
		ft_ulltoa.c \
		ft_ltoa_base.c \
		ft_ultoa_base.c \
		ft_uitoa_base.c \
		ft_bzero.c \
		ft_strdup.c \
		ft_strnew.c \
		ft_strchr.c \
		ft_isdigit.c \
		ft_strsub.c \
		ft_strlen.c \
		ft_strjoin.c \
		ft_strlower.c \
		ft_memset.c \
		ft_strcpy.c \
		ft_uitoa.c \
		ft_print_base.c \
		ft_strcat.c \
		ft_putendl.c \
		ft_putstr.c \
		ft_print_u.c \
		ft_putchar.c


OBJ = $(SRC:.c=.o)

	SRCDIR = srcs
	OBJDIR = objs

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(OBJ))
HEADER = -I includes

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

C_NO = "\033[00m"
C_OK = "\033[35m"
C_GOOD = "\033[32m"
C_ERROR = "\033[31m"
C_WARN = "\033[33m"

SUCCESS = $(C_GOOD)SUCCESS$(C_NO)
OK = $(C_OK)OK$(C_NO)

.PHONY: all clean fclean re

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@/bin/mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $(HEADER) $< -o $@
	@echo "Linking" [ $< ] $(OK)

$(NAME): $(OBJS)
	@ar rc $@ $^
	@ranlib $@
	@echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)

clean:
	@/bin/rm -rf $(OBJDIR)
	@echo "Delete" [ objs ] $(OK)

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Delete" [ $(NAME) ] $(OK)

re: fclean all
