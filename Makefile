# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicolasbernard <nicolasbernard@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 15:01:55 by nibernar          #+#    #+#              #
#    Updated: 2023/08/06 01:06:38 by nicolasbern      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#########################
#		MAKEFILE		#
#########################

NAME		= 	printf.a

INC_DIR		= 	include/

INC			= 	ft_printf.h

SRC_DIR		= 	src/


#########################
#	FOLDERS AND NAMES	#
#########################

SRC			=	ft_printf.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c\
				ft_printstr.c\
				ft_printnbr.c\
				ft_print_unsigned_int_fd.c\
				ft_printnbr_base.c\
				ft_print_pointer.c\

OBJ_DIR		=	build/

OBJ			=	$(SRC:%.c=$(OBJ_DIR)%.o)


#########################
# 	COMPILER OPTIONS	#
#########################

CC			=	gcc

FLAG		=	-Wall -Wextra -Werror


#########################
# 		RULES			#
#########################

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "ft_printf Done!\n"

$(OBJ): $(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC_DIR)$(INC)
	@mkdir -p $(@D)
	@echo "compiling: $<$(_END)"
	@$(CC) $(CC_FLAGS) -I $(INC_DIR) -c $< -o $@


#########################
# 	CLEAN COMMANDS		#
#########################

clean		:
		@echo "remove $(OBJ_DIR)"
		@rm -rf $(OBJ_DIR)

fclean		:	clean
	@echo "remove $(NAME)"
	@rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
