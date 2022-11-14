# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 21:33:43 by vsozonof          #+#    #+#              #
#    Updated: 2022/11/14 17:24:18 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
NM = norminette

SRCS = 	ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strdup.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_bzero.c\
		ft_atoi.c\
		ft_calloc.c\
        
OBJS = $(SRCS:.c=.o)

%.o : %.c
		$(GCC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
		$(AR) $@ $^

norme: $(SRCS)
		$(NM) $@ $^

all: $(NAME)

git: 
		git add .
		git commit -m "JE VOUDRAIS UN BONHOMME DE NEIGE"
		git push
     
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean norme all

.PHONY: all clean fclean re norme