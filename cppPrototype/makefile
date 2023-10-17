BUILD =build
VPATH =primitives GLI
PRIM =$(BUILD)/primitives/
GLI =$(BUILD)/GLI/
CC=@g++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

#DEPFLAGS = -MMD -MF $(@:.o=.d)
#deps := $(patsubst %.o,%.d,$(objs))
#-include $(deps)

objs := $(BUILD)/RGE.o $(BUILD)/rendering.o $(PRIM)tri.o
FILES :=$(wildcard *.cpp primitives/*.cpp)
OFILES :=$(FILES:%.cpp=build/%.o)




RGE1: $(BUILD)RGE.o
	g++ $^ -o $(BUILD)/RGE $(CFLAGS)
	@./$(BUILD)/RGE

test: 
	@echo $(OFILES)
	@echo $(FILES)

RGE: $(objs)
	@g++ $^ -o $(BUILD)/RGE $(CFLAGS)
	@./$(BUILD)/RGE

unitTest: $(BUILD)/unitTest.o $(BUILD)/rendering.o $(PRIM)tri.o
	@g++ $^ -o $(BUILD)/unitTest $(CFLAGS)

$(objs): 
	g++ -c $< -o $@

#from stackoverflow
#build/%.o : %.cpp
#    mkdir -p ${dir $@}
#    ${CC} -o $@ $< -c ${CFLAGS}

clean:
	@rm -rf build
	@mkdir build
	@mkdir $(PRIM)
	@mkdir $(GLI)
	@cp -r resources build
