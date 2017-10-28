##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile of rush3
##

NAME = rush3
CC = gcc
SRC = src/main.c src/rush3.c
RUSH = src/rushs
FLAGS = -c -I include/
FLAGS2 = -L lib -o $(NAME) -lmy
LIB_CREATE = cd lib/my && make && cd ../../
LIB_CLEAN  = cd lib/my && make clean && cd ../../
TEST = tests
BIN =	$(RUSH)/rush1-1 \
		$(RUSH)/rush1-2 \
		$(RUSH)/rush1-3 \
		$(RUSH)/rush1-4 \
		$(RUSH)/rush1-5
RM = rm

all: $(NAME)

$(NAME):
	$(LIB_CREATE)
	$(CC) $(SRC) $(FLAGS)
	$(CC) $(SRC) $(FLAGS2)
	$(RM) main.o rush3.o
	$(LIB_CLEAN)
clean:
	$(RM) $(NAME)

lclean:
	$(LIB_CLEAN)

tclean:
	$(RM) -rf $(TEST)

btest: all
	mkdir $(TEST)
	mv $(NAME) $(TEST)
	cp $(BIN) $(TEST)
	$(LIB_CLEAN)
test: tclean btest

re: clean all
