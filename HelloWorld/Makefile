.PHONY: compile clean

SRC = helloworld.c
OBJ = helloworld.o
TARGET = helloworld

compile: $(TARGET)

$(TARGET): $(OBJ) 
	g++ $(OBJ) -lncurses -o $(TARGET)
	clear
	./$(TARGET)

$(OBJ): $(SRC)  
	g++ -c $(SRC)

clean:
	rm -rf *.o $(TARGET)
