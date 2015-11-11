#Makefile

#Variabes
COMPILE = g++
FLAGS = -Wall -Werror -ansi -pedantic -std=c++11
OBJS = Container.o SortAlgorithm.o

#Targets
all: main.cpp $(OBJS)
	$(COMPILE) $(FLAGS) -o a.out main.cpp $(OBJS)
Container.o: Container.cpp Container.h
	$(COMPILE) $(FLAGS) -c Container.cpp
SortAlgorithm.o: SortAlgorithm.cpp SortAlgorithm.h
	$(COMPILE) $(FLAGS) -c SortAlgorithm.cpp

clean:
	rm ~rf *~o *.o a.out
