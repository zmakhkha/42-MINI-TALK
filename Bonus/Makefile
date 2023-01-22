
LIBFT_PATH = ../libft
CL_NAME = client
SRV_NAME = server

SRC = ft_mandatoty_utils.c
SRV_SRC = ft_server.c
CL_SRC = ft_client.c

SRC_OBJ = $(SRC:.c=.o)
SRV_OBJ = $(SRV_SRC:.c=.o)
CL_OBJ = $(CL_SRC:.c=.o)

CC = cc

CFLAGS = -Wextra -Wall -Werror

all:  SRC_R $(SRV_NAME) $(CL_NAME)

$(SRV_NAME) : $(SRV_OBJ)
	@$(CC) $(SRC_OBJ) $(SRV_SRC) $(LIBFT_PATH)/libft.a -o $(SRV_NAME)

$(CL_NAME) : $(CL_OBJ)
	@$(CC) $(SRC) $(CL_SRC) $(LIBFT_PATH)/libft.a -o $(CL_NAME)

SRC_R : $(SRC_OBJ)
	@make -C $(LIBFT_PATH)
%.o : %.c mandatory.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(CL_OBJ) $(SRV_OBJ) $(SRC_OBJ)

fclean:
	@rm -f $(CL_OBJ) $(SRV_OBJ) $(SRC_OBJ) $(SRV_NAME) $(CL_NAME)

re	: fclean	all

.PHONY: all clean fclean re