.PHONY: compile clean

SRC = main.c
OBJ = main.o
TARGET = main

compile: $(TARGET)

$(TARGET): $(OBJ) 
	g++ $(OBJ) -lncurses -o $(TARGET)
	clear
	./$(TARGET)

$(OBJ): $(SRC)  
	g++ -c $(SRC)

clean:
	rm -rf *.o $(TARGET)
