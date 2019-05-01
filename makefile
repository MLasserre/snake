RM = /bin/rm -f
CC = g++
LD = g++
LIBS= -lsfml-graphics -lsfml-window -lsfml-system -lpthread -lm
CFLAGS = -Wextra -W -Wall -Wunused -Wshadow -Wconversion \
         -ffloat-store -pedantic

# sources-------------Editer les 2 lignes ci-dessous-------
MAIN= snake.cpp
SUB= 
#----------------------------------------------------------
HEAD = $(SUB:.cpp=.h)
OBJ_MAIN = $(MAIN:.cpp=.o)
OBJ_SUB = $(SUB:.cpp=.o)
EXEC = $(MAIN:.cpp=) 

$(EXEC): $(OBJ_MAIN) $(OBJ_SUB)
	$(LD) $(OBJ_MAIN) $(OBJ_SUB) $(LIBS) -o $@

$(OBJ_MAIN): $(MAIN) $(HEAD)
	$(CC) $(CFLAGS) -c  $< -o $@

%.o: %.cpp %.h
	$(CC) $(CFLAGS) -c  $< -o $@
   
clean :
	$(RM) *.o

superclean :
	$(RM) *.o $(EXEC)
