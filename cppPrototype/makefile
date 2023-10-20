#
#TODO:
#	Add header file tracking.   also try rule: $( code.getStuff(); )

BUILD =build
VPATH =primitives GLI #posiblily used by make. Make may also search these specified folders
PRIM =$(BUILD)/primitives/
GLI =$(BUILD)/GLI/
CC=g++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

#mass of file varribles
objs := $(BUILD)/RGE.o $(BUILD)/rendering.o $(PRIM)tri.o
testObjs := $(BUILD)/unitTests.o $(BUILD)/rendering.o $(PRIM)tri.o

heads := GLI/Vector2.hpp
FILES :=$(wildcard *.cpp primitives/*.cpp GLI/*.cpp)
OFILES :=$(FILES:%.cpp=build/%.o)




RGE: $(objs) #$(heads)
	g++ $^ -o $(BUILD)/RGE $(CFLAGS)
	@./$(BUILD)/RGE

unitTest: $(testObjs)
	@g++ $^ -o $@ $(CFLAGS)

build/%.o:%.cpp  #(patsubst $(BUILD)/%.o,%.cpp,$@)
#    mkdir -p $(dir $@)#Copyed from a bigger mass of code form stackoverflow
	$(CC) -c $< -o $@

$(FILES):

clean:
	@rm -rf build
	@mkdir build
	@mkdir $(PRIM)
	@mkdir $(GLI)
	@cp -r resources build
