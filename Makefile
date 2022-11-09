# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 21:33:43 by vsozonof          #+#    #+#              #
#    Updated: 2022/11/09 06:49:08 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
NM = norminette

SRCS = 	ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_strlen.c\
		ft_atoi.c\
        
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
		git commit -m "tested + main in comment"
		git push
     
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re norme