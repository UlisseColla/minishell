FLAGS:= -Wall -Werror -Wextra
LIBRARIES:= -lreadline -lncurses

CC:= cc

NAME:= minishell

PATH_LIBFT:= libft
LIBFT:= libft.a

PATH_GNL:= libft/get_next_line
GNL:= get_next_line.a

FILES_LIST:= src/main \

FUNCTIONS:= $(patsubst %, %.c, $(FILES_LIST))

FUNCTIONS_OBJ:= $(FUNCTIONS:.c=.o)

all: $(NAME)

%.o: %.c 
	$(CC) -g $(FLAGS) -c $< -o $@
	
$(NAME): $(FUNCTIONS_OBJ)
	$(MAKE) -C $(PATH_LIBFT)
	$(MAKE) -C $(PATH_GNL)
	$(CC) $(FLAGS) $(FUNCTIONS_OBJ) $(PATH_LIBFT)/$(LIBFT) $(LIBRARIES) -o $(NAME)

clean:
	$(MAKE) clean -C $(PATH_LIBFT)
	$(MAKE) clean -C $(PATH_GNL)
	rm -f $(FUNCTIONS_OBJ)

fclean: clean
	$(MAKE) fclean -C $(PATH_LIBFT)
	$(MAKE) fclean -C $(PATH_GNL)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: