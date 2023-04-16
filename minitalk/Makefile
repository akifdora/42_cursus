# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 22:03:54 by mdora             #+#    #+#              #
#    Updated: 2023/04/15 22:29:21 by mdora            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT = libft
FLAG = -Wall -Wextra -Werror
all: $(NAME)
		@gcc $(FLAG) server.c $(NAME) -o server
		@gcc $(FLAG) client.c $(NAME) -o client
$(NAME): $(LIBFT)
		@make -C $(LIBFT)
		@cp libft/libft.a .
		@echo "✅"
clean:
		@make clean -C $(LIBFT)
fclean: clean
		@make fclean -C $(LIBFT)
		@rm -rf $(NAME)
		@rm -rf server client
		@echo "🗑️"
re: fclean all

.PHONY: clean fclean all