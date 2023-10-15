FPRE =build/
VPATH =primitives GLI
PRIM =$(FPRE)primitives/
GLI =$(FPRE)GLI/
CC=@g++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system
DEPFLAGS = -MMD -MF $(@:.o=.d)


FILES :=*.cpp primitives/*.cpp GLI/*.cpp
OFILES :=$(FILES:%.cpp=build/%.o)


RGE1: $(OFILES)
	g++ $^ -o $(FPRE)RGE $(CFLAGS)
	@./$(FPRE)RGE

%.o: %.c
	g++ -c $< -o $(FPRE)%.o

test: 
	@echo $(OFILES)
	@echo $(FILES)

RGE: $(FPRE)RGE.o $(FPRE)rendering.o $(PRIM)tri.o
	@g++ $^ -o $(FPRE)RGE $(CFLAGS)
	@./$(FPRE)RGE

unitTest: $(FPRE)unitTest.o $(FPRE)rendering.o $(PRIM)tri.o
	@g++ $^ -o $(FPRE)unitTest $(CFLAGS)


clean:
	@rm -rf build
	@mkdir build
	@mkdir $(PRIM)
	@mkdir $(GLI)
	@cp -r resources build
