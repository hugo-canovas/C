.PHONY: all
# fichiers sources
SRC = main.c my_put.c
# fichiers attendu
OBJ := $(SRC:.c=.o)
# Execute
EXE = my_make_evolve
# commande terminal
CC = gcc 
CFLAGS = -Wall -Wextra -std=c99

$(EXE) : $(OBJ)
	$(CC) -o $(EXE) $(OBJ)

clean:
	rm -f $(EXE)