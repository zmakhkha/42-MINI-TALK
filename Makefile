
LIBFT_PATH = libft

CL_NAME = client
SRV_NAME = server

CL_NAME_BNS = client_bonus
SRV_NAME_BNS = server_bonus

SRC = Mandatory/ft_utils.c
SRV_SRC = Mandatory/ft_server.c
CL_SRC = Mandatory/ft_client.c

SRC_BNS = Bonus/ft_utils.c
SRV_SRC_BNS = Bonus/ft_server.c
CL_SRC_BNS = Bonus/ft_client.c

SRC_OBJ = $(SRC:.c=.o)
SRV_OBJ = $(SRV_SRC:.c=.o)
CL_OBJ = $(CL_SRC:.c=.o)

SRC_OBJ_BNS = $(SRC_BNS:.c=.o)
SRV_OBJ_BNS = $(SRV_SRC_BNS:.c=.o)
CL_OBJ_BNS = $(CL_SRC_BNS:.c=.o)

CC = cc

CFLAGS = -Wextra -Wall -Werror

all:  SRC_R $(SRV_NAME) $(CL_NAME)

$(SRV_NAME) : $(SRV_OBJ)
	@$(CC) $(SRC_OBJ) $(SRV_SRC) $(LIBFT_PATH)/libft.a -o $(SRV_NAME)

$(CL_NAME) : $(CL_OBJ)
	@$(CC) $(SRC) $(CL_SRC) $(LIBFT_PATH)/libft.a -o $(CL_NAME)

$(SRV_NAME_BNS) : $(SRV_OBJ_BNS)
	@$(CC) $(SRC_OBJ_BNS) $(SRV_SRC_BNS) $(LIBFT_PATH)/libft.a -o $(SRV_NAME_BNS)

$(CL_NAME_BNS) : $(CL_OBJ_BNS)
	@$(CC) $(SRC_BNS) $(CL_SRC_BNS) $(LIBFT_PATH)/libft.a -o $(CL_NAME_BNS)

SRC_R : $(SRC_OBJ)
	@make -C $(LIBFT_PATH)

SRC_B : $(SRC_OBJ_BNS)

%.o : %.c Mandatory/mandatory.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(CL_OBJ) $(SRV_OBJ) $(SRC_OBJ) $(CL_OBJ_BNS) $(SRV_OBJ_BNS) $(SRC_OBJ_BNS)

fclean:
	@rm -f $(CL_OBJ) $(SRV_OBJ) $(SRC_OBJ) $(SRV_NAME) $(CL_NAME) $(CL_OBJ_BNS) $(SRV_OBJ_BNS) $(SRC_OBJ_BNS) $(SRV_NAME_BNS) $(CL_NAME_BNS)

re	: fclean	all

bonus: SRC_B $(SRV_NAME_BNS) $(CL_NAME_BNS)

.PHONY: all clean fclean re bonus