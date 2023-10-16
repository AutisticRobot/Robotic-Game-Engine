FPRE =build/
VPATH =primitives GLI
PRIM =$(FPRE)primitives/
GLI =$(FPRE)GLI/
CC=@g++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

DEPFLAGS = -MMD -MF $(@:.o=.d)
deps := $(patsubst %.o,%.d,$(objs))
-include $(deps)

objs := $(FPRE)RGE.o $(FPRE)rendering.o $(PRIM)tri.o
FILES :=*.cpp primitives/*.cpp
OFILES :=$(FILES:%.cpp=build/%.o)


RGE1: RGE.o
	g++ $^ -o $(FPRE)RGE $(CFLAGS)
	@./$(FPRE)RGE

test: 
	@echo $(OFILES)
	@echo $(FILES)

RGE: $(objs)
	@g++ $^ -o $(FPRE)RGE $(CFLAGS)
	@./$(FPRE)RGE

unitTest: $(FPRE)unitTest.o $(FPRE)rendering.o $(PRIM)tri.o
	@g++ $^ -o $(FPRE)unitTest $(CFLAGS)

build/%.o: %.cpp %.hpp
	g++ -c $< -o build/$@

clean:
	@rm -rf build
	@mkdir build
	@mkdir $(PRIM)
	@mkdir $(GLI)
	@cp -r resources build
