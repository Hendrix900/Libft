
FUN = 

OBJS = main.o ftisdigit.o


all: programa

programa:  $(OBJS)
		gcc -o programa $(OBJS)

main.o: main.c
		gcc -c main.c

ft_isdigit.o: ft_isdigit.c
		gcc -c ft_isdigit.c

clean:
		rm -f *.o

