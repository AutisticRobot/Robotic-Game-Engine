BUILD =build
VPATH =primitives GLI
PRIM =$(BUILD)/primitives/
GLI =$(BUILD)/GLI/
CC=g++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

#DEPFLAGS = -MMD -MF $(@:.o=.d)
#deps := $(patsubst %.o,%.d,$(objs))
#-include $(deps)

#objs := $(BUILD)/RGE.o $(BUILD)/rendering.o $(PRIM)tri.o
FILES :=$(wildcard *.cpp primitives/*.cpp GLI/*.cpp)
OFILES :=$(FILES:%.cpp=build/%.o)




RGE1: $(objs)
	g++ $^ -o $(BUILD)/RGE $(CFLAGS)
	@./$(BUILD)/RGE

test: $(OFILES)
	@echo $(OFILES)

RGE: $(objs)
	@g++ $^ -o $(BUILD)/RGE $(CFLAGS)
	@./$(BUILD)/RGE

unitTest: $(BUILD)/unitTest.o $(BUILD)/rendering.o $(PRIM)tri.o
	@g++ $^ -o $(BUILD)/unitTest $(CFLAGS)

#$(objs): 
#	g++ -c $< -o $@

$(OFILES):build/%.o:%.cpp  #(patsubst $(BUILD)/%.o,%.cpp,$@)
#    mkdir -p $(dir $@)#Copyed from a bigger mass of code form stackoverflow
	@echo $@
	@echo $^

$(FILES):

#$(OFILES): $@#(patsubst $(BUILD)/%.o,%.cpp,$@)
#    mkdir -p $(dir $@)#Copyed from a bigger mass of code form stackoverflow
#	$(CC) -c $< -o $@


clean:
	@rm -rf build
	@mkdir build
	@mkdir $(PRIM)
	@mkdir $(GLI)
	@cp -r resources build
