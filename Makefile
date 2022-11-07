# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 21:33:43 by vsozonof          #+#    #+#              #
#    Updated: 2022/11/04 21:33:44 by vsozonof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
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
    

SRCS_B = \
    
OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

.c.o: $(SRCS)
    $(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(NAME) $(OBJS) $(OBJS_B)
    $(AR) $@ $^

norme: $(SRCS) $(SRCS_B)
    $(NM) $@ $^

all: $(NAME)

git: 
    git add .
    git commit -m "makefile"
    git push
     
clean:
    $(RM) $(OBJS) $(OBJS_B)

fclean: clean
    $(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re