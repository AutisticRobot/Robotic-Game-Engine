FPRE =build/
VPATH =primitives GLI
PRIM =$(FPRE)primitives/
GLI =$(FPRE)GLI/
CC=@g++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system


FILES =*.cpp primitives/*.cpp GLI/*.cpp
OFILES =$(FILES:%.cpp=build/%.o)


RGE1: $(OFILES)
	g++ $(OFILES) -o $(FPRE)RGE $(CFLAGS)
	@./$(FPRE)RGE

$(OFILES): $(FILES)
	g++ -c $(FILES) -o 

test: 
	@echo $(OFILES)
	@echo $(FILES)
	@echo $(FILES:%.cpp=build/%.o)

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
