#
#TODO:
#	Add header file tracking.   also try rule: $( code.getStuff(); )
#	windows builder with mingW

BUILD =build
VPATH =primitives GLI objs physics headers tests#posiblily used by make to search specified folders. I am not shure, so i just use it to delare all folders
OBJS :=$(BUILD)/objs
PHY :=$(BUILD)/physics
PRIM =$(BUILD)/primitives/
GLI =$(BUILD)/GLI/
CC=g++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

#mass of file varribles
objs := $(BUILD)/RGE.o $(BUILD)/rendering.o $(PRIM)tri.o $(BUILD)/testProject.o
testObjs := $(BUILD)/unitTests.o $(BUILD)/rendering.o $(PRIM)tri.o $(BUILD)/dataCon.o

heads := headers/GLI/Vector2.hpp
FILES :=$(wildcard *.cpp primitives/*.cpp GLI/*.cpp)
OFILES :=$(FILES:%.cpp=build/%.o)




RGE: $(objs) #$(heads)
	g++ $^ -o $(BUILD)/RGE $(CFLAGS)
	@./$(BUILD)/RGE

unitTest: $(testObjs)
	@g++ $^ -o $@ $(CFLAGS)

build/%.o:%.cpp
#    mkdir -p $(dir $@)#Copyed from a bigger mass of code form stackoverflow
	$(CC) -c $< -o $@

$(FILES):

clean:
	@rm -rf build
	@mkdir $(BUILD)
	@mkdir $(PRIM)
	@mkdir $(GLI)
	@mkdir $(OBJS)
	@mkdir $(PHY)
	@cp -r resources build
