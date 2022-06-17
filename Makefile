# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 08:06:57 by vde-vasc          #+#    #+#              #
#    Updated: 2022/06/17 10:23:22 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= tests/test_ft_atoi.c tests/test_ft_bzero.c tests/test_ft_memcpy.c tests/test_ft_memmove.c

MAIN = main

LIB	= include/header.h

all: 
	@gcc -Wall -Wextra -Werror -I ${LIB} main.c ${SRC} libft.a -o ${MAIN}

f: all  ${MAIN}
	@./${MAIN}
	
