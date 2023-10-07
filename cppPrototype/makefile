FPRE = build/
PRIM = $(FPRE)primitives/
GLI = $(FPRE)GLI/
CC=@g++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

RGE: $(FPRE)RGE64.o
	@g++ $(FPRE)RGE64.o $(FPRE)rendering.o $(PRIM)tri.o -o $(FPRE)RGE $(CFLAGS)
	@./$(FPRE)RGE

unitTest: $(FPRE)unitTest.o
	@g++ $(FPRE)unitTest.o $(FPRE)rendering.o $(PRIM)tri.o -o $(FPRE)unitTest $(CFLAGS)

$(FPRE)unitTest.o: unitTests.cpp $(FPRE)rendering.o $(PRIM)tri.o
	@g++ -c unitTests.cpp -o $(FPRE)unitTest.o

$(FPRE)RGE64.o: RGE64.cpp $(PRIM)tri.o $(FPRE)rendering.o
	@g++ -c RGE64.cpp -o $(FPRE)RGE64.o

$(FPRE)rendering.o: rendering.cpp
	@g++ -c rendering.cpp -o $(FPRE)rendering.o

$(PRIM)tri.o: primitives/tri.cpp
	@g++ -c primitives/tri.cpp -o $(PRIM)tri.o

clean:
	@rm -rf build
	@mkdir build
	@mkdir $(PRIM)
	@mkdir $(GLI)
	@cp -r resources build
